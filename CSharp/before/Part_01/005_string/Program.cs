using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * char : 영문자 숫자 한글 등 UTF-16으로 코딩된 문자 하나를 저장 가능 / '' 사용
 * ''는 문자, ""는 문자열
 */

namespace _005_string
{
    class Program
    {
        static void Main(string[] args)
        {
            string a = "hello";
            string b = "h";

            b = b + "ello";

            Console.WriteLine(a == b);
            Console.WriteLine("b = " + b);

            int x = 10;
            string c = b + '!' + " " + x;
            Console.WriteLine("c = " + c);
            
        }
    }
}
