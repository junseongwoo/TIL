'''
데이터프레임 vs 숫자 

데이터프레임에 어떤 숫자를 더하면 모든 원소에 숫자를 더한다
사칙연산 모두 가능 
기존 데이터프레임의 형태를 유지한 채 원소 값만 바꾼 데이터프레임 객체로 반환

데이터프레임과 숫자 연산 : DataFrame 객체 + 연산자 + 숫자
'''

import pandas as pd 
import seaborn as sns

titanic = sns.load_dataset('titanic')
df = titanic.loc[:, ['age', 'fare']]

print(df.head())
print(type(df)) 
print('/n')
add = df + 10
print(add.head())
print(type(add))