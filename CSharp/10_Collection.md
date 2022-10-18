# 컬렉션 
- 컬렉션(Collection)이란 같은 성격을 띈 데이터의 모음을 담는 자료구조 
## | 1. ArrayList 
- 배열과 닮은 컬렉션 
- 컬렉션 요소에 접근할 때는 [] 연산자를 이용 
- 생성할 때 용량을 미리 지정할 필요 없이 자동으로 용량이 결정 
### 1.1 ArrayList 메서드
1. Add() : 가장 마지막에 있는 요소 뒤에 새 요소 추가 
2. RemoveAt() : 특정 인덱스에 있는 요소 제거
3. Insert() : 인덱스에 새 요소 삽입 

```cs
// 메서드 예시
ArrayList list = new ArrayList();

list.Add(10);
list.Add(20);
list.Add(30);

list.RemoveAt(1);

list.Insert(1, 25);

for ( int i = 0; i < list.Count; i++ )
{
    Console.Write($"{list[i]} ");
}

>>> 10 25 30 
```

### 1.2 ArrayList가 다양한 형식의 객체를 담을 수 있는 이유
- Add()와 Insert() 메소드의 선언을 보면 확인 가능
```cs
public virtual int Add (Object value)
public virtual void Insert ( int, index, Object value)
```
- object 형식의 매개변수를 받는 것을 확인 할 수 있는데 모든 형식은 object를 상속하므로 object 형식으로 간주될 수 있다. 
- 따라서, int 형식의 데이터를 넣더라도 object 형식으로 Boxing 되어 입력된다.
- 다시 ArrayList의 요소에 접근하여 사용할 떄는 형식이 Unboxing이 되어 원래 데이터 형식 사용 가능
- 박싱과 언박싱은 오버헤드를 많이 요구하므로 다루는 데이터가 많으면 성능 저하가 늘어난다.
---
## | 2. Queue 
- Queue는 대기열, 즉 기다리는 줄이라는 뜻 
- 데이터를 차례대로 입력해뒀다가 입력된 순서대로 하나씩 꺼내 처리하기 위해 사용 
- 배열이나 리스트는 원하는 위치에 자유롭게 접근하는 반면, Queue는 오직 뒤에서 입력하고 앞에서 출력한다.
### 2.1 Queue 메서드 
- Enqueue() : Queue에 데이터 입력
- Dequeue() : Queue에서 데이터 출력
```cs 
Queue que = ew Queue();
que.Enqueue(1);
que.Enqueue(2);
que.Enqueue(3);
que.Enqueue(4);

while(que.Count > 0) 
    Console.Write(que.Dequeue());

>>>
1
2
3
4
```
--- 
## | 3. Stack
- Stack은 Queue와 반대로 나중에 데이터가 먼저 나가는 (Last In - First Out ) 구조의 컬렉션 
### 3.1 Stack 메서드
- Push() : 데이터를 넣을때 사용
- Pop() : 제일 위에 쌓여 있는 데이터를 꺼냄 
-> Pop()을 호출하여 데이터를 Stack에서 꺼내고 나면 그 데이터는 컬렉션에서 제거되고 아래에 있는 데이터가 제일 위로 올라옴 
```cs 
// 예시
Stack stack = new Stack();
stack.Push(1);
stack.Push(2);
stack.Push(3);

while (stack.Count > 0 )
{
    Console.Write(stack.Pop());
}

>>> 
3
2
1
```
---
## | 4. Hashtable
- Hashtable은 Key와 Value의 쌍으로 이루어진 데이터를 다룰 때 사용 
```cs 
// 예시
Hashtable ht = new Hashtable();
ht["book"] = "책";
ht["cook"] = "요리사";
ht["tweet"] = "지저귀다";

Console.WriteLine( ht["book"]);
Console.WriteLine( ht["cook"]);
Console.WriteLine( ht["tweet"]);

>>>
책
요리사
지저귀다
```
- 배열과 비슷하지만 다른 점은 배열은 인덱스로 요소의 저장할 위치를 사용하는 반면 Hashtable 컬렉션은 키 데이터를 그대로 사용한다는 점 
- Key 형식에는 어떠한 형식도 사용할 수 있다.
- Key를 이용해 요소에 접근할 때 탐색 속도가 거의 소요되지 않는다. 
--- 
## | 5. 컬렉션을 초기화하는 방법
- 앞서 정리한 컬렉션들은 배열을 이용해 간단하게 초기화가 가능하다.
- 컬렉션의 생성자를 호출할 때 배열 객체를 매개변수로 넘기면 컬렉션 객체는 해당 배열을 바탕으로 내부 데이터를 채운다.

```cs
// 예시
// 배열을 이용한 초기화
int[] arr = { 123, 456, 789 };

ArrayList list = new ArrayList(arr);
foreach (object obj in list)
{
    WriteLine($"ArrayList : {obj}");
}
WriteLine();

Stack stk = new Stack(arr);
foreach (object obj in stk)
{
    WriteLine($"Stack : {obj}");
}
WriteLine();

Queue que = new Queue(arr);
foreach (object obj in que)
{
    WriteLine($"Queue : {obj}");
}
WriteLine();

// 컬렉션 초기자를 이용한 초기화
ArrayList list2 = new ArrayList() { 1, 2, 3 };
foreach (object obj in list2)
{
    WriteLine($"ArrayList : {obj}");
}
WriteLine();

>>> 
ArrayList : 123
ArrayList : 456
ArrayList : 789

Stack : 789
Stack : 456
Stack : 123

Queue : 123
Queue : 456
Queue : 789

ArrayList : 123
ArrayList : 456
ArrayList : 789
```
```cs 
// Hashtable 초기화
// 딕셔너리 초기자를 사용하여 초기화
Hashtable ht = new Hashtable()
{
    ["하나"] = 1,
    ["둘"] = 2,
    ["셋"] = 3,
};

Hashtable ht2 = new Hashtable()
{
    {"하나", 1},
    {"둘", 2},
    {"셋", 3}
};
```

