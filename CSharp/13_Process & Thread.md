# | 1. 프로세스와 스레드
- 프로세스 : 실행 파일이 실행되어 메모리에 적재된 인스턴스, 반드시 하나 이상의 스레드로 구성 
- 스레드 : 운영체제가 CPU 시간을 할당하는 기본 단위 

### 멀티 스레드의 장점 
1. GUI 프로그램에서 멀티 스레드를 이용하면 **응답성을 높일 수** 있다.
2. 멀티 프로세스 방식에 비해 멀티 스레드 방식이 **자원 공유**가 쉽다.
    - 멀티 프로세스는 GUI가 없는 웹 서버 같은 서버용에서 많이 취하는 구조인데, 프로세스끼리 데이터를 교환하려면 소켓, 공유 메모리 같은 것을 이용해야 하지만 멀티 스레드 방식에서는 그저 스레드끼리 코드 내 변수를 같이 사용하는 것으로 데이터 교환이 가능하다.
3. 경제적이다.
    - 멀티 프로세스를 사용하기 위해 메모리와 자원을 할당하는 작업은 비용이 비싼데, 스레드를 띄울 때는 이미 프로세스에 할당된 메모리와 자원을 그대로 사용하므로 할당하는 비용을 지불하지 않아도 되어 경제적이다.

### 멀티 스레드의 단점 
1. 구현하기가 까다롭다.
    - 테스트 및 디버깅이 어렵다.
2. 문제가 생기면 전체 프로세스에 영향을 준다. (안정성 하락)
    - 멀티 프로세스 기반은 프로세스 중 하나에 문제가 생기면 하나가 죽는 것 이상으로는 확산되지 않지만 멀티 스레드는 전체 프로세스에 영향을 끼친다.
3. 스레드를 너무 많이 사용하면 오히려 성능이 저하된다.
    - 스레드가 CPU를 사용하기 위해서는 작언 간 전환(Context Switching)을 하는데, 너무 자주 수행하면 실제로 앱이 일하는 시간에 비해 작업 간 전환에 사용한 시간이 커져 성능이 저하 된다.
--- 
## | 1.1 스레드 시작하기 
- System.Threading.Thread 클래스를 사용하여 스레드 제어 
- System.Threading.Thread 클래스를 사용 순서
1. Thread의 인스턴스 생성 -> 생성자의 인수로 스레드가 실행할 메소드를 넘긴다.
2. Thread.Start() 메소드를 호출하여 스레드를 시작한다.
3. Thread.Join() 메소드를 호출하여 스레드가 끝날 때까지 기다린다.

```cs 
// ex) Thread 클래스 사용 방법 
static void DoSomething() // 스레드가 실행할 메소드
{
    for (int i = 0; i < 5; i ++)
    {
        Console.WriteLine("DoSomething : {0}". i);
    }
}

static void Main(string[] args)
{
    // Thread의 인스턴스 생성
    Thread t1 = new Thread(new ThreadStart(DoSomething));

    t1.Start(); // 스레드 시작
    t1.Join();  // 스레드의 종료 대기
}
```
- 코드에서 실제 스레드가 메모리에 적재되는 시점은 t1.start() 메소드를 호출 했을 때이며 Thread 클래스의 인스턴스는 준비만 한다. 
- t1.Start() 메소드를 호출되고 나면 CLR은 스레드를 실제로 생성하며 DoSomething() 메소드 호출 
- t1.Join() 메소드는 블록되어 있다가 DoSomething() 메소드의 실행이 끝나면 (t1 스레드의 실행이 끝나면) 반환되어 다음 코드가 실행 된다.

## | 1.2 스레드 임의로 종료시키기
- 살아 있는 스레드를 죽이려면 Thread 객체의 Abort() 메소드를 호출한다.
```cs 
// ex) 살아있는 스레드 종료 
static void DoSomething() // 스레드가 실행할 메소드
{
    try
    {
        for (int i = 0; i < 5; i ++)
        {
            Console.WriteLine("DoSomething : {0}". i);
            Thread.Sleep(10);
        }
    }
    catch( ThreadAbortedException )
    {
        // ... 
    }
    finally
    {
        // ... 
    }
    
}

static void Main(string[] args)
{
    // Thread의 인스턴스 생성
    Thread t1 = new Thread(new ThreadStart(DoSomething));

    t1.Start(); // 스레드 시작

    t1.Abort(); // 스레드 취소(종료) 

    t1.Join();  // 스레드의 종료 대기
}
```
### Abort() 메소드를 사용할 때 고려해야 할 사항 
- Abort() 메소드가 호출과 동시에 스레드를 즉시 종료하지 않는다.
- Thread() 객체에 Abort() 메소드를 호출하면 CLR은 실행 중이던 코드에 ThreadAbortException을 던진다.
- 예외를 catch 하는 코드가 있다면 예외를 처리하고 해당 스레드는 완전히 종료 된다.
- 따라서 Abort() 메소드를 호출할 때는 처리 시간을 반드시 염두해야 한다.

## | 1.3 스레드의 일생과 상태 변화 
- .Net은 스레드의 상태를 ThreadState 열거형에 정의 했다.
  
|상태|설명|
|---|---|
|Unstarted|---|
|Running||
|Suspended||
|WaitSleepJoin||
|Aborted||
|Stopped||
|Background||
