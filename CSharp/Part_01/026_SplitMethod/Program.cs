using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * String.Split() 메소드를 사용한 문자열 구문 분석
 * 문자열에서 구분하고자 하는 문자를 나눌 때 사용
 * default는 공백이며 매개변수를 사용하여 구분 하는 문자를 설정 가능
 */
namespace _026_SplitMethod
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("더하고자 하는 숫자들을 입력하세요.");
            string s = Console.ReadLine();
            Console.WriteLine("입력한 숫자 = {0}", s);

            int sum = 0;
            string[] v = s.Split();
            foreach (var i in v)
            {
                sum += int.Parse(i);
            }
            Console.WriteLine("결과 = {0}", sum);
        }
    }
}
