using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _045_MultiplicationTable
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("구구단의 출력한 단수를 입력 하세요 : ");
            int n = int.Parse(Console.ReadLine());

            for (int i = 1; i <= 9; i++)
            {
                Console.WriteLine("{0} x {1} = {2}", n, i, n * i);
            }

            
        }
    }
}
