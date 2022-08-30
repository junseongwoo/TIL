using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 일반화 메소드 (제네릭 메소드)
 * 데이터 형식을 일반화 하는 것 
 * void 메소드<T>(T[] a) {...} // 정의 
 * T는 type이라는 뜻 
 */

namespace _093_GenericMethod
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] a = { 1, 2, 3 };
            double[] d = { 0.1, 0.2, 0.3 };
            string[] s = { "tiger", "lion", "zebra" };

            PrintArray<int>(a);
            PrintArray<double>(d);
            PrintArray<string>(s);
        }

        private static void PrintArray<T>(T[] a)
        {
            foreach (var item in a)
            {
                Console.WriteLine("{0, 8}", item);
            }
            Console.WriteLine();
        }
    }
}
