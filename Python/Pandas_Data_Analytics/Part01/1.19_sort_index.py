'''
행 인덱스를 기준으로 데이터프레임 정렬

sort_index() 메소드를 활용하여 행 인덱스를 기준으로 데이터프레임의 값을 정렬
ascending 옵션을 사용하여 오름차순 또는 내림차순으로 설정
ascending = False == 내림차순 
새롭게 정렬된 데이터프레임 반환

행 인덱스 기준 정렬 : DataFrame 객체.sort_index()
'''

import pandas as pd

dict_data = {'c0' : [1,2,3], 'c1' : [4,5,6], 'c2' : [7,8,9], 'c3' : [10, 11, 12]}

df = pd.DataFrame(dict_data, index = ['r0', 'r1', 'r2'])

ndf = df.sort_index(ascending=False)
print(ndf)
