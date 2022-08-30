using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * Random 클래스 
 * C#에서 Random 클래스는 참조형이라 new 를 사용하여 객체 생성 
 */

namespace _061_RandomClass
{
    class Program
    {
        static void Main(string[] args)
        {
            Random r = new Random();
            Console.Write("{0, -16}", "Random Bytes");
            Byte[] b = new byte[5];
            r.NextBytes(b);    // 한번 호출로 배열을 랜덤값으로 채움 

            foreach (var x in b)
            {
                Console.Write("{0, 12}", x);  // 12자리로 출력
            }
            Console.WriteLine();

            Console.Write("{0, -16}", "Random Double");  // 5개 double 랜던값 생성 저장
            double[] d = new double[5];

            for (int i = 0; i < 5; i++)
            {
                d[i] = r.NextDouble();
            }

            foreach (var x in d)
            {
                Console.Write("{0, 12:F8}", x);  // 12자리, 소수점 아래 8자리로 출력
            }
            Console.WriteLine();

            Console.Write("{0, -16}", "Random Int32");
            int[] a = new int[5];

            for (int i = 0; i < 5; i++)
            {
                a[i] = r.Next();
            }
            PrintArray(a);

            Console.Write("{0, -16}", "Random 0 ~ 99");
            int[] v = new int[5];

            for (int i = 0; i < 5; i++)
            {
                v[i] = r.Next(100);
            }
            PrintArray(v);
        }

        private static void PrintArray(int[] a)
        {
            foreach (var value in a)
            {
                Console.Write("{0, 12}", value);
            }
            Console.WriteLine();
        }
    }
}
