'''
원소 선택

데이터프레임의 행 인덱스와 열 이름을 [행, 열] 형식의 2차원 좌표로 입력하여 원소 위치를 지정하는 방법 
원소가 위치하는 행과 열의 좌표를 입력하면 해당 위치의 원소가 반환
1개의 행과 2개 이상의 열을 선택 or 반대로 2개 이상의 행과 1개의 열을 선택하는 경우 -> 시리즈 객체 반환 

2개 이상의 행과 열을 선택 -> 데이터프레임 객체 반환

인덱스 이름 : DataFrame 객체.loc[행 인덱스, 열 이름]
정수 위치 인덱스 : DataFrame 객체.iloc[행 번호, 열 번호]
'''

import pandas as pd

exam_data = {'이름' : [ '서준', '우현', '인아'], 
             '수학' : [ 90, 80, 70],
             '영어' : [ 98, 89, 95],
             '음악' : [ 85, 95, 100],
             '체육' : [ 100, 90, 90]}

df = pd.DataFrame(exam_data)

df.set_index('이름', inplace = True)
print(df)

a = df.loc['서준', '음악']
print(a)
b = df.iloc[0, 2]
print(b)

c = df.loc['서준', ['음악', '체육']]
print(c)

d = df.iloc[0, [2,3]]
print(d)

e = df.loc['서준', '음악' : '체육']
print(e)

f = df.iloc[0, 2:]
print(f)