'''
데이터프레임 vs 데이터프레임 

데이터프레임의 같은 행, 열 위치에 있는 원소끼리 계산
동일한 위치의 원소끼리 계산한 결과값을 원래 위치에 다시 입력하여 데이터프레임을 만든다.
어느 한쪽의 원소가 없거나 NaN이면 NaN 반환
'''


import pandas as pd 
import seaborn as sns

titanic = sns.load_dataset('titanic')
df = titanic.loc[:, ['age', 'fare']]

add = df+10 

sub = add - df 