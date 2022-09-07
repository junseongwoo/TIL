import cv2
import numpy as np

def sift_detector(new_image, image_template):
    image1 = cv2.cvtColor(new_image, cv2.COLOR_BGR2GRAY)
    image2 = image_template

    sift = cv2.SIFT_create()

    keypoints_1, descriptors_1 = sift.detectAndCompute(image1, None)
    keypoints_2, descriptors_2 = sift.detectAndCompute(image2, None)

    FLANN_INDEX_KDTREE = 0
    index_params = dict(algorithm = FLANN_INDEX_KDTREE, trees = 3)
    search_params = dict(checks = 100)

    flann = cv2.FlannBasedMatcher(index_params, search_params)

    matches = flann.knnMatch(descriptors_1, descriptors_2, k = 2)

    good_matches = []
    for m, n in matches:
        if m.distance < 0.7 * n.distance:
            good_matches.append(m)

    return len(good_matches)

cap = cv2.VideoCapture(0)

image_template = cv2.imread("box_in_scene.png", 0)

while True:
    ret, frame = cap.read()

    height, width = frame.shape[:2]

    top_left_x = width / 3
    top_left_y = (height / 2) + (height / 4)
    bottom_right_x = (width / 3) * 2
    bottom_right_y = (height / 2) - (height /4)

    cv2.rectangle(frame, (int(top_left_x), int(top_left_y)), (int(bottom_right_x), int(bottom_right_y)), 255, 3)

    cropped = frame[int(bottom_right_y):int(top_left_y), int(top_left_x):int(bottom_right_x)]
    cv2.imshow("ROI image", cropped)
    cv2.imshow("image_template", image_template)
    # cropped = cv2.flip(cropped, 1)
    frame = cv2.flip(frame, 1)
    matches = sift_detector(cropped, image_template)

    cv2.putText(frame, str(matches), (450, 450), cv2.FONT_HERSHEY_SIMPLEX, 2, (0, 255, 0), 1)
 
    threshold = 10

    if matches > threshold:
        cv2.rectangle(frame, (int(top_left_x), int(top_left_y)), (int(bottom_right_x), int(bottom_right_y)), (0, 255, 0), 3)
        cv2.putText(frame, "Object Found", (50, 50), cv2.FONT_HERSHEY_SIMPLEX, 2, (0, 255, 0), 2)

    cv2.imshow("Object Detector using SIFT", frame)
    if cv2.waitKey(1) & 0xFF == ord("q"):
        break

cap.release()
cv2.destroyAllWindows()
