using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 논리 연산자
 * &&, ||, ^, ! 4가지 이며 각각 AND, OR XOR, NOT의 연산 수행
 */

namespace _21_LogicalOperators
{
    class Program
    {
        static void Main(string[] args)
        {
            bool result;
            int first = 10, second = 20;

            result = (first == second) || (first > 5);
            Console.WriteLine("{0} || {1} : {2}", first == second, first > 5, result);

            result = (first == second) && (first > 5);
            Console.WriteLine("{0} && {1} : {2}", first == second, first > 5, result);

            result = true ^ false;
            Console.WriteLine("{0} ^ {1} : {2}", true, false, result);

            result = !(first > second);
            Console.WriteLine("!{0} : {1}", first > second, result);
        }
    }
}
