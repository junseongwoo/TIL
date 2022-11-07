# HSMS (E37) 정의
- HIGH-SPEED SECS MESSAGE SERVICES
- RS-232 통신을 기반으로 사용한 SECS-I의 제약조건(통신 거리 약 10m)을 보완하는 통신 방식으로 TCP/IP를 사용했다.
- HSMS는 SECS-II를 이더넷 방식으로 전송하기 위한 규약으로 E37로 정의되어 있다.

## HSMS 프로토콜 구조
<img src="https://github.com/junseongwoo/TIL/blob/main/Network/img/HSMS_Protocol_1.jpg"  width="600" height="100"/>

## 용어 정리
|---|---|---|
|---|---|---|
|Select|통신 연결이 됐는지 확인할 때 사용|---|
|Link Test|통신연결의 유지를 확인할 때 사용|ex) 랜선 연결 끊겼을 때|
|---|---|---|


3.1 개요 "TCP/IP환경을 사용하여 메시지를 교환하기에 적합한 통신 인터페이스"

 - TCP/IP스트림 지원을 사용하며, 이는 연속된 바이트의 스트림을 안정적으로 양방향 동시 전송

 - “entity” is used instead of “host” or “equipment.”

 - entity 들 간의 secs-II 인코딩 메세지 교환을위한 protocol

 - entity 간 TCP/IP 교환의 필요성을 확인하기 위한 명시적 통신종료

 

3.2 Connection state diagram

3.4 HSMS Message Format
3.4.1 Length             

- MSG header + MSG Length = 4bytes

 

3.4.2 Header

- Control MSG + DATA MSG

- Session ID = 각각 entity간 관계규정

- Header byte2 = SECS-II Stream

- Header byte3 = SECS-II Function

- Ptype = SECS-II MSG Encoding

- Stype = HSMS Control MSG(3.3)

- System Bytes = transaction uniquely

 

3.4.3 Text

- SECS-II