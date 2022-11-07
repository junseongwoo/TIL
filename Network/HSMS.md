# HSMS (E37) 정의
- HIGH-SPEED SECS MESSAGE SERVICES
- RS-232 통신을 기반으로 사용한 SECS-I의 제약조건을 보완하는 통신 방식으로 TCP/IP를 사용했다.
- HSMS는 SECS-II를 이더넷 방식으로 전송하기 위한 규약으로 E37로 정의되어 있다.

## HSMS 프로토콜 구조
<img src="https://github.com/junseongwoo/TIL/blob/main/Network/img/HSMS_Protocol_1.jpg"  width="800" height="50"/>

- Len : Header와 Data 부분의 길이를 결정
- Header : 데이터 제어 (10byte)
- Data : 전송 데이터 (SECS-ll), Len - Header bytes

### Header (10bytes)
|순서|이름|내용|
|:---:|:---:|:---:|
|0~1|ID|DeviceID|
|2|Header Byte 1|Stream 번호를 의미|
|3|Header Byte 2|Function 번호를 의미|
|4|Ptype|SECS-II 사용을 의미 = 0|
|5|Stype|상태 결정, select, Link Test 등|
|6~9|Sytem Byte|통신 고유 ID값으로 통신할 떄마다 고윳값 전송|

## 용어 정리
|이름|내용|비고|
|---|---|---|
|Select|통신 연결이 됐는지 확인할 때 사용|---|
|Link Test|통신연결의 유지를 확인할 때 사용|ex) 랜선 연결 끊겼을 때|
|---|---|---|

