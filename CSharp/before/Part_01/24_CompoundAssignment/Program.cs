using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 증감연산자와 대입연산자의 압축
 * 
 * a = a + 2    ==     a *= 2
 * x += y*3; == x = x+(y*3)
 */

namespace _24_CompoundAssignment
{
    class Program
    {
        static void Main(string[] args)
        {
            int x = 32;

            Console.WriteLine(x += 2);
            Console.WriteLine(x -= 8);
            Console.WriteLine(x *= 3);
            Console.WriteLine(x /= 2);
            Console.WriteLine(--x);
            Console.WriteLine(x++);
        }
    }
}
