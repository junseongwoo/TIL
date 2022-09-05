'''
csv 파일로 저장 

데이터프레임은 2차원 배열로 구조화된 데이터라 2차원 구조를 갖는 CSV 파일로 변환 가능 

to_csv() 메소드를 적용하여 변환 

CSV 파일로 저장 : DataFrame 객체.to_csv("파일 이름(경로)")
'''

import pandas as pd 

data = {'name' : ['Jerry', 'Riah', 'Paul'],
'algol' : ["A", "A+", "B"],
'basic' : [ "C", "B", "B+"],
'C++' : [ "B+", "C", "C+"]}

df = pd.DataFrame(data)
df.set_index('name', inplace=True)
print(df)

df.to_csv("./Pandas_Data_Analytics/Part02/df_sample.csv")