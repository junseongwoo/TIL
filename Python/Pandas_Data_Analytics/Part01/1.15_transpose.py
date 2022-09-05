'''
행, 열의 위치 바꾸기

행, 열 바꾸기 : DataFrame 객체.transpose() or DataFrame 객체.T
'''

import pandas as pd

exam_data = {'이름' : [ '서준', '우현', '인아'],
             '수학' : [ 90, 80, 70],
             '영어' : [ 98, 89, 95],
             '음악' : [ 85, 95, 100],
             '체육' : [ 100, 90, 90]}

df = pd.DataFrame(exam_data)

df = df.transpose()
print(df)

df = df.T
print(df)