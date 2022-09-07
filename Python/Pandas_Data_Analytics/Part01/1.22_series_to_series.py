'''
시리즈 vs 시리즈 

시리즈끼리 사칙연산은 같은 인덱스를 원소끼리 계산 
연산결과를 매칭하여 새 시리즈를 반환

시리즈 연산 : Series1 + 연산자 + Series2 
'''

import pandas as pd 

student1 = pd.Series({'국어' : 100, '영어' : 80, '수학' : 60})
student2 = pd.Series({'수학' : 80, '영어' : 80, '국어' : 60})

add = student1 + student2 
sub = student1 - student2 
mul = student1 * student2 
div = student1 / student2 

print(type(div))

result = pd.DataFrame([add, sub, mul, div], index=['덧셈', '뺄셈', '곱셈', '나눗셈'])
print(result)