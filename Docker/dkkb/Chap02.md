# | Section 1 : 도커의 동작 원리
## | 도커의 구조 
- 일반적으로 도커와 컨테이너는 서버에서 사용 
<img src="https://github.com/junseongwoo/TIL/blob/main/Docker/dkkb/img/2-1-1.jpg"  width="400" height="200"/>

- **운영체제 위에 도커 엔진이 동작하고 그 위에서 컨테이너가 동작**

### 컨테이너 안에는 운영체제 '비슷한 것'
- '컨테이너에 넣는다'는 표현 -> 모든 컨테이너에는 리눅스 운영체제 '비슷한 무언가'가 들어 있어서 실제로는 빈 컨테이너에 넣는 것이 아니다.
- 도커 엔진 아래에는 실제 운영체제가 동작하지만 컨테이너 안에는 리눅스 운영체제 비슷한 무언가가 들어 있다. 
---
## | 운영체제가 하는 일? 
- 운영체제는 **소프트웨어나 프로그램의 명령을 하드웨어에 전달하는 역할**
<img src="https://github.com/junseongwoo/TIL/blob/main/Docker/dkkb/img/2-1-2.jpg"  width="600" height="200"/>

- 프로그램에 적힌 것은 '초콜릿을 먹어라' 수준인데 자세한 사항은 운영체제가 풀어서 하드웨어에 지시 

### 컨테이너
- 앞서 설명한 그림을 보면 도커 엔진 아래에도 리눅스가 있는데, 컨테이너 속에 또 리눅스(비슷한 것)이 있다.
- 이것이 도커의 가장 큰 특징인데 본래 운영체제는 '커널' 부분과 '그 외 주변 부분'으로 구성된다.
- '주변 부분'이 프로그램 연락 내용을 커널에 전달하고 커널이 하드웨어를 다룬다.
- 도커에서는 컨테이너가 완전히 분리돼 있어 리눅스의 주변 부분이 커테이너 속 프로그램의 명령을 전달 받을 수 없다 -> 컨테이너 속 운영체제의 주변 부분이 들어 있어 명령을 전달하고 커널에 전달하는 구조로 되어 있다.
<img src="https://github.com/junseongwoo/TIL/blob/main/Docker/dkkb/img/2-1-3.jpg"  width="400" height="400"/>

- 컨테이너 속에 리눅스(비슷한 것)이 들어있다고 말하는 것은 바로 전체 리눅스 운영체제가 들어 있는 것이 아니라 주변 부분만 들어 있기 때문이다.
---

## | 도커는 기본적으로 '리눅스'용이다.
- 도커는 기본적으로 리눅스 OS에서만 동작한다.
- 즉, 도커는 리눅스 컴퓨터에 독립된 격리 환경을 만드는 것, 리눅스에서만 동작 -> 컨테이너에서 동작할 프로그램도 리눅스용 프로그램이다.
----

# | Section 2 : 도커 허브와 이미지, 컨테이너 
## 이미지와 컨테이너
- 이미지는 컨테이너를 찍어내는 '빵틀'과 같은 것으로 컨테이너의 설계도(ISO 파일과 비슷) 역할을 한다. 
### 이미지는 금형과 같다.
- 이미지는 그 자체로 쓸모가 없다. -> 실제 사용하는 것은 컨테이너이며 이미지를 그대로 사용하는 일이 없기 때문
- 이미지는 금형과 같은 역할로 하나만 있으며 여러 개의 컨테이너를 생성이 가능하다.
### 컨테이너로도 이미지를 만들 수 있다.

<img src="https://github.com/junseongwoo/TIL/blob/main/Docker/dkkb/img/2-1-4.jpg"  width="600" height="200"/>

- 컨테이너를 금형으로 만들어 이미지로 만드는 것이다. 
-> 컨테이너로 이미지를 만들 수 없으면 여러 개의 컨테이너를 전부 수정해야하는 번거러움이 생긴다.

### 도커 엔진 간에 이동이 가능
<img src="https://github.com/junseongwoo/TIL/blob/main/Docker/dkkb/img/2-1-5.jpg"  width="600" height="400"/>

- 컨테이너로부터 만든 이미지를 이용하면 다른 환경에서 원래의 컨테이너를 복원할 수 있다.

-> 컨테이너 자체가 이동하는 것은 아니지만 이미지를 통해 컨테이너가 이동한 것과 같은 효과 

## | 도커 허브와 도커 이미지
- 도커 허브는 **공개된 컨테이너 이미지가 모여 있는 곳**이다.
- 도커 허브 : http://hub.docker.com 
---
# | Section 3 : 도커 컨테이너의 생애주기와 데이터 저장 
## | 도커 컨테이너는 일회용품 
<img src="https://github.com/junseongwoo/TIL/blob/main/Docker/dkkb/img/2-1-5.jpg"  width="700" height="400"/>

- 컨테이너는 쉽게 만들 수 있다. 그러므로 컨테이너 하나를 업데이트하면서 사용하기보다는 업데이트된 컨테이너를 새롭게 사용하는 것이 더 좋다. 
- 컨테이너는 일반적으로 여러 개를 동시에 가동하는 상황을 전제하기 때문에 하나하나 업데이트하려면 힘들다.
- 오래된 컨테이너를 삭제하고 새로운 이미지로 새로운 컨테이너를 만들어 사용하는 방식이 더 좋다.
- 따라서 **컨테이너 생애주기**란 컨테이너를 생성, 실행, 종료, 폐기 후 다시 생성하는 일련의 과정이다. 

## | 데이터 저장 
- 컨테이너를 폐기하면 그 안에 있는 데이터는 어떻게 될까? -> 당연히 사라진다.
- 이러한 상황을 방지하기 위해 보통 **도커가 설치된 물리적 서버(호스트)의 디스크를 마운트**하여 데이터를 저장한다. 
- 마운트란 '디스크를 연결해 데이터를 기록할 수 있도록 한 상태'를 의미한다. 
--- 
# | Section 4 : 도커의 장점과 단점
## | 도커의 구조와 성질 및 장단점
### '환경을 격리할 수 있다'는 것이 핵심 
1. 독립된 환경
- 여러 개의 컨테이너를 띄울 수 있으며, 똑같은 애플리케이션도 띄울 수 있다.
2. 이미지를 만들 수 있다.
- 이미지를 만들 수도 있고 도커 허브에 배포 할 있다. 따라서 모든 이미지를 만들지 않아도 내려받기만 하면 컨테이너를 사용할 수 있다. 
- 구축 작업이 간단해져 교체 및 업데이트가 쉬워진다.
- 이미지를 만들 수 있다는 특징은 이동성이 좋다는 특징으로 이어져 환경 이동 및 개발환경을 구축하기도 쉬워진다. 
3. 컨테이너에 커널을 포함시킬 필요가 없다
- 커널(OS의 핵심)을 포함시킬 필요가 없으므로 가볍고 배포판도 원하는 것을 사용할 수 있다.

-> 이 모든 장점이 '격리가 가능하다'는 성질에서 시작된다. 
## | 도커의 장점과 단점
- 서버 관리의 관점에서 보는 도커의 장단점 
### 도커의 장점
1. 한 대의 물리 서버에 여러 대의 서버를 띄울 수 있다.
- 여러 가지 기능을 띄우는 것 자체는 일반적인 서버로도 가능하지만 도커는 격리된 환경을 제공하므로 안전한 상태로 실행되며 같은 소프트웨어를 여러 번 실행하는 것도 가능해진다. 
- 컨테이너에는 커널이 포함되지 않아 물리 서버의 OS에 의존한다. 따라서 가상화 기술(소프트웨어적으로 하드웨어를 재현)에 비하면 압도적으로 가볍다.
2. 서버 관리가 용이하다.
- 독립된 환경에 격리하여 소프트웨어를 사용하므로 다른 소프트웨어에 영향을 끼치지 않는다.
- 컨테이너 교체나 수정이 쉬우므로 환경 이전도 간단하다.
- 생성 및 페기가 간단하여 환경 설정이 용이하다. 
3. 다루기가 쉽다.
- '터미널에 명령을 직접 입력해야 한다'라는 것 외에는 장애물이 없다. 따라서 초보자라도 명령어만 익히면 컨테이너를 사용할 수 있다.
## | 도커의 단점 
1. 리눅스용 소프트웨어 밖에 지원이 안된다.
2. 호스트 서버에 문제가 생기면 모든 컨테이너에 영향이 미친다.
- 물리 서버 한 대에 여러 대의 서버를 띄우는 형태기 때문이다.
## | 도커의 주 용도
### 동일한 개발환경 제공
- 개발환경과 운영환경의 차이가 근본적으로 사라지며 팀원 모두에게 동일한 개발환경을 제공할 수 있다.

### 새로운 버전의 테스트 : 격리된 환경 이용
- OS나 라이브러리 등의 새로운 버전을 먼저 개발환경에서 테스트한 후 운영환경에 적용할 때도 컨테이너를 활용하면 편리하다.
- 컨테이너 형태를 유지하는 도커 엔진이 구동을 보장해주므로 물리 서버와 상성은 고려하지 않는다. 
- 새로운 버전 및 변경된 환경에 대한 테스트에도 유용하다.

### 동일한 서버가 여러 대 필요한 경우 : 독립된 성질을 이용 
- 컨테이너를 이용해 한 대의 물리 서버에 똑같은 서버를 여러개 만들어 동일한 서버를 사용하면 관리도 간편하고 물리 서버를 공유하므로 비용을 절약한다.
