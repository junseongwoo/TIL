using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * n의 m승을 구하는 메소드 만들고 
 * 2의 0승부터 2의 20승까지 출력하는 프로그램 
 */

namespace _077_Power
{
    class Program
    {
        static void Main(string[] args)
        {
            PowerFunc(2, 20);
        }

        private static void PowerFunc(int n, int m)
        {
            int p = 1;

            for (int i = 1; i <= m; i++)
            {
                p = p * i;
            }
        }
    }
}
