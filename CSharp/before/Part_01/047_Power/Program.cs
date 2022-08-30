using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 반복문을 이용하여 x의 y승을 구한다.
 */

namespace _047_Power
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("x의 y승을 구합니다.");
            Console.Write("x를 입력하세요 : ");
            double x = double.Parse(Console.ReadLine());
            Console.Write("y를 입력하세요 : ");
            double y = double.Parse(Console.ReadLine());

            double pow = 1;

            for (int i = 0; i < y; i++) 
            {
                pow = pow * x;
            }

            Console.WriteLine("{0}의 {1}승은 {2} 입니다.", x, y, pow);
        }
    }
}
