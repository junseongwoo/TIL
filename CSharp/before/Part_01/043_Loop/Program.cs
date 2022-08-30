using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 반복문
 * while, do~while, for 
 * 
 * (1) 1~100 더하는 프로그램
 * (2) 1~100 중 홀수만 더하는 프로그램
 * (3) 1~100을 역수로 하여 합을 구하는 프로그램
 * 
 */
namespace _043_Loop
{
    class Program
    {
        static void Main(string[] args)
        {
            // 1~100을 더하는 프로그램 
            int sum = 0;

            for (int i = 1; i<=100; i++)
            {
                sum += i;
            }

            Console.WriteLine("1부터 100까지의 합은 : {0}", sum);

            // 1~100에서 홀수만 더하는 프로그램 
            int sum2 = 0;

            for (int i =1; i<=100; i++)
            {
                if(i%2 != 0)
                {
                    sum2 += i;
                }
            }
            Console.WriteLine("1부터 100까지 홀수의 합은 : {0}", sum2);

            // 1 ~ 100의 역수를 더하는 프로그램 
            double sum3 = 0;

            for (int i=1; i<=100; i++)
            {
                sum3 += (1.0 / i);
            }

            Console.WriteLine("1부터 100까지 역수의 합은 : {0}", sum3);
        }
    }
}
