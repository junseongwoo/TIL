using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 구조체와 클래스의 중요한 차이 : 구조체가 값 형식이라는 것! 
 * 구조체가 만들어지면 구조체 변수에 참조가 아닌 실제 데이터가 할당
 * 클래스는 참조형이라 클래스의 객체는 해당 메모리에 대한 참조만 갖는다.
 * 
 * 클래스 : 복잡한 동작이나 객체를 만든 후 수정하려는 데이터를 모델링 하는데 사용
 * 구조체 : 만든 후에 수정하지 않으려는 데이터를 포함하는 작은 데이터 구조에 적합
 * 
 * 정리
 * (1) 구조체와 클래스는 class와 struct 키워드만 빼고 구문이 똑같다.
 * (2) 구조체는 값형이고 클래스는 참조형, 구조체는 메모리의 스택 영역에 공간을 가지고 
 * 클래스는 스택에 참조만 위치, 그렇기 때문에 클래스는 반드시 new 키워드를 사용하여 객체 생성
 * (3) 구조체와 클래스는 클래스 내, 같은 파일의 클래스 밖, 다른 파일 위치에 만들 수 있다.
 * (4) 구조체와 클래스 모두 new 키워드로 만들 수 있는데, 이 경우 디폴트 값으로 초기화 된다.
 */

namespace _065_ClassAndStruct
{
    struct DataStruct
    {
        public int year, month, day;
    }

    class DataClass
    {
        public int year, month, day;
    }

    class Program
    {
        static void Main(string[] args)
        {
            DataStruct sDay;
            sDay.year = 2021;
            sDay.month = 12;
            sDay.day = 8;
            Console.WriteLine("sDay : {0} - {1} - {2}", sDay.year, sDay.month, sDay.day);
            Console.WriteLine();

            DataClass cDay = new DataClass();
            cDay.year = 2021;
            cDay.month = 12;
            cDay.day = 8;
            Console.WriteLine("cDay : {0} - {1} - {2}", cDay.year, cDay.month, cDay.day);
            Console.WriteLine();

            DataStruct sDay2 = new DataStruct();
            DataClass cDay2 = new DataClass();
            Console.WriteLine("sDay2 : {0} - {1} - {2}", sDay2.year, sDay2.month, sDay2.day);
            Console.WriteLine();

            Console.WriteLine("cDay2 : {0} - {1} - {2}", cDay2.year, cDay2.month, cDay2.day);
            Console.WriteLine();

            DataStruct s = sDay;
            DataClass c = cDay;

            s.year = 2000;
            c.year = 2000;

            Console.WriteLine("s : {0} - {1} - {2}", s.year, s.month, s.day);
            Console.WriteLine();

            Console.WriteLine("c : {0} - {1} - {2}", c.year, c.month, c.day);
            Console.WriteLine();

            Console.WriteLine("sDay : {0} - {1} - {2}", sDay.year, sDay.month, sDay.day);
            Console.WriteLine();

            Console.WriteLine("cDay : {0} - {1} - {2}", cDay.year, cDay.month, cDay.day);



        }
    }
}
