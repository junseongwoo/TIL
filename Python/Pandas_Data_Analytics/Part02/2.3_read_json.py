'''
JSON 파일

JSON 파일(.json)은 데이터 공유를 목적으로 개발된 특수한 파일 형식

key : value 구조를 가지는데 중첩되는 방식에 따라 다르게 적용

JSON -> 데이터프레임 : pandas.read_json("파일 경로(이름)")
'''

import pandas as pd 

df = pd.read_json('./Pandas_Data_Analytics/Part02/read_json_sample.json')

print(df)
print('\n')
print(df.index)