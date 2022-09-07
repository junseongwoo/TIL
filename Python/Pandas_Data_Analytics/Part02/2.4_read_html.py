'''
HTML 웹 페이지에서 표 속성 가져오기

read_html() 함수는 
HTML 웹 페이지에 있는 <table> 태그에서 표 형식의 데이터를 모두 찾아서 데이터프레임으로 변환

표 데이터는 각각 별도의 데이터프레임으로 변환되기 때문에 여러 개의 데이터프레임을 원소로 갖는 리스트가 반환

HTML 표 속성 읽기 : pandas.read_html("웹 주소(URL)" or "HTML 파일 경로(이름)")
'''

import pandas as pd 

url = './Pandas_Data_Analytics/Part02/sample.html'

tables = pd.read_html(url)

len_tables = len(tables)
print(len(tables))
print('\n')

for i in range(len_tables):
    print("tables[%s]" % i )
    print(tables[i])
    print('\n')

df = tables[1]

df.set_index(['name'], inplace = True)
print(df)