using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _075_FactorialMethod
{
    class Program
    {
        static void Main(string[] args)
        {
            // 1! ~ 10! 까지의 합 
            int sum = 0;

            for (int i = 1; i <= 10; i++)
            {
                sum += FactorialFunc(i);
            }

            Console.WriteLine("1!부터 10!까지의 합 : {0, 8:N0} ", sum);
        }

        private static int FactorialFunc(int v)
        {
            int sum = 1;

            for (int i = 1; i <= v; i++)
            {
                // 5! = 5 x 4 x 3 x 2 x 1 
                sum *= i;
            }
            Console.WriteLine("{0, 2}!은 {1, 10:N0}", v, sum);

            return sum;
        }
    }
}
