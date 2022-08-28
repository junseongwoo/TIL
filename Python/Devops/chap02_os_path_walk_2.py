'''
- os.walk를 사용한 디렉터리 트리 탐색
- os.walk() 함수는 매 번 반복할 때마다 순서대로 하나씩 튜플을 반환하는 제네레이터를 반환
- 튜플은 현재 경로, 디렉터리 목록, 파일 목록으로 이뤄짐 
'''


import fire
import os 

def walk_path(parent_path):
    for parent_path, directories, files in os.walk(parent_path):
        print(f"Checking : {parent_path}")

        for file_name in files:
            file_path = os.path.join(parent_path, file_name)
            last_access = os.path.getatime(file_path) # 파일의 마지막 접근 시간 구하기 
            size = os.path.getsize(file_path) # 파일의 크기 구하기

            print(f"File : {file_path}")
            print(f"\tlast accessed: {last_access}")
            print(f"\tsize : {size}")

if __name__ == '__main__':
    fire.Fire()