using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 산술연산자
 * 4개의 사칙연산 (+, -, *, /)
 * 나머지 (%) 연산자
 * 
 * 산술연산에서 중요한 것은 자료형이다.
 * 정수 / 정수 = 정수 
 * 정수 / 실수 = 실수
 */

namespace _17_ArithmeticOperators
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("정수의 계산");
            Console.WriteLine(123+45);
            Console.WriteLine(123-45);
            Console.WriteLine(123*45);
            Console.WriteLine(123/45);
            Console.WriteLine(123%45);

            Console.WriteLine("\n실수의 계산");
            Console.WriteLine(123.45 + 67.89);
            Console.WriteLine(123.45 - 67.89);
            Console.WriteLine(123.45 * 67.89);
            Console.WriteLine(123.45 / 67.89);
            Console.WriteLine(123.45 % 67.89);


        }
    }
}
