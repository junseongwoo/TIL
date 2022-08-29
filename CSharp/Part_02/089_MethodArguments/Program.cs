using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 메소드에 인수를 전달하는 방법
 * (1) 값에 의한 호출
 * - 인수의 값을 메소드의 매개변수에 복사 
 * - 메소드 안에서 매개변수의 값이 바뀌더라도 호출한 곳의 인수에 영향을 미치지 않음
 * - C#에서의 디폴트 
 * 
 * (2) 참조에 의한 호출
 * - ref 키워드로 인수를 메소드로 전달하면 실제 변수의 참조, 즉 주소를 전달 
 * - 호출된 메소드에서 그 주소에 있는 변수의 값을 바꿀 수 있다.
 * 
 * (3) out에 의한 호출
 * - 호출한 곳으로 값을 내보내줄 때만 사용 
 * - 메소드 내에서는 사용되지 않는다.
 * - 호출하는 곳에서 그 변수를 어떤 값으로 초기화할 필요가 없다.
 * - out 키워드를 사용하면 메소드에서 여러 개의 값을 리턴하는 효과 
 */
namespace _089_MethodArguments
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = 3;
            Sqr(a);
            Console.WriteLine("Value : {0}", a);

            int b = 3;
            Sqr(ref b);
            Console.WriteLine("ref : {0}", b);

            string name;
            int id;
            GetName(out name, out id);
            Console.WriteLine("out : {0} {1}", name, id);
        }

        private static void GetName(out string name, out int id)
        {
            Console.Write("Enter Name : ");
            name = Console.ReadLine();
            Console.Write("Enter Id : ");
            id = int.Parse(Console.ReadLine());
        }

        private static void Sqr(int x)
        {
            x = x * x;
        }

        private static void Sqr(ref int x)
        {
            x = x * x;
        }
    }
}
