# 인덱서
- 인덱서(Indexer)는 인덱스(Index)를 이용해서 객체 내의 데이터에 접근하게 해주는 프로퍼티 -> 객체를 마치 배열 처럼 사용하게 해줌 

```cs 
// ex) 인덱서를 선언하는 형식 
class 클래스이름
{
    한정자 인덱서형식 this[형식 index]
    {
        get
        {
            // index를 이용하여 내부 데이터 변환
        }

        set 
        {
            // index를 이용하여 내부 데이터 저장 
        }
    }
}
``` 
- 위 예제를 보면 인덱서를 프로퍼티처럼 식별자를 따로 가지지 않음 
- 프로퍼티가 이름을 통해 객체 내의 데이터에 접근하게 해준다면, 인덱서는 인덱스를 통해 객체 내의 데이터에 접근하게 해줌 
  
- ex) 정수형 배열을 가지고 있는 MyList를 인덱서를 통해 배열에 접근하고 데이터를 저장하고자 하면 지정한 인덱스보다 배열의 크기가 작다면 인덱스에 맞춰 배열의 크기를 재조정
```cs
class MyList
{
    private int[] array;

    public MyList()
    {
        array = new int[3];
    }

    public int this[int index] // 인덱스
    {
        get 
        {
            return array[index];
        }
        set
        {
            if (index >= array.Length)
            {
                Array.Resize<int>(ref array, index + 1);
                Console.WriteLine("Array Resized {0}", array.Length);
            }

            array[index] = value;
        }
    }

    public int Length
    {
        get { return array.Length; }
    }
}

class MainApp
{
    static void Main(string[] args)
    {
        MyList list = new MyList();
        for (int i = 0; i < 5; i++)
            list[i] = i;
        
        for (int i = 0; i < list.Length; i++)
            Console.WriteLine(list[i]);
    }
}

>>> 
Array Resized : 4
Array Resized : 5
0
1
2
3
4
```