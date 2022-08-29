using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * DateTime형의 날짜와 시간 출력 양식을 지정하기 위해 형식문자열 사용
 * 
 * (1) 사용자 지정 형식
 * ToString("yyyy년 MM월 dd일")
 * string.Format{0:yyyy년 MM월 dd일}
 * 
 * (2) 표준형식 
 * D : 긴 날짜 형식 
 * d : 짧은 날짜 형식
 * T : 긴 시간 형식
 * t : 축약된 시간
 * 
 * (3) ToXXXString() 사용
 * D : ToLongDateString()
 * d : ToShortDateString()
 * T : ToLongTimeString()
 * T : ToShortTimeString()
 */

namespace _088_DateTimeFormat
{
    class Program
    {
        static void Main(string[] args)
        {
            DateTime today = DateTime.Now;

            // (1) 사용자 지정 형식
            Console.WriteLine(today.ToString("yyyy년 MM월 dd일"));
            Console.WriteLine(string.Format("{0:yyyy년 MM월 dd일}", today));
            Console.WriteLine(today.ToString("MMMM dd, yyyy ddd", CultureInfo.CreateSpecificCulture("en-US")));

            // (2) 표준 형식
            // d : 축약된 날짜 형식
            Console.WriteLine("d : " + today.ToString("d"));

            // D : 긴 날짜 형식
            Console.WriteLine("D : " + string.Format("{0:D}", today));

            // t : 축약된 시간
            Console.WriteLine("t : " + string.Format("{0:t}", today));

            // T : 긴 시간 형식
            Console.WriteLine("T : " + string.Format("{0:T}", today));

            // g : 일반 날짜 및 시간 (초생략) 
            Console.WriteLine("g : " + string.Format("{0:g}", today));

            // G : 일반 날짜 및 시간 
            Console.WriteLine("G : ", string.Format("{0:G}", today));

        }
    }
}
