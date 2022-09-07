'''
특정 열을 행 인덱스로 설정 

set_index() 메소드를 사용하여 데이터프레임의 특정 열을 행 인덱스로 설정 
원본 DF를 바꾸지 않고 새로운 DF 객체를 반환하는 점 유의! 

특정 열을 행 인덱스로 설정 : DataFrame 객체.set_index(['열 이름'] or '열 이름')
'''

import pandas as pd 

exam_data = {'이름' : [ '서준', '우현', '인아'],
             '수학' : [ 90, 80, 70],
             '영어' : [ 98, 89, 95],
             '음악' : [ 85, 95, 100],
             '체육' : [ 100, 90, 90]}

df = pd.DataFrame(exam_data)

# 특정 col을 DF의 행 index로 설정 
ndf = df.set_index(['이름'])
print(ndf)

ndf2 = ndf.set_index('음악')
print(ndf2)

ndf3 = ndf.set_index(['수학', '음악'])
print(ndf3)