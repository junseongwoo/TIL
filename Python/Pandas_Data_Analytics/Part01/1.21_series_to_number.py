'''
시리즈 vs 숫자 

시리즈 객체에 어떤 숫자를 더하면 시리즈의 개별 원소에 각각 숫자를 더하고
계산한 결과를 시리즈로 반환 

사칙연산은 모두 가능

시리즈와 숫자 연산 : Series객체 + 연산자 + 숫자 
'''

import pandas as pd 

student1 = pd.Series({'국어' : 100, '영어' : 80, '수학' : 60})
print(student1)

percentage = student1 / 200
print(percentage)

print(type(percentage))