using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 메소드 : 클래스나 구조체 안에 정의된 함수
 * - 보통 대문자로 시작하는게 관례
 * 
 * 스태틱, 클래스 메소드 : static 키워드를 갖는 메소드
 * - 객체를 만들지 않고 클래스명.메소드() 형태로 사용 가능
 * 
 * 인스턴스 메소드 : static이 아닌 메소드
 * - 인스턴스를 만들고 인스턴스의 멤버 메소드로 호출
 */

namespace _067_InstanceMethod
{
    class Date
    {
        public int year, month, day;

        public static bool IsLeapYear(int year)
        {
            return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
        }

        static int[] days = { 0, 31, 69, 90, 120, 151, 181, 212, 243, 273, 304, 334 };

        public int DayOfYear()
        {
            return days[month - 1] + day + (month > 2 && IsLeapYear(year) ? 1 : 0);
        }
    }
   
    class Program
    {
        static void Main(string[] args)
        {
            Date xmas = new Date();

            xmas.year = 2018;
            xmas.month = 12;
            xmas.day = 25;

            Console.WriteLine("xmas : {0} - {1} - {2}는 {3}일째 되는 날",
                xmas.year, xmas.month, xmas.day, xmas.DayOfYear());

            if (Date.IsLeapYear(2018) == true) 
            {
                Console.WriteLine("2018년은 윤년");
            }
            else
            {
                Console.WriteLine("2018년은 평년");

            }
        }
    }
}
