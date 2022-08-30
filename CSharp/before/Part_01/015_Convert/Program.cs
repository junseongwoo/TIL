using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * Convert 클래스와 2진수, 8진수, 16진수 출력
 * - Console.ReadLine() 으로 입력받는 데이터는 모두 string 이다.
 * - 입력받는 데이터를 숫자로 변경 할 때 사용하는 Convert 클래스 
 * 
 * Convert Class 
 * - ToInt32(), ToSingle(), ToDouble()과 같이 string을 숫자형으로 바꾸는 여러가지 메소드를 제공
 * - ToString(), ToByte(), ToBoolean(), ToChar(), ToDateTime() 등 여러 자료형 사이 변환 지원
 * 
 */

namespace _015_Convert
{
    class Program
    {
        static void Main(string[] args)
        {
            int x, y;

            Console.Write("첫 번째 숫자를 입력하세요: ");
            x = Convert.ToInt32(Console.ReadLine());
            Console.Write("두 번째 숫자를 입력하세요: ");
            y = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("{0} + {1} = {2}", x, y, x + y);

            // 2진수, 8진수, 10진수, 16진수로 출력
            short value = short.MaxValue; // Int16.MaxValue
            Console.WriteLine("\n2진수, 8진수, 10진수, 16진수로 출력하기");

            int baseNum = 2;
            string s = Convert.ToString(value, baseNum);
            int i = Convert.ToInt32(s, baseNum);
            // baseNum을 2자리로 출력, s를 16자리로 출력하라는 뜻 
            Console.WriteLine("i = {0}, {1,2}진수 = {2,16}", i, baseNum, s);

            baseNum = 8;
            s = Convert.ToString(value, baseNum);
            i = Convert.ToInt32(s, baseNum);
            Console.WriteLine("i = {0}, {1,2}진수 = {2, 16}", i, baseNum, s);

            baseNum = 10;
            s = Convert.ToString(value, baseNum);
            i = Convert.ToInt32(s, baseNum);
            Console.WriteLine("i = {0}, {1,2}진수 = {2, 16}", i, baseNum, s);

            baseNum = 16;
            s = Convert.ToString(value, baseNum);
            i = Convert.ToInt32(s, baseNum);
            Console.WriteLine("i = {0}, {1,2}진수 = {2, 16}", i, baseNum, s);
        }
    }
}
