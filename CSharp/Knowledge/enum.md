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