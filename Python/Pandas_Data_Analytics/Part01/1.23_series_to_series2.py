'''
NaN 값이 있는 시리즈 연산 

'''

import pandas as pd 
import numpy as np

student1 = pd.Series({'국어' : np.nan, '영어' : 80, '수학' : 60})
student2 = pd.Series({'수학' : 80, '영어' : 80, '국어' : 60})

add = student1 + student2 
sub = student1 - student2 
mul = student1 * student2 
div = student1 / student2 

print(type(div))

result = pd.DataFrame([add, sub, mul, div], index=['덧셈', '뺄셈', '곱셈', '나눗셈'])
print(result)