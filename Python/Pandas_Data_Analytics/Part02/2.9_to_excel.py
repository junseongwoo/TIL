'''
Excel 파일로 저장

DataFrame 객체.to_excel("파일 이름(경로)")
'''

import pandas as pd 

data = {'name' : ['Jerry', 'Riah', 'Paul'],
'algol' : ["A", "A+", "B"],
'basic' : [ "C", "B", "B+"],
'C++' : [ "B+", "C", "C+"]}

df = pd.DataFrame(data)
df.set_index('name', inplace=True)

df.to_excel("./Pandas_Data_Analytics/Part02/df_sample.xlsx")