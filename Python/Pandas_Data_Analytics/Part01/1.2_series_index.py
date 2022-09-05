'''
인덱스 구조
인덱스는 자기와 짝을 이루느 데이터 값의 순서와 주소를 저장한다.
인덱스를 잘 활용하면 데이터 값의 탐색, 정렬, 선택, 결합 등 데이터 조작을 쉽게 할 수 있다. 

인덱스의 두 가지 종류
정수형 위치 인덱스(integer position) 
인덱스 이름(index name) or 인덱스 라벨(index label)

시리즈 클래스의 index 속성을 이용하여 인덱스 배열을 따로 선택 가능 
인덱스 배열 : Series객체.index 

시리즈 클래스의 values 속성을 이용하여 데이터 값 배열만 따로 선택 가능 
데이터 값 배열 : Series객체.value
'''

# list to pandas.Series 
# 리스트를 시리즈로 변환할 때는 딕셔너리의 키처럼 인덱스로 변환될 값이 없다.
# 따라서 인덱스를 따로 지정하지 않으면 디폴트로 정수형 위치 인덱스 (1. 2. 3 ...)이 자동으로 지정

import pandas as pd

list_data = ['2022-02-27', 3.14, 'ABC', 100, True]
sr = pd.Series(list_data)

print(sr)

idx = sr.index
val = sr.values

print(idx)
print(val)