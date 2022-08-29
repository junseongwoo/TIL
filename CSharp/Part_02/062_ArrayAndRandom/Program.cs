using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 배열에서 최소, 최대, 평균 계산
 * 
 */ 
namespace _062_ArrayAndRandom
{
    class Program
    {
        static void Main(string[] args)
        {
            Random r = new Random();
            int[] v = new int[20];

            for (int i = 0; i < v.Length; i++)
            {
                v[i] = r.Next(100);
            }
            PrintArray(v);

            int max = v[0]; // 최대값
            for (int i = 0; i < v.Length; i++)
            {
                if (v[i] > max)
                {
                    max = v[i];
                }
            }
            Console.WriteLine("최대값 : {0}", max);

            int min = v[0]; // 최소값 
            for (int i = 0; i < v.Length; i++)
            {
                if (v[i] < min)
                {
                    min = v[i];
                }
            }
            Console.WriteLine("최소값 : {0}", min);

            int sum = 0; // 합계
            for (int i = 0; i < v.Length; i++)
            {
                sum += v[i];
            }
            Console.WriteLine("합계: {0}\n평균: {1:F2}", sum, (double)sum / v.Length);
        }

        private static void PrintArray(int[] v)
        {
            for (int i = 0; i < v.Length; i++)
            {
                Console.Write("{0, 5}{1}", v[i], (i % 10 == 9) ? "\n" : "");
            }
        }
    }
}
