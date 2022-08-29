using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 선택적 인수(optional argument)
 * - 메소드를 호출할 때 일부 매개변수에 대한 인수 생략 가능
 * 
 * 명명된 인수(named argument)
 * - 인수를 매개변수 목록 내의 매개변수 위치가 아니라 매개변수 이름과 연결하여 
 * 특정 매개변수에 대한 인수를 지정 가능 
 */

namespace _091_OptionalNamedArguments
{
    class Program
    {
        static int MyPower(int x, int y = 2)
        {
            int result = 1;
            for (int i = 0; i < y; i++)
            {
                result *= x;
            }
            return result;
        }

        static int Area(int h, int w)
        {
            return h * w;
        }

        static void Main(string[] args)
        {
            Console.WriteLine(MyPower(4, 2));
            Console.WriteLine(MyPower(4));
            Console.WriteLine(MyPower(3, 4));

            Console.WriteLine(Area(w: 5, h: 6));
            Console.WriteLine(Area(h: 6, w: 5));

        }
    }
}
