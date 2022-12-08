# | 연산자 (Operator)
# | 1. ?? 및 ??= 연산자
- 

# | 2. ?: 연산자 

# | 3. => 연산자 


# | 4. 비트 논리 연산자 : |와 & 연산자
- 비트 연산자는 int, uint, long. ulong유형에 대해 정의한다.
- 다른 정수 유형(sbyte, byte, short, ushort)인 경우는 int 연산의 결과로 변환된다. 
- 피연산자가 서로 다른 정수 타입이면 해당 값은 가장 가까운 정수 유형으로 변경된다.

# | 5. 시프트(shift) 연산자 : <<, >>
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