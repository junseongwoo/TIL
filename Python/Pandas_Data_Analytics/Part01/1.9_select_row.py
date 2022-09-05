'''
행 선택
데이터프레임의 행 데이터를 선택하기 위해서는 loc와 iloc 인덱서를 사용한다.
인덱스 이름을 기준으로 행을 선택할 때는 loc을 이용
정수형 위치 인덱스를 사용할 때는 iloc을 이용한다.

loc : 인덱스 이름, 범위 끝 포함
iloc : 정수형 위치 인덱스, 범위 끝 제외 
'''

from turtle import position
import pandas as pd 

exam_data = {'수학' : [ 90, 80, 70], '영어' : [ 98, 89, 95],
             '음악' : [ 85, 95, 100], '체육' : [ 100, 90, 90]}

df = pd.DataFrame(exam_data, index = ['서준', '우현', '인아'])
print(df)

label1 = df.loc['서준']
position1 = df.iloc[0]
print(label1)
print(position1)

# 행 인덱스 사용하여 2개 이상 행 선택
label2 = df.loc[['서준', '우현']]
position2 = df.iloc[[0, 1]]
print(label2)
print(position2)

# 행 인덱스 범위를 지정하여 어러 개의 행을 동시에 선택하는 슬라이싱 기법 
label3 = df.loc['서준' : '우현']
position3 = df.iloc[0:1]
print(label3)
print(position3)