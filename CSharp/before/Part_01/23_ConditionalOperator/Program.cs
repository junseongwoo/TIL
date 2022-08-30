using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 조건 연산자
 * C#의 연산자 중 유일하게 3개 항을 갖는 연산자
 * condition이 true이면 first_expression 
 * false이면 second_expression 적용
 * 
 * condition ? first_expression : second_expression
 */

namespace _23_ConditionalOperator
{
    class Program
    {
        static void Main(string[] args)
        {
            int input = Convert.ToInt32(Console.ReadLine());

            string result = (input > 0) ? "양수입니다" : "음수입니다";
            Console.WriteLine("{0}은 {1}", input, result);
            Console.WriteLine("{0} % 2 = {1}", input, (input % 2 == 0) ? "짝수" : "홀수");

            for(int i = 1; i <= 50; i++)
            {
                Console.WriteLine("{0,3}{1}", i, i % 10 != 0 ? "" : "\n");
            }

        }
    }
}
