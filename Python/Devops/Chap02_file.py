''' 
open 함수를 사용해 읽기와 쓰기가 가능한 파일 객체를 생성 가능
파일 경로와 모드 2개의 인수가 필요, 모드의 초깃값은 읽기로 설정
모드는 파일 읽기 또는 쓰기 여부와 파일의 데이터가 텍스트 또는 바이너리인지를 지정
'''
file_path = 'book.txt' 
open_file = open(file_path, 'r') 

text = open_file.read() 

#print(len(text))
#print(text[15])
#print(open_file)

open_file.close()

# 작업이 끝난 파일은 close 처리해주는 습관을 들이는 것이 좋습니다.
# 파이썬은 더 이상 사용하지 않는 파일을 알아서 처리하는 기능이 있지만, 그때까지 리소스를 점유하게 되며 
# 다른 프로세스가 해당 파일을 열지 못하게 될 수도 있기 때문입니다. 

'''
readlines 메서드를 사용해 파일을 읽을 수도 있습니다.
이 메서드는 파일을 읽어서 그 내용을 개행한 문자(newline character) 기준으로 나눠 문자열 리스트를 반환해줍니다.
각 문자열은 원본 텍스트의 한 라인에 해당합니다.
'''

file_path = 'book2.txt'
open_file = open(file_path, 'r')
text = open_file.readlines() 
#print(len(text))
#print(text[0])
#print(text[1])
#print(text[2])

open_file.close()

'''
with 구문을 사용하면 간편하게 파일을 열 수 있습니다.
이 경우 명시정으로 파일을 close 하지 않아도 되는데
파이썬이 들여쓰기가 끝나는 위치에서 파일을 닫고 리소스를 자동으로 해제해 주기 때문입니다.
'''

with open(file_path, 'r') as open_file:
    text = open_file.readlines()

#print(text[2])
#print(open_file.closed)


'''
파일에 쓰기를 하려면 w를 인수로 하는 쓰기 모드를 사용해야 합니다.
direnv 툴은 일부 개발 환경을 자동으로 설정하는 데 사용 되며, 
.envrc라는 파일에 환경 변수와 애플리케이션 런타임을 정의해두면 direnv가 해당 파일이 있는 디렉터리에 이를 설정해 줍니다.
write 플래그로 파일을 열어서 환경 변수 STAGE PROD로, 
TABLE_ID는 token-storage-1234로 설정할 수 있습니다.
'''

text = '''export STAGE=PROD
export TABLE_ID = token-storage-1234'''

with open('.envrc', 'w') as opend_file:
    opend_file.write(text)

'''
open 함수는 파일이 존재하지 않으면 파일을 생성하고 이미 있으면 덮어씁니다.
기존 내용을 유지하면서 해당 파일에 추가만 하려면 a 플래그를 사용해야 합니다.
이 플래그는 원래 내용을 유지하면서 파일의 끝에 새로운 텍스트를 추가할 수 있게 해줍니다.
바이너리 데이터는 wb 또는 ab를 사용하는 것이 안전합니다. 
그 이유는 텍스트가 아닌 내용을 w나 a플래그를 사용한다면 파일이 손상이 될 수 있습니다.
이는 파이썬이 텍스트 데이터를 쓰면서 해당 플랫폼에 따라 라인 엔딩을 변환하기 때문입니다.
'''
