# 인터페이스 
## 1. 선언

```cs 
interface 인터페이스이름
{
    반환_형식 메소드_1 ( 매개변수 );
    반환_형식 메소드_2 ( 매개변수 );
    반환_형식 메소드_3 ( 매개변수 );
}
```
- 클래스를 선언하는 것과 비슷하게 보임 

```cs 
// ex) 선언 예시
interface ILogger
{
    void WriteLog( string message );
}
```
- 인터페이스는 메소드, 이벤트, 인덱서, 프로퍼티만 가질 수 있는데 그나마도 구현부가 없음 
- 클래스는 접근 제한 한정자로 수식하지 않으면 private으로 선언되지만, 인터페이스는 사용할 수 없고 모두 public으로 선언 
- 인터페이스는 인스턴스도 만들 수 없음 

--> 그러면 왜 인터페이스를 쓰나? 

- 인터페이스가 인스턴스를 가질 수 없지만, 인터페이스를 상속 받은 클래스의 인스턴스는 생성이 가능 -> 파생 클래스는 인터페이스의 선언된 모든 메소드를 구현해줘야 하며 public 한정자로 수식해야 함 

```cs 
// ex) ILogger 인터페이스를 상속받는 파생 클래스 
class ConsoleLogger : ILogger 
{
    public void WriteLog( string message )
    {
        Console.WriteLine(
            "{0} {1}",
            DateTime.Now.ToLocalTime(), message);
        )
    }
}

ILogger logger = new ConsoleLogger();
logger.WriteLog( "Hello, World!" );
```
---
## 2. 인터페이는 약속이다.
- 인터페이스는 클래스가 따라야 하는 약속 같은 것이다. -> 인터페이스로부터 파생될 클래스가 어떤 메소드를 구현해야 할지를 정의한다. 

```cs 
// ex) 온도를 반복적으로 입력받아 기록하는 ClimateMoniter 클래스
// 로그를 저장하는 방식은 개발자마다 따로 결정할 수 있게 함 
// 이때 해결책이 되는 인터페이스 사용법 
class ClimateMoniter 
{
    private ILogger logger;
    {
        this.logger = logger; 
    }

    public void start()
    {
        while (true)
        {
            Console.Write( "온도를 입력 : " );
            string temperature = Console.ReadLine();
            if (temperature == "")
                break;

            logger.WriteLog( "현재 온도 : " + temperature );
        }
    }
}

// ConsoleLogger 객체를 생성자에 인수로 넘기면 ClimateMonitor는 콘솔에 메세지를 출력 
ClimateMonitor monitor = new ClimateMonitor(new ConsoleLogger());
monitor.start();

// ex) 텍스트 파일에 로그를 출력하는 ILogger의 파생 클래스 
class FileLogger : ILogger
{
    private StreamWriter writer;

    public FileLogger(string path)
    {
        writer = File.CreateText(path);
        writer.AutoFlush = true;
    }

    public void WriteLog(string message)
    {
        writer.WriteLine("{0} {1}", DateTime.Now.ToShortTimeString(), message);
    }
}

// ex) FileLogger의 객체를 ClimateMonitor 생성자에 넘기면 monitor 객체는 파일에 로그를 저장하는 기능을 가짐
ClimateMoniotr moniotr = new ClimateMonitor(new FileLogger("MyLog.txt"));

monitor.start();
```
---
## 3. 인터페이스를 상속하는 인터페이스
- 기존의 인터페이스에 새로운 기능을 추가한 인터페이스를 만들고 싶을 때 사용 
-> 기존 인터페이스를 수정하면 안되나? : 가능하다면 문제가 없지만 수정할 수 없는 경우가 있음
1. 상속하려는 인터페이스가 소스 코드가 아닌 어셈블리로만 제공 
2. 상속하려는 인터페이스의 소스 코드를 갖고 있어도 이미 인터페이스를 상속하는 클래스들이 존재하는 경우 : 클래스는 반드시 모든 인터페이스의 "모든" 메소드와 프로퍼티를 구현해야 함, 인터페이스가 수정되면 상속하는 기존 클래스들도 수정해야함 -> 따라서 인터페이스를 상속하는 인터페이스를 만들어 수정 

