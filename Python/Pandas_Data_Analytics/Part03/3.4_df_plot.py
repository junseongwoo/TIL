'''
선 그래프 : DataFrame 객체.plot()

열 이름 배열에 map(int) 메소드를 적용하여 문자열로 저장된 연도 값을 정수형 데이터로 변환 
그 후 plot() 메소드를 전달하면 행 인덱스를 x 축 데이터로 적하기 때문에 값이 x 축으로 전달
'''

import pandas as pd 

df = pd.read_excel('./Pandas_Data_Analytics/Part03/남북한발전전력량.xlsx',  engine='openpyxl')

df_ns = df.iloc[[0, 5], 3:]
df_ns.index = ['South', 'North']
df_ns.columns = df_ns.columns.map(int)
print(df_ns.head())

print('\n')
df_ns.plot()
