using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * n부터 m까지 정수의 합을 구하는 메소드를 만들고
 * 1 부터 100까지의 합과
 * 101 부터 200 까지의 합을 구하라 
 */


namespace _076_Add
{
    class Program
    {
        static void Main(string[] args)
        {
            AddFunc(1, 100);
            AddFunc(101, 200);
        }

        private static void AddFunc(int n, int m)
        {
            int sum = 0;

            for (int i = n; i <= m; i++)
            {
                sum += i;
            }
            Console.WriteLine("{0, 3}부터 {1, 3}까지의 합은 {2, 6:N0}이다.", n, m, sum);
        }
    }
}
