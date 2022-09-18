# 리플렉션 
- 리플렉션은 객체를 X-Ray 사진처럼 객체의 형식 정보를 들여다보는 기능 
- 프로그램 실행 중 객체의 형식 이름부터, 필드, 프로퍼티 목록, 메소드 목록, 이벤트 목록까지 모두 열어볼 수 있음
---
## 1. Object.GetType()
- Object는 모든 데이터 형식의 조상, 그 중 GetType() 메소드는 객체의 형식 정보를 반환하는 기능 
- GetType() 메소드는 Type 형식의 결과를 반환 
- Type 형식은 .NET에서 사용되는 데이터 형식의 모든 정보를 담고 있음 
```cs 
// Object.GetType() 메소드와 Type 형식을 사용하는 방법 
// 예제 : int 형식의 필드를 조회해서 출력하는 예제 
int a = 0;

Type type = a.GetType();
FieldInfo[] fields = type.GetFields(); // 필드 목록 조회

foreach (FieldInfo field in fields)
{
    Console.WriteLine("Type {0}, Name {1}", field.FieldType.Name, field.Name);
}
```
|메소드|반환 형식|설명|
|------|------|------|
|GetConstructors()|GetConstructors[]|해당 형식의 모든 생성자 목록을 반환|
|GetEvents()|EvenvtInfo[]|해당 형식의 이벤트 목록을 반환|
|GetFields()|FieldInfo[]|해당 형식의 필드 목록을 반환|
|GetGenericArguments()|Type[]|해당 형식의 형식 매개변수 목록을 반환|
|GetInterfaces()|Type[]|해당 형식의 상속하는 인터페이스 목록을 반환|
|GetMembers()|MemberInfo[]|해당 형식의 멤버 목록을 반환|
|GetMethods()|MethodInfo[]|해당 형식의 메소드 목록을 반환|
|GetNestedTypes()|Type[]|해당 형식의 내장 형식 목록을 반환|
|GetProperties()|PropertyInfo[]|해당 형식의 프로퍼티 목록을 반환|
---
## 2. 리플렉션을 이용해서 객체 생성하고 이용하기
- 리플렉션을 이용해서 동적으로 인스턴스를 만들기 위해서는 System.Activator 클래스의 도움이 필요
- 인스턴스를 만들고자 하는 형식의 Type 객체를 매개변수에 넘기면 Activator.CreateInstance() 메소드는 입력받은 형식의 인스턴스를 생성하여 반환
```cs
object a = Activator.CreateInstance(typeof(int));

// 일반화를 지원하는 버전의 CreateInstance() 메소드
// List<int>의 인스턴스를 만드는 예제
List<int> list = Activator.CreateInstance<List<int>>();

// 객체의 프로퍼티에 값을 할당하는 것도 동적으로 가능
