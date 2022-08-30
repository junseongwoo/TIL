using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 
 */

namespace _18_DivideByZero
{
    class Program
    {
        static void Main(string[] args)
        {
            int x = 10, y = 0;

            // 0으로 나누려해서 DivideByZero 에러 발생
            //Console.WriteLine(10 / y);
            //Console.WriteLine(x / y);

            try
            {
                Console.WriteLine(x / y);
            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);
            }
        }
    }
}
