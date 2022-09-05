'''
연산 메소드

NaN이 포함된 연산에서 NaN 반환을 피하고 0으로 출력되게 하기 위해서는
fill_value 옵션을 설정하여 적용한다. 
'''

from matplotlib.pyplot import fill
import pandas as pd
import numpy as np 


student1 = pd.Series({'국어' : np.nan, '영어' : 80, '수학' : 60})
student2 = pd.Series({'수학' : 80, '영어' : 80, '국어' : 60})

add = student1.add(student2, fill_value=0)
sub = student1.sub(student2, fill_value=0)
mul = student1.mul(student2, fill_value=0)
div = student1.div(student2, fill_value=0)

print(type(div))

result = pd.DataFrame([add, sub, mul, div], index=['덧셈', '뺄셈', '곱셈', '나눗셈'])
print(result)