'''
행/열 삭제
drop() 매서드 : 데이터 프레임의 행 또는 열 삭제 
행을 삭제할 때는 축(axis) 옵션으로 입력, ex) axis = 0 
열을 삭제할 때는 축(axis) 옵션을 axis = 1로 입력 

drop() 메소드는 기존 객체를 변경하지 않고 새로운 객체를 반호나하는 점에 유의
원본 객체를 직접 변경하기 위해서는 inplace = True 옵션을 추가 

행삭제 : DataFrame 객체.drop(행 인덱스 or 배열, axis = 0)
열삭제 : DataFrame 객체.drop(열 인덱스 or 배열, axis = 1)
'''

from operator import index
import pandas as pd

exam_data = {'수학' : [ 90, 80, 70], '영어': [ 98, 89, 95],
             '음악' : [ 85, 95, 100], '체육' : [ 100, 90, 90]}

df = pd.DataFrame(exam_data, index=['서준','우현','인아'])

print(df)

# 데이터프레임을 복제 후 df2의 행 삭제
df2 = df[:]
#df2.drop('우현', inplace = True)
#print(df2)

# 데이터프레임 복제 후 df3의 2개의 행 삭제
df3 = df[:]
#df3.drop(['우현', '인아'], axis = 0, inplace = True)
#print(df3)
