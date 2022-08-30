using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 값 형식의 변수는 null 값을 할당할 수 없다.
 * nullable을 쓰면 값 형식 변수에 null을 할당할 수 있게 했다.
 * 
 * Nullabel 특성
 * (1) Nullable<T> 형은 값 형에 null을 할당할 수 있게 함
 * (2) ? 연산자는 Nullable형을 간단히 표현할 수 있게 함
 * (3) Value 속성은 null이면 InvalidOperationException을 발생, 아니면 값을 리턴
 * (4) HasValue 속성은 변수가 값을 가지면 true, null이면 false 리턴 
 * (5) Nullable형에서는 ==과 != 연산만 사용할 수 있다. 
 * 다른 비교는 Nullable 클래스의 Compare() 메소드 사용 
 */

namespace _038_Nullable
{
    class Program
    {
        static void Main(string[] args)
        {
            Nullable<int> i = null;
            Console.WriteLine(i.GetValueOrDefault()); // 숫자의 디폴트인 0 출력

            if (i.HasValue) // 값을 가지고 있으면
                Console.WriteLine(i.Value);
            else
                Console.WriteLine("Null");

            int? x = null;
            int j = x ?? 0;
            Console.WriteLine("x = {0}, j = {1}", x, j);

            Console.WriteLine("x >= 10 ? {0}", x >= 10);
            Console.WriteLine("x < 10 ? {0}", x < 10);

            if (Nullable.Compare<int>(i,j) < 0)
            {
                Console.WriteLine("i < j");
            }
            else if (Nullable.Compare<int>(i,j) > 0)
            {
                Console.WriteLine("i > j");
            }
            else
            {
                Console.WriteLine("i = j");
            }
        }
    }
}
