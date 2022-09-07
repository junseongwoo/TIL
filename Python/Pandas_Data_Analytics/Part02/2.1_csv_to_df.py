'''
CSV 파일

CSV (comma - separated values) : 데이터 값을 쉼표로 구분하고 있는 텍스트 파일 
쉼표로 열을 구분하고 줄바꿈으로 행 구분 

CSV -> 데이터프레임 : pandas.read_csv("파일경로(이름)")
'''

import pandas as pd 

file_path = '.\Pandas_Data_Analytics\Part02\\read_csv_sample.csv'

df1 = pd.read_csv(file_path)
print(df1)
print('\n')

df2 = pd.read_csv(file_path, header=None)
print(df2)