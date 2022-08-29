using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 재귀 메소드 
 * 메소드 안에서 자기 자신을 호출하는 메소드를 재귀메소드(recursive method)라 한다.
 */

namespace _079_RecursivePower
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Power(x,y)를 계산합니다.");
            Console.Write(" x를 입력하세요: ");
            double x = double.Parse(Console.ReadLine());
            Console.Write(" y를 입력하세요: ");
            double y = double.Parse(Console.ReadLine());
            Console.WriteLine(" {0}^{1} = {2}", x, y, Power(x, y));
        }

        private static double Power(double x, double y)
        {
            if (y == 0)
            {
                return 1;
            }
            else
                return x * Power(x, y - 1);
        }
    }
}
