using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 메소드 오버로딩 : 여러 개의 메소드가 이름은 같고 매개변수만 다를 때 
 */

namespace _092_MethodOverloading
{
    class Program
    {
        static void Main(string[] args)
        {
            Print(10);
            Print(0.123);
            Print("Sum = ", 123.4);
        }

        private static void Print(double v)
        {
            Console.WriteLine(v);
        }

        private static void Print(string v1, double v)
        {
            Console.WriteLine(v1 + v);
        }

        private static void Print(int v)
        {
            Console.WriteLine(v);
        }
    }
}
