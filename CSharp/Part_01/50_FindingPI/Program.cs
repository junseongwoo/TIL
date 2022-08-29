using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 원주율의 계산
 * 
 * 파이 = 4(1/1-1/3+1/5-1/7+1/9-1/11+1/13-1/15....)
 */

namespace _050_FindingPI
{
    class Program
    {
        static void Main(string[] args)
        {
            bool sign = false;
            double pi = 0;

            for (int i = 1; i < 20000; i+=2)
            {
                if (sign == false)
                {
                    pi += 1.0 / i;
                    sign = true;
                }

                else
                {
                    pi -= 1.0 / i;
                    sign = false;
                }
                Console.WriteLine("i = {0}, PI = {1}", i, 4 * pi);
            }
        }
    }
}
