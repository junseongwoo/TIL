'''
행 인덱스 / 열 이름 설정
데이터프레임 구조적 특성 때문에 
2차원 배열 형태의 데이터를 데이터프레임으로 변환하기 쉽다

행 인덱스/열 이름 설정 : pandas.DataFrame( 2차원 배열, index = 행 인덱스 배열, columns = 열 이름 배열)
'''

# list to DataFrame 
# 리스트가 행이 된다. 
import pandas as pd 

df = pd.DataFrame([[30, '남', '홍길동'], [26, '여', '김나라']],
                    index = ['서울', '경기'],
                    columns = ['나이', '성별', '이름'])

print(df) 
print(df.index)
print(df.columns)
print('-------------------')
df.index = ['강남', '용인']
df.columns = ['연령', '남녀', '성함']

print(df) 
print(df.index)
print(df.columns)
print('-------------------')

