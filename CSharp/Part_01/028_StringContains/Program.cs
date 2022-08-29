using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 문자열의 검색
 * (1) Contains() 메소드
 * - string에 특정 문자열이 포함되어 있는지를 체크 
 * - 포함되어 있으면 true 아니면 false 리턴 
 * 
 * (2) IndexOf() 메소드
 * - 문자열에서 특정 문자 또는 문자열이 나타나는 인덱스를 리턴 
 * - 인덱스는 0부터 시작, 찾는 문자열이 없다면 -1 리턴 
 * 
 * (3) 대소문자를 구분하지 않는 비교
 * - Contains() 메소드는 대소문자를 구분
 * - stringComparison 중에서 
 * - IgnoreCase가 들어 있는 열거형을 사용하면 대소문자를 구분하지 않고 비교
 * 
 * (4) String.StartsWith()과 String.EndsWith() 메소드
 * - StartsWith() 메소드는 문자열이 특정 문자열로 시작되는지를 알려준다.
 * - EndWith() 메소드는 특정 문자열로 끝나는지를 알려준다.
 */
namespace _028_StringContains
{
    class Program
    {
        static void Main(string[] args)
        {
            string s1 = "mouse, cow, tiger, rabbit, dragon";
            string s2 = "Cow";
            //string s2 = "cow";
            bool b = s1.Contains(s2);

            Console.WriteLine("'{0}' is in the string '{1}' : {2}", s2, s1, b);

            if(b)
            {
                int index = s1.IndexOf(s2);
                if (index >= 0)
                {
                    Console.WriteLine("'{0}' begins at index '{1}'", s2, index);
                }
            }

            if(s1.IndexOf(s2, StringComparison.CurrentCultureIgnoreCase) >= 0 )
            {
                Console.WriteLine("'{0}' is in the string '{1}'", s2, s1);
            }
        }
    }
}
