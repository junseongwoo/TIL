using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 재귀메소드로 팩토리얼 계산
 */

namespace _080_RecursiveFactorial
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("m!을 계산합니다. m을 입력하세요 : ");
            double m = double.Parse(Console.ReadLine());
            Console.WriteLine("{0}! = {1}", m, FactFunc(m));
        }

        private static double FactFunc(double m)
        {
            if (m == 1)
            {
                return 1;
            }
            else
            {
                return m * FactFunc(m - 1);
            }
        }
    }
}
