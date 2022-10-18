# 파일 다루기 
## 1. 파일 정보와 디렉터리 정보 다루기 
- .NET은 파일 디렉터리 정보를 다룰 수 있도록 System.IO 네임스페이스에서 클래스 제공 

|클래스|설명|
|------|------|
|File|파일의 생성, 복사, 삭제, 이동, 조회를 처리하는 정적 메소드 제공|
|FileInfo|File 클래스와 하는 일은 동일하지만 정적 메소드 대신 인스턴스 메소드 제공|
|Directory|디렉터리의 생성, 삭제, 이동, 조회를 처리하는 정적 메소드 제공|
|DirectoryInfo|Directory 클래스와 하는 일은 동일하지만 정적 메소드 대신 인스턴스 메소드 제공| 

- 하나의 파일에 한두 가지 정도 작업할 때는 File 클래스, 여러 작업할 때는 FileInfo 클래스 사용 (디렉터리도 동일)
---
### 각 클래스가 제공하는 주요 메소드와 프로퍼티 정리 
- ()가 있는 것은 메소드, 없는 것은 프로퍼티

|기능|File|FileInfo|Directory|DirectoryInfo|
|------|------|------|------|------|
|생성|Create()|Create()|CreateDirectory()|Create()|
|복사|Copy()|CopyTo()|-|-|
|삭제|Delete|Delete()|Delete()|Delete()|
|이동|Move()|MoveTo()|Move()|MoveTo()|
|존재 여부 확인|Exists()|Exists|Exists()|Exists|
|속성 조회|GetAttributes()|Attributes|GetAttributes()|Attributes|
|하위 디렉터리 조회|-|-|GetDirectories()|GetDirectories()|
|하위 파일 조회|-|-|GetFiles()|GetFiles()|
---
### ex 1 디렉터리/파일 정보 조회

```cs 
static void Main(string[] args)
{
    string directory;
    if(args.Length < 1)
    {
        directory = ".";
    }
    else 
    {
        directory = args[0];
    }

    Console.WriteLine($"{directory} directory Info");
    Console.WriteLine("- Directory :");

    var directories = (from dir in Directory.GetDirectories(directory)
                let info = new DirectoryInfo(dir)
                select new 
                {
                    Name = info.Name,
                    Attributes = info.Attributes
                }).ToList();
}
```
