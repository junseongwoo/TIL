'''
원소 값 변경

데이터프레임의 특정 원소를 선택하고 새로운 데이터 값을 지정해주면 원소 값이 변경된다.
변경할 원소를 선택할 때 데이터프레임 인덱싱과 슬라이싱 기법을 사용

원소 값 변경 : DataFrame 객체의 일부분 또는 원소 = 새로운 값 
'''

import pandas as pd

exam_data = {'이름' : [ '서준', '우현', '인아'],
             '수학' : [ 90, 80, 70],
             '영어' : [ 98, 89, 95],
             '음악' : [ 85, 95, 100],
             '체육' : [ 100, 90, 90]}

df = pd.DataFrame(exam_data)

df.set_index('이름', inplace = True)

df.iloc[0][3] = 80
print(df)

df.loc['서준']['체육'] = 90
print(df)

df.loc['서준', '체육'] = 100
print(df)

df.loc['서준', ['음악', '체육']] = 50
print(df)

df.loc['서준', ['음악', '체육']] = 100, 90
print(df)
