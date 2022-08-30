using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 이름을 배열에 저장하고
 * 알파벳 순으로 정렬
 */

namespace _060_ArraySorting
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] name = { "Mouse", "Cow", "Tiger", "Rabbit", "Dragon", "Snake", "Horse" };
            PrintArray("Before Sort: ", name);

            Array.Reverse(name);
            PrintArray("After Reverse: ", name);

            Array.Sort(name);
            PrintArray("After Sort: ", name);

            Array.Reverse(name);
            PrintArray("After Reverse: ", name);
        }

        private static void PrintArray(string v, string[] name)
        {
            Console.WriteLine(v);
            foreach (var n in name)
            {
                Console.Write("{0} ", n);
            }

            Console.WriteLine();

        }
    }
}
