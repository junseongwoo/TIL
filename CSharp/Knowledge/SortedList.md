# | SortedList  
- SortedList 컬렉션은 키의 오름차순으로 키-값 쌍을 저장 
- 내부적으로는 키와 값을 저장하는 두 개의 object[] 배열을 유지 
- 새로운 값이 들어오면 이진탐색하여 적절한 인덱스를 찾고 그 곳에 쌍을 저장 

# | SortedList<TKey, TValue>
- 제네릭 SortedList<TKey, TValue>에서 TKey는 키의 타입으로 Tvalue는 값의 타입이다.

```cs
SortedList<int, string> mySortedList = new SortedList<int, string>();
``` 
