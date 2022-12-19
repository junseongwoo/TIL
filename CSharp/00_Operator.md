# | 연산자 (Operator)
# | 1. ?? 및 ??= 연산자
## | ?? 연산자
- ?? 연산자는 "Null이면 오른쪽 값으로 처리" 하라는 뜻 이다.
```cs

``` 

# | 2. ?: 연산자 
- 조건식 ? 참일 때 값 : 거짓일 때 값 
- 조건 연산자 ?: 는 피연산자가 세개나 되며 조건식의 결과 값은 참 or 거짓의 논리 값이어야 한다. 
```cs
int a = 30;
string result = a == 30 ? "삼십" : "삼십아님"; // result는 삼십 
```


# | 3. ?. 연산자
- ?. 연산자는 "Null이 아니라면 참조하고, Null이라면 Null로 처리" 하라는 뜻 이다.
```cs
class ExClass
{
    List<int> lstNum = new List<int>();
};

public void Example()
{
    ExClass newExClass = new ExClass();
    MessageBox.Show(newExClass?.lstNum);

    ExClass nullExClass = null;
    MessageBox.Show(nullExClass?.lstNum);
}
```

# | 4. => 연산자 


# | 5. 비트 논리 연산자 : |와 & 연산자
- 비트 연산자는 int, uint, long. ulong유형에 대해 정의한다.
- 다른 정수 유형(sbyte, byte, short, ushort)인 경우는 int 연산의 결과로 변환된다. 
- 피연산자가 서로 다른 정수 타입이면 해당 값은 가장 가까운 정수 유형으로 변경된다.

# | 6. 시프트(shift) 연산자 : <<, >>
## | 왼쪽 시프트 연산자 : <<
- << 연산자는 피연산자가 정의한 비트 수 만큼 왼쪽 피연산자를 왼쪽으로 이동한다. 
```cs
// ex) 예제
uint x = 0b_1100_1001_0000_0000_0000_0000_0001_0001;
Console.WriteLine($"Before : {Convert.ToString(x, toBase: 2)}");

uint y = x << 4;
Console.WriteLine($"Before : {Convert.ToString(y, toBase: 2)}");

// Output:
// Before: 11001001000000000000000000010001
// After:  10010000000000000000000100010000
```

## | 오른쪽 시프트 연산자 : >> 

