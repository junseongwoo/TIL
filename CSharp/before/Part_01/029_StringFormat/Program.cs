using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * String.Format 메소드는 지정된 형식에 따라 문자열로 변환하여 다른 문자열에 삽입
 * 포맷 문자열에 {0} {1}과 같은 인덱스를 사용하여 표현
 * 포맷 문자열 뒤에 나오는 파라미터는 0부터 순서대로 번호 부여
 * [0:]와 같이 인덱스 뒤에 콜론과 함께 형식지정자가 나올 수 있다.
 * C : 통화
 * d : 날짜
 * t : 시간
 */
namespace _029_StringFormat
{
    class Program
    {
        static void Main(string[] args)
        {
            string max = String.Format("0x{0:X} {0:N}", Int64.MaxValue);
            Console.WriteLine(max);

            Decimal exchangeRate = 1129.20m;

            string s = String.Format("현재 원달러 환율은 {0} 입니다.", exchangeRate);
            Console.WriteLine(s);

            s = String.Format("현재 원달러 환율은 {0:C2} 입니다.", exchangeRate);
            Console.WriteLine(s);

            s = String.Format("오늘 날짜는 {0:d}, 시간은 {0:t} 입니다.", DateTime.Now);
            Console.WriteLine(s);

            TimeSpan duration = new TimeSpan(1, 12, 23, 62);
            string output = String.Format("소요 시간 : {0:c}", duration);
            Console.WriteLine(output);
        }
    }
}
