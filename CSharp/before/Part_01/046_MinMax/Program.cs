using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 5명의 키를 읽은 후 평균과 최소, 최대값을 출력 
 */
namespace _046_MinMax
{
    class Program
    {
        static void Main(string[] args)
        {
            double max = double.MaxValue;
            double min = double.MinValue;
            double sum = 0;

            Console.WriteLine("{0} {1}", max, min);

            for (int i = 0; i < 5; i++)
            {
                Console.Write("키를 입력하세요(cm) : ");
                double h = double.Parse(Console.ReadLine());
                Console.WriteLine(h);

                if (h > max)
                {
                    max = h;
                    Console.WriteLine("max : {0} ", max);
                }

                if (h < min)
                {
                    min = h;
                    Console.WriteLine("min : {0} ", min);
                }
                sum += h;
            }

            Console.WriteLine("최소 : {0}, 최대 : {1}, 평균 : {2}", min, max, sum / 5);

            
        }
    }
}
