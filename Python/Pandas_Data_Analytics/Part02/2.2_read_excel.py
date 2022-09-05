'''
Excel 파일 (.xlsx)의 행과 열은 데이터프레임의 행렬에 일대일 대응
read_excel()은 read_csv() 사용법과 유사하다.

Excel -> 데이터프레임 : pandas.read_excel("파일 경로(이름)")
'''

import pandas as pd 

df1 = pd.read_excel('./Pandas_Data_Analytics/Part02/남북한발전전력량.xlsx', engine='openpyxl')
df2 = pd.read_excel('./Pandas_Data_Analytics/Part02/남북한발전전력량.xlsx', header = None, engine='openpyxl')

print(df1)
print('\n')
print(df2)