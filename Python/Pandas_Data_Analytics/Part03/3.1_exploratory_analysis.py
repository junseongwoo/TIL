'''
데이터 내용 미리보기

데이터프레임으로 정리된 데이터셋을 처음 접할 때 head() 메소드일 확률이 높다
head() 메소드는 데이터프레임의 앞부분 일부 내용을 출력하여 내용과 구조를 개략적으로 살펴볼 수 있다.

마지막 부분을 보고 싶다면 tail()을 사용한다.

앞부분 미리보기 : DataFrame 객체.head(n)
뒷부분 미리보기 : DataFrame 객체.tail(n)
'''

import pandas as pd

df = pd.read_csv('./Pandas_Data_Analytics/Part03/auto-mpg.csv', header=None)

df.columns = ['mpg', 'cylinders', 'displacement', 'horsepower', 'weight', 'acceleration', 'model year', 'origin', 'name']

print(df.head())
print('\n')
print(df.tail())
print('\n')

'''
데이터 요약 정보 확인

데이터프레임 크기 확인 : DataFrame 객체.shape 
- shape 속성은 행과 열의 개수를 투플 형태로 보여준다.
'''
print(df.shape)
print('\n')

'''
데이터프레임의 기본 정보

info() 메소드를 데이터프레임에 적용하면 기본 정보를 출력 
클래스 유형, 행 인덱스 구성, 열 이름 종류 및 개수, 열의 자료형과 개수, 메모리 할당량 정보 

데이터프레임 기본 정보 출력 : DataFrame 객체.info()
'''
print(df.info())
print('\n')

print(df.dtypes)
print('\n')

print(df.mpg.dtypes)

'''
데이터프레임의 기술 통계 정보 요약

describe() 메소드 적용 시 
숫자 데이터를 갖는 열에 대한 주요 기술 통계 정보(평균, 표준편차, 최대값, 최소값)를 요약하면 출력 

데이터프레임 기술 통계 정보 요약 : DataFrame 객체.describe()
'''

print(df.describe())
print('\n')
print(df.describe(include = 'all'))