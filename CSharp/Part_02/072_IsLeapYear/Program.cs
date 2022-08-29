using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 윤년인지 알아내는 정적 메소드
 * 연도 n이 윤년인지 알아내는 메소드 bool IsLearYear(int n) 
 * 2001 ~ 2100년 사이의 윤년을 찾는 프로그램 
 */

namespace _072_IsLeapYear
{
    class Program
    {
        static void Main(string[] args)
        {
            int count = 0;

            for (int i = 2001; i <= 2100; i ++)
            {
                if (IsLearYear(i))
                {
                    Console.Write("{0} ", i);
                    if ((count + 10) / 10 == 0)
                    {
                        Console.WriteLine();
                    }
                    count++;
                }
            }
            Console.WriteLine();
            Console.WriteLine("윤년은 {0}개 입니다.", count);
        }

        private static bool IsLearYear(int n)
        {
            if (n % 4 == 0 && (n % 100 != 0 || n % 400 == 0))
            {
                return true;
            }

            return false;
        }
    }
}
