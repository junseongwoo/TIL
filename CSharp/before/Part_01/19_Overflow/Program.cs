using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * OverflowException과 checked 키워드
 */

namespace _19_Overflow
{
    class Program
    {
        static void Main(string[] args)
        {
            //Console.WriteLine("int.MaxValue = {0}", int.MaxValue);
            int x = int.MaxValue, y = 0;
            //y = x + 10;

            //Console.WriteLine("int.MaxValue + 10 = {0}", y);

            checked
            {
                try
                {
                    y = x + 10;
                }
                catch (Exception e)
                {
                    Console.WriteLine(e.Message);
                    throw;
                }
            }

            Console.WriteLine("int.MaxValue + 10 = {0}", y);
        }
    }
}
