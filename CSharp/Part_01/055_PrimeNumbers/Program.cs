using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 1000까지의 소수를 출력하고 몇 개인지 출력
 */

namespace _055_PrimeNumbers
{
    class Program
    {
        static void Main(string[] args)
        {
            int index;
            int primes = 0;

            for (int i = 2; i <1000; i++) // 1000까지의 수 
            {
                // ex) i = 5 
                // index = 2 ~ 4 
                // 5 % 2 
                // 5 % 3 
                // 5 % 4 
                for(index = 2; index <i; index++)
                {
                    if (i % index == 0)
                    {
                        break;
                    }
                }
                if (index == i)
                {
                    primes += 1; // 개수 파악 
                    Console.Write("{0, 5}{1}", i, primes % 15 == 0 ? "\n" : ""); // 한줄의 개수 
                }
            }

            Console.WriteLine("\n2부터 1000까지의 소수의 개수 : {0}개", primes);
        }
    }
}
