'''
특정 열의 데이터 값을 기준으로 데이터프레임 정렬 

sort_values() 메소드를 활용하여 데이터를 기준으로 정렬 가능
새롭게 정렬된 데이터프레임 객체 반환

열 기준 정렬 : DataFrame 객체.sort_value()
'''

import pandas as pd 

dict_data = {'c0' : [1,2,3], 'c1' : [4,5,6], 'c2' : [7,8,9], 'c3' : [10, 11, 12]}

df = pd.DataFrame(dict_data, index = ['r0', 'r1', 'r2'])

ndf = df.sort_values(by = 'c1', ascending=True)
print(ndf)