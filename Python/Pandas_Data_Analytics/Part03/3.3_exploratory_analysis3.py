'''
평균값

모든 열의 평균값 : DataFrame 객체.mean()
특정 열의 평균값 : DataFrame 객체["열 이름"].mean()
'''

import pandas as pd 

df = pd.read_csv('./Pandas_Data_Analytics/Part03/auto-mpg.csv', header=None)
df.columns = ['mpg', 'cylinders', 'displacement', 'horsepower', 'weight', 'acceleration', 'model year', 'origin', 'name']

print(df.mean())
print('\n')
print(df['mpg'].mean())
print(df.mpg.mean())
print('\n')
print(df[['mpg', 'weight']].mean())

'''
중간 값 

median() 메소드를 적용하면 산술 데이터를 갖는 모든 열의 중간값 계산하여 시리즈로 반환 

모든 열의 중간값 : DataFrame 객체.median()
특정 열의 중간값 : DataFrame["열 이름"].median()
'''

print(df.median())
print('\n')
print(df['mpg'].median())

'''
최대값 

max() 메소드를 적용하면 데이터프레임의 각 열이 갖는 데이터 값 중에서 최대 값을 계산하여 시리즈로 반환 

모든 열의 최대값 : DataFrame 객체.max()
특정 열의 최대값 : DataFrame 객체["열 이름"].max()
'''

print(df.max())
print('\n')
print(df['mpg'].max())


'''
최소값 

min() 메소드를 적용하면 데이터프레임의 각 열이 갖는 데이터 값 중에서 최소 값을 계산하여 시리즈로 반환

모든 열의 최소값 : DataFrame 객체.min()
특정 열의 최소값 : DataFrame 객체["열 이름"].min()
'''

print(df.min())
print('\n')
print(df['mpg'].min())

'''
표준편차 

std() 메소드를 적용하면 산술 데이터를 갖는 열의 표준편차를 계산하여 시리즈로 반환

모든 열의 표준편차 : DataFrmae 객체.std()
특정 열의 표준편차 : DataFrame 객체["열 이름"].std()
'''

print(df.std())
print('\n')
print(df['mpg'].std())

'''
상관계수

corr() 메소드를 적용하면 두 열 간의 상관계수를 계산
산술 데이터를 갖는 모든 열에 대하여 2개씩 서로 짝을 짓고, 각각의 경우에 대하여 상관계수를 계산

모든 열의 상관계수 : DataFrame 객체.corr()
특정 열의 상관계수 : DataFrame 객체[열 이름의 리스트].corr()
'''

print(df.corr())
print('\n')
print(df[['mpg', 'weight']].corr())