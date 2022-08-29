using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 배열은 같은 자료형을 갖는 자료들의 연속된 집합
 * C#에서 배열은 참조형이라 new 키워드를 사용하여 생성한다.
 */

namespace _057_ArrayBasic
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] a = { 1, 2, 3 };
            Console.Write("a[]: ");
            foreach (var value in a)
            {
                Console.Write(value + " ");
            }

            int[] b = new int[] { 1, 2, 3 };
            Console.Write("\nb[]: ");
            for (int i = 0; i < 3; i++)
            {
                Console.Write(b[i] + " ");
            }

            int[] c = new int[3] { 1, 2, 3 };
            Console.Write("\nc[]: ");
            for (int i = 0; i < c.Length; i++)
            {
                Console.Write(c[i] + " ");
            }

            int[] d = new int[3];
            d[0] = 1;
            d[1] = d[0] + 1;
            d[2] = d[1] + 1;
            Console.Write("\nd[]: ");
            foreach (var value in d)
            {
                Console.Write(value + " ");
            }
            Console.WriteLine();

        }
    }
}
