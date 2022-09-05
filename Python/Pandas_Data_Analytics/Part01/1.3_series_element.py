'''
원소 선택 
정수형 위치 인덱스는 대괄호([]) 안에 위치를 나타내는 숫자 입력 = 리스트 슬라이싱 동일 
인덱스 이름(라벨)을 사용할 때는 대괄호([]) 안에 이름과 함께 따옴표 입력("", '')
'''

# tuple to pandas.Series 

import pandas as pd 

tuple_data = ('서울', '2022-02-27', '남', True)

sr = pd.Series(tuple_data, index = ['지역', '날짜', '성별', '성인여부'])

print(sr)

print(sr[0])
print(sr['지역'])

# 리스트를 사용한 선택 
print(sr[[1, 2]])
print(sr[['날짜', '성별']])

# 슬라이싱을 사용한 선택
print(sr[1 : 2])
print(sr['날짜' : '성별'])