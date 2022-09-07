'''
데이터프레임에 rename() 메소드를 적용하면 
행 인덱스 또는 열 이름의 일부를 선택하여 변경 가능 
단, 원본 객체를 직접 수정하는 것이 아니라 새로운 데이터 프레임을 반환하는 점에 유의
원본 객체를 직접 수정하려면 inplace = True 필요 

pandas.DataFrame.객체.rename(index = {기존:변경}, inplace = True)
pandas.DataFrame.객체.rename(columns = {기존:변경}, inplace = True)
'''

import pandas as pd 

df = pd.DataFrame([[30, '남', '홍길동'], [26, '여', '김나라']],
                    index = ['서울', '경기'],
                    columns = ['나이', '성별', '이름'])

print(df) 
print(df.index)
print(df.columns)
print('-------------------')

df.rename(columns={'나이':'연령', '이름':'성함'}, inplace= True)
df.rename(index = {'서울' : '강남', '경기' : '용인'}, inplace = True)

print(df) 
print(df.index)
print(df.columns)
print('-------------------')
