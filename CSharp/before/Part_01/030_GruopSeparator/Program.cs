using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
 * 그룹 분리자 (GroupSeparator) : 숫자의 정수부를 표시할 때 세자리마다 콤마(,)를 넣는 것이 
 *                                큰 수를 읽을 때 편리하다. 이 콤마를 그룹 분리자라한다. 
 *                                
 * 표준 형식지정자 중에 N이 그룹 분리자를 표시해준다.
 * N 형식지정자는 디폴트로 소수점 아래 두 자리를 표시
 * 소수점 아래 자릿수를 지정할 때는 N 뒤에 숫자로 표시하며 반올림되서 표시된다.
 */

namespace _030_GruopSeparator
{
    class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                Console.Write("표시할 숫자를 입력하세요(종료:-1): ");
                string s = Console.ReadLine();
                double v = double.Parse(s);
                if (v == -1)
                    break;

                Console.WriteLine(NumberWithGroupSeparator(s));
            }
        }

        private static string NumberWithGroupSeparator(string s)
        {
            int pos = 0;
            double v = Double.Parse(s);

            if (s.Contains("."))
            {
                pos = s.Length - s.IndexOf('.');
                string formatStr = "{0:N" + (pos - 1) + "}";
                s = string.Format(formatStr, v);
            }

            else
                s = string.Format("{0:N0}", v);
            return s;
    }
    }

    
}
