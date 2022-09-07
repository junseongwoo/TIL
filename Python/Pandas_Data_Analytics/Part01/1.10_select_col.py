'''
열 선택

열 데이터를 1개만 선택할 떄는 대괄호[] 안에 열 이름을 따옴표와 함께 입력 하거나
도트. 다음에 열 이름을 입력하는 두가지 방식 사용

도트를 사용하는 방법은 반드시 이름이 문자열일 경우에만 가능 

열 1개 선택(시리즈 생성) : DataFrame 객체[*열 이름*] 또는 DataFrame 객체.열이름

대괄호 안에 열 이름의 리스트를 입력하면 리스트의 원소인 열 모두를 선택하여 반환 
리스트의 원소로 열 이름 한 개만 있는 경우에도, 2중 대괄호[[]]를 사용하는 것이 되어 반환되는 객체는 시리즈가 아니라 데이터프레임이 된다.

열 n개 선택(데이터프레임 생성): DataFrame 객체[ [ 열1, 열2, ..., 열n ]]
'''

import pandas as pd 

exam_data = {'이름' : [ '서준', '우현', '인아'],
             '수학' : [ 90, 80, 70],
             '영어' : [ 98, 89, 95],
             '음악' : [ 85, 95, 100],
             '체육' : [ 100, 90, 90]}

df = pd.DataFrame(exam_data)
print(df) 
print(type(df))

math1 = df['수학']
print(math1)
print(type(math1))
print('\n')

english = df.영어
print(english)
print(type(english))

music_gym = df[['음악', '체육']]
print(music_gym)
print(type(music_gym))
print('\n')

math2 = df[['수학']]
print(math2)
print(type(math2))