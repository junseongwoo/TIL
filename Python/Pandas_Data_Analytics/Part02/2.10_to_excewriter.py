'''
여러 개의 데이터프레임을 하나의 Excel 파일로 저장 
pandas.ExcelWriter("파일 이름(경로)")

pandas의 ExcelWriter() 함수는 Excel 워크북 객체를 생성
워크북 객체는 우리가 아는 Excel 파일 

to_excel() 메소드를 적용할 때 삽입하려는 워크북 객체를 인자로 전달하고 
sheet_name 옵션에 시트 이름을 입력하여 삽입되는 시트 위치를 지정 가능 

데이터프레임을 삽입하는 시트 이름을 다르게 설정하면, 
같은 Excel 파일의 서로 다른 시트에 여러 데이터프레임을 구분하여 저장 
'''

import pandas as pd 

data1 = {'name' : ['Jerry', 'Riah', 'Paul'],
'algol' : ["A", "A+", "B"],
'basic' : [ "C", "B", "B+"],
'C++' : [ "B+", "C", "C+"]}

data2 = {'c0' : [1,2,3],
'c1' : [4,5,6],
'c2' : [7,8,9],
'c3' : [10,11,12],
'c4' : [13,14,15]}

df1 = pd.DataFrame(data1)
df1.set_index('name', inplace=True)

df2 = pd.DataFrame(data2)
df2.set_index('c0', inplace=True)

writer = pd.ExcelWriter('./Pandas_Data_Analytics/Part02/df_excelwriter.xlsx')
df1.to_excel(writer, sheet_name="sheet1")
df2.to_excel(writer, sheet_name="sheet2")
writer.save()