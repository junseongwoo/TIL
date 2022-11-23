# | List\<T> 컬렉션 
- List\<T> 클래스는 C#에서 동적으로 생성되고 삭제되는 자료를 저장할 때 사용 
- 크기가 가변이고 제네릭 컬렉션이기 때문에 T에 어떠한 자료형도 넣을 수 있는 리스트 
```cs
List<int> lstInt = new List<int>();
List<string> lstStr = new List<string>();
```
---
# | List\<T>와 배열의 정렬
- 리스트와 배열은 만드는 방법과 사용하는 방법이 서로 다르다.
```cs
List<string> lstNames = new List<string>();
Array<string> arrNames = new Array<string>(); // 에러
Array arrNames = new Array(); // 에러

string[] arrNames = new string[100];

lstNames.Sort();
arrNames.Sort(); // 에러 

// Array 클래스의 Sort() 메소드는 static으로 정의되어 있기 때문에 Array.Sort(배열 이름) 형태로 사용
Array.Sort(arrNames);
```

