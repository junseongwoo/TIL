# SECS-II (SEMI E5) 정의
- SEMI EQUIPMENT COMMUNICATIONS STANDARD 2 MESSAGE CONTENT
- 호스트와 장비 간에 사용되는 메세지 통신 규정
- 호스트와 장비 간에 주고 받는 메세지 이름은 Stream과 Function의 조합으로 규정 
- Stream : 특성을 가진 메세지 그룹 
    - ex) S9 : H(호스트)와 E(장비) 사이의 통신 에러 
- Function : Stream 안에서 세부 기능에 관련된 메세지
    - ex) S9F1 : ID가 안맞을 때 에러 
    - Function 번호는 홀수 번호를 가진다.
    - Reply 메세지의 번호는 Function 번호의 +1을 하여 짝수 번호를 가짐 
- Message 전송 후 Reply를 받을 때까지 TimeOut 값은 보통 45초를 사용한다. 

## 메세지 예시
- S9 : H와 E 사이의 통신 에러
    - S9F1 : Id가 안맞을 때 
    - S9F3 : 정의되지 않은 Stream 사용 
    - S9F5 : 정의되지 않은 Function 사용
    - S9F7 : 데이터가 맞지 않을 때 
    - S9F9 : Time Out 

## 용어 정리
|용어|내용|비고|
|---|---|---|
|H|호스트|
|E|장비|
|->, <-|통신 방향|
|<->|양방향 통신|
|S|Stream|
|F|Function|
|ECID|장비 상수|장비 설정 값|
|SVID|장비 변수|장비의 현재 상태|
|EOID|필수 장비 상수|