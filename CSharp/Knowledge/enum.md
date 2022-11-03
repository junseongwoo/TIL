# | 열거형 enum 
- 열거형은 기본 정수 숫자 형식의 상수 집합에 의해 정의되는 값 형식입니다.

```cs
// ex) 열거형 정의
enum Season
{
    Spring,
    Summer,
    Autumn,
    Winter
}
```
- 기본적으로 열거형 멤버의 연결된 상수 값은 int형이다.
- 0으로 시작하고 정의된 순서에 따라 1씩 증가한다. 
- 정수 숫자를 명시적으로 지정할 수 있다.
```cs 
// ex) 명시적으로 연결된 상수 정의
enum Season
{
    Spring = 0,
    Summer = 1,
    Autumn = 200,
    Winter = 300
}
```
- 열거형 형식의 정의 내에서 메소드를 정의할 수 없다.
- 열거형 형식에 기능을 추가하려면 [확장 메소드](ExtensionMethods.md)를 만들어야 한다.
- 0에 해당 열거형 멤버가 없는 경우에도 기본 값은 0 번째 위치의 값입니다.
---
# | 비트 플래그로서 열거형 형식
- 열거형 형식으로 선택의 조합을 나타내려면 개별 선택이 비트 필드가 되도록 멤버를 정의한다.
- 즉, 멤버의 연결된 값은 제곱이어야 한다. 
- 그런 다음 [비트 논리 연산자](../00_Operator.md) (| 또는 &)를 사용하여 각각 선택을 조합할 수 있다.
- 열거형 형식이 비트 필드를 선언한다고 표시하려면 [Flags](https://learn.microsoft.com/ko-kr/dotnet/api/system.flagsattribute?view=net-6.0) 특성을 적용한다.
```cs
// ex) 열거형 형식의 정의에 일반적인 조합을 포함 
[Flags]
public enum Days 
{
    None      = 0b_0000_0000,  // 0
    Monday    = 0b_0000_0001,  // 1
    Tuesday   = 0b_0000_0010,  // 2
    Wednesday = 0b_0000_0100,  // 4
    Thursday  = 0b_0000_1000,  // 8
    Friday    = 0b_0001_0000,  // 16
    Saturday  = 0b_0010_0000,  // 32
    Sunday    = 0b_0100_0000,  // 64
    Weekend   = Saturday | Sunday
}

public static void Main()
{
    Days meetingDays = Days.Monday | Days.Wednesday | Days.Friday;
    Console.WriteLine(meetingDays);
    // Output:
    // Monday, Wednesday, Friday

    Days workingFromHomeDays = Days.Thursday | Days.Friday;
    Console.WriteLine($"Join a meeting by phone on {meetingDays & workingFromHomeDays}");
    // Output:
    // Join a meeting by phone on Friday

    bool isMeetingOnTuesday = (meetingDays & Days.Tuesday) == Days.Tuesday;
    Console.WriteLine($"Is there a meeting on Tuesday: {isMeetingOnTuesday}");
    // Output:
    // Is there a meeting on Tuesday: False

    var a = (Days)37;
    Console.WriteLine(a);
    // Output:
    // Monday, Wednesday, Saturday
}
```
---
# | Enum 클래스 (System.Enum 형식)
https://learn.microsoft.com/ko-kr/dotnet/api/system.enum?view=net-6.0