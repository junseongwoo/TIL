'''
행 인덱스 초기화 

reset_index() 메소드를 활용하여 행 인덱스를 정수형 위치 인덱스로 초기화 
기존 행 인덱스는 열로 이동 

정수형 위치 인덱스로 초기화 : DataFrame 객체.reset_index()
'''

import pandas as pd 

dict_data = {'c0' : [1,2,3], 'c1' : [4,5,6], 'c2' : [7,8,9], 'c3' : [10, 11, 12]}

df = pd.DataFrame(dict_data, index = ['r0', 'r1', 'r2'])

ndf = df.reset_index()
print(ndf)