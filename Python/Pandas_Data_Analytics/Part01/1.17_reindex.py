'''
행 인덱스 재배열

reindex() 메소드를 사용하면 df의 행 인덱스를 새로운 배열로 재지정할 수 있다.

새로운 배열로 행 인덱스를 재지정 : DF 객체.reindex( 새로운 인덱스 배열 ) 
'''
import pandas as pd

dict_data = {'c0' : [1,2,3], 'c1' : [4,5,6], 'c2' : [7,8,9], 'c3' : [10, 11, 12], 'c4' : [13, 14, 15]}

df = pd.DataFrame(dict_data, index= ['r0', 'r1', 'r2'])
print(df)

new_index = ['r0', 'r1', 'r2', 'r3', 'r4']
ndf = df.reindex(new_index)
print(ndf)

new_index = ['r0', 'r1', 'r2', 'r3', 'r4']
ndf2 = df.reindex(new_index, fill_value = 0)
print(ndf2)