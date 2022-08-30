using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 이중 루프를 이용한 구구단 출력
 */

namespace _054_TimesTable
{
    class Program
    {
        static void Main(string[] args)
        {
            //Console.Write("출력한 구구단 단수를 입력 하세요 : ");
            //int n = int.Parse(Console.ReadLine());

            for(int i = 1; i <= 9; i++)
            {
                for(int j = 2; j <= 9; j++)
                    Console.Write("{0} * {1} = {2,2}   ", j, i, j*i);
                Console.WriteLine();
            }
            
        }
    }
}
