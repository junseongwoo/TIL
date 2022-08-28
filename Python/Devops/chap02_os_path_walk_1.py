'''
- path 서브모듈도 경로에 대한 상태 정보를 얻을 수 있는 방법을 제공 
- 경로의 대상이 파일, 디렉터리, 링크 혹은 마운트인지를 알아낼 수 있음 
- 대상의 크기 또는 해당 경ㄹ에 마지막으로 접근하거나 수정한 시간 등의 상태 정보도 구할 수 있음
'''

import fire 
import os 

def walk_path(parent_path):
    print(f"Checking: {parent_path}")
    childs = os.listdir(parent_path) # os.listdir은 디렉터리 내에 있는 항목들을 반환 

    for child in childs:
        # parent_path / child 의 경로 구성
        # 각 항목을 상위 디렉터리를 포함하는 전체 경로로 구성
        child_path = os.path.join(parent_path, child) 
        
        if os.path.isfile(child_path): #해당 경로의 항목이 파일인지 확인
            last_access = os.path.getatime(child_path) # 파일의 마지막 접근 시간 구하기 
            size = os.path.getsize(child_path) # 파일의 크기 구하기

            print(f"File : {child_path}")
            print(f"\tlast accessed: {last_access}")
            print(f"\tsize : {size}")

        elif os.path.isdir(child_path): # 해당 경로의 항목이 디렉터리인지 확인
            walk_path(child_path)       # 해당 디렉터리의 하위 트리 확인

if __name__ == '__main__':
    fire.Fire()