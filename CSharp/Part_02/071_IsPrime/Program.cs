using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 정수 n이 소수인지 알아내는 메소드를 만들고 
 * 1 ~ 100까지 소수를 찾아 출력하고 모두 몇 개가 있는지 출력
 */ 

namespace _071_IsPrime
{
    class Program
    {
        static void Main(string[] args)
        {
            int count = 0;

            for (int i = 2 ; i <= 100; i++)
            {
                if (IsPrime(i))
                {
                    Console.Write("{0} ", i);
                    count++;
                }
            }
            Console.WriteLine("\n2 ~ 100까지 소수는 모두 {0}개 있습니다.", count);
        }

        private static bool IsPrime(int x)
        {
            for (int i = 2; i < x; i++)
            {
                if (x % i == 0)
                {
                    return false;
                }
            }
            return true;
        }
    }
}