```cs
// ex) 선언 
interface 파생 인터페이스 : 부모 인터페이스
{
    // 추가할 메소드 
}

// ex) ILogger를 상속하는 인터페이스 생성
interface ILogger
{
    void WriteLog(string message);
}

interface IFormattableLogger : ILogger 
{
    void WriteLog(string format, params Object[] args);
}

class CosoleLogger : IFormattableLogger
{
    public void WriteLog(string message)
    {
        Console.WriteLine( "{0} {1}",
            DateTiem.Now.ToLocalTime(), message);)
    }

    public void WriteLog(string format, params Object[] args)
    {
        String message = String.Format(format, args);
        Console.WriteLine("{0} {1}",
            DateTime.Now.ToLocalTime(), message);
    }
}

class MainApp
{
    static void Main(string[] args)
    {
        IFormattableLogger logger = new CosoleLogger();
        logger.WriteLog("This is Interface");
        logger.WrtieLog("{0} + {1} = {2} ", 1, 1, 2);
    }
}

>>>
2022-10-24 오전 11:46:30 This is Interface
2022-10-24 오전 11:46:30 1 + 1 = 2
```
---
## 4. 여러 인터페이스 한번에 상속하기
- 클래스는 여러 클래스를 한번에 상속할 수 없음 -> 모호성 때문
- 인터페이스는 다중 상속이 가능 -> 내용이 아닌 외형을 물려주기 때문, 겉모습만큼은 정확하기 자기를 닮기를 강제 -> 따라서 모호성도 존재하지 않음 

```cs
// ex) 인터페이스의 다중 상속
namespace MultiInterfaceInheritance 
{
    interface IRunnable
    {
        void Run();
    }

    interface IFlyable 
    {
        void Fly();
    }

    class FlyingCar : IRunnable, IFlyable 
    {
        public void Run()
        {
            Console.WriteLine("Run! Run!");
        }

        public void Fly()
        {
            Console.WriteLine("Fly! Fly!");
        }
    }

    class MainApp
    {
        static void Main(string[] args)
        {
            FlyingCar car = new FlyingCar();
            car.Run();
            car.Fly();

            IRunnable runnable = car as IRunnable;
            runnable.Run();

            IFlyable flyable = car as IFlyable;
            flyable.Fly();
        }
    }
}
---
## 5. 인터페이스의 기본 구현 메소드 
- 인터페이스가 선언하는 메소드는 파생될 클래스가 무엇을 구현해야 할지를 정의하는 역할만 했음
- 기본 구현 메소드는 구현부를 가지는 메소드인데 다른 메소드와 역할이 약간 다름 
```cs
// ex)
interface ILogger
{
    void WriteLog(string message);
}

class ConsoleLogger : ILogger
{
    public void WriteLog(string message)
    {
        Console.WriteLine($"{DtaeTime.Now.ToLocalTime()}, {message}");
    }
}
``` 
- ConsoleLogger는 ILogger 인터페이스를 상속하는 클래스 
- ILogger에 WriteLog()가 선언되어 있기 때문에 ConsoleLogger는 WriteLog() 메소드를 오버라이딩 해야함 

- 이러한 상황에서 ILogger의 파생 클래스가 많이 생기고 상속하는 클래스들이 레거시 코드가 됐을 때 ILogger에 새로운 메소드를 추가할 때는 주의가 필요 
```cs
// ex)
interface ILogger
{
    void WriteLog(string message);
    void WrtieError(string error);
}
```
-> 이 결과 ILogger를 상속하는 모든 클래스에는 컴파일 에러가 발생 
- 기본 구현 메소드를 사용하여 인터페이스에 새로운 메소드를 추가할 때 기본적인 구현체를 갖도록 해서 컴파일 에러를 막을 수 있다. 
```cs 
// ex) 기본 구현 메소드 구현 예 
interface ILogger
{
    void WriteLog(string message);
    void WrtieError(string error)
    {
        WriteLog($"Error: {error}");
    }
}
```
- 인터페이스의 기본 구현 메소드는 참조로 업캐스팅했을 때만 사용할 수 있어 클래스에서 추가된 메소드를 호출할 가능성도 없음 
---
## 6. 추상 클래스 : 인터페이스와 클래스 사이 
- 추상 클래스는 "구현"을 가질 수 있지만 인스턴스는 가질 수 없음 
```cs 
// ex) 선언 방법
abstract class 클래스이름 {}
```
- 추상 클래스는 클래스에 더 가까움 -> 한정자를 지정하지 않으면 클래스와 같이 private으로 지정된다. 
- 하지만 클래스와 다르게 인스턴스를 만들 수 없고 추상 메소드(Absbract Method)를 가질 수 있다. 
- 추상 메소드란 추상 클래스가 인터페이스의 역할도 할 수 있게 하는 장치 -> 구현을 갖지는 못하지만 파생 클래스에서 반드시 구현하도록 강제하기 때문

```cs
// ex) 추상 메소드의 선언 예 
abstract class AbstractBase
{
    public abstract void SomeMethod();
}

class Derived : Abstractbase
{
    public override void SomeMethod()
    {
        // Somthing 
    }
}
```
