using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 문자열과 숫자의 변환
 * - 문자열을 숫자로 바꾸는 방법
 * (1) 숫자형식에 Parse()나 TryParse() 메소드 사용하는 것
 * (2) Convert 클래스의 메소드를 사용하는 것 
 * 
 * (1) Parse(), TryParse() 사용 하여 바꿔 본다.
 * - 두 메소드 모두 문자열의 앞뒤에 있는 공백은 무시한다.
 * - 다른 모두 문자들은 int, double, decimal 등의 숫자형식에 맞는 문자들이어야 한다.
 * - 문자열 중간에 공백이 있으면 에러 발생 
 * - 문자열이 숫자를 나타내지 않는 경우 Parse()는 에러 발생, TryParse()는 false 리턴 
 */

namespace _014_StringToNumber
{
    class Program
    {
        static void Main(string[] args)
        {
            string input;
            int value;

            Console.WriteLine("1. int로 변환할 문자열을 입력하세요: ");
            input = Console.ReadLine();
            bool result = Int32.TryParse(input, out value);

            if (!result)
                Console.WriteLine("'{0}'는 int로 변환될 수 없습니다.\n", input);
            else
                Console.WriteLine("int '{0}'으로 변환되었습니다.\n", value);

            Console.Write("2. double로 변환할 문자열을 입력하세요: ");
            input = Console.ReadLine();

            try
            {
                double m = Double.Parse(input);
                Console.WriteLine("double '{0}'으로 변환되었습니다.\n", m);
            }
            catch (FormatException e)
            {
                Console.WriteLine(e.Message);
            }
        }
    }
}
