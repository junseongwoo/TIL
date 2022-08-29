using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 문자열을 연결하는 네가지 방법
 * (1) '+' 연산자 사용
 * (2) 문자열 보간(string interpolation) 
 * - $을 이용하여 문자열 변수의 값을 표현 
 * - 변수는 {}를 사용하여 표시 
 * (3) String.Format
 * - {0} 부터 순차적인 숫자로 매개변수를 표시
 * (4) String.Concat()과 String.Join()
 * - Concat() 메소드는 문자열을 연결한 새로운 문자열을 리턴 
 * - Join() 메소드는 구분 기호를 표시
 */

namespace _027_StringConcat
{
    class Program
    {
        static void Main(string[] args)
        {
            string userName = "Woo";
            string date = DateTime.Today.ToShortDateString();

            string strPlus = "Hi " + userName + ". Today is " + date + ".";
            Console.WriteLine(strPlus);

            string strFormat = String.Format("Hi {0}. Today is {1}.", userName, date);
            Console.WriteLine(strFormat);

            string strConcat = String.Concat("Hi ", userName, ".", "Today is ", date, ".");
            Console.WriteLine(strConcat);

            string[] Num = { "1", "2", "3", "4", "5" };
            string s = String.Concat(Num);
            Console.WriteLine(s);

            s = String.Join(", ", Num);
            Console.WriteLine(s);
        }
    }
}
