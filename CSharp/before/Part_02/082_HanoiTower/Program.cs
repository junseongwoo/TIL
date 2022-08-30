using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _082_HanoiTower
{
    class Program
    {
        static void Main(string[] args)
        {
            for (int i = 1; i <= 50; i++)
            {
                double m = Mersenne(i);
                Console.WriteLine("메르센수({0}) = {1:N0} = {2:N1}일 = {3:N1}년", i, m, m / 3600 / 24,
                    m / 3600 / 24 / 365);
            }

            Console.WriteLine("\n하노이 탑 : {0}, {1} -> {2} -> {3}", 4, 'A', 'B', 'C');
            Hanoi(4, 'A', 'B', 'C');
        }

        // n개의 원반을 from에서 by를 이용하여 to로 이동한다.
        private static void Hanoi(int n, char from, char to, char by)
        {
            if (n == 1)
            {
                Console.WriteLine("Move : {0} -> {1}", from, to);
            }
            else
            {
                Hanoi(n - 1, from, by, to);
                Console.WriteLine("Move : {0} -> {1}", from, to);
                Hanoi(n - 1, by, to, from);
            }
        }

        private static double Mersenne(int i)
        {
            return Math.Pow(2, i) - 1;
        }
    }
}
