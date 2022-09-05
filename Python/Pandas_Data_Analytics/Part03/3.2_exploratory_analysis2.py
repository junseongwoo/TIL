'''
각 열의 데이터 개수

count() 메소드는 데이터프레임의 각 열이 가지고 있는 데이터 개수를 시리즈 객체로 반환
단, 유효한 값만 반환

열 데이터 개수 확인 : DataFrame 객체.count()
'''

import pandas as pd 

df = pd.read_csv('./Pandas_Data_Analytics/Part03/auto-mpg.csv', header=None)
df.columns = ['mpg', 'cylinders', 'displacement', 'horsepower', 'weight', 'acceleration', 'model year', 'origin', 'name']

print(df.count())
print('\n')

print(type(df.count()))


'''
각 열의 고유값 개수

value_counts() 메소드는 시리즈 객체의 고유값 개수를 세는 데 사용 
데이터프레임의 열은 시리즈이므로, 각 열의 고유값의 종류와 개수를 확인 
고유값이 행 인덱스, 고유값의 개수가 데이터 값이 되는 시리즈 객체가 만들어짐 

dropna = True 설정하면 데이터 값 중에서 NaN을 제외하고 개수를 계산 

열 데이터 고유값 개수 : DataFrame 객체["열 이름"].value_counts() 
'''

uniq_values = df['origin'].value_counts()
print(uniq_values)
print('\n')

print(type(uniq_values))