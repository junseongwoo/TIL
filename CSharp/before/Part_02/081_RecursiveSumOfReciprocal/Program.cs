using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 1부터 n까지의 역수의 합을 재귀메소드로 구현 
 * n이 1이면 1
 * 그렇지 않으면 SumOfReci(n) = 1/n + SumOfReci(n-1)
 */

namespace _081_RecursiveSumOfReciprocal
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("n을 입력하세요 : ");
            int n = int.Parse(Console.ReadLine());
            Console.WriteLine("1부터 {0}까지의 역수의 합 : {1}", n, SumOfReci(n));
        }

        private static double SumOfReci(int n)
        {
            if (n == 1)
            {
                return 1;
            }
            else
            {
                return (1.0 / n) + SumOfReci(n - 1);
            }
        }
    }
}
