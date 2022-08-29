using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 생애계산기
 * 생일을 입력하면 오늘까지 살아 온 날짜수를 계산하는 프로그램 
 */

namespace _073_AgeCalculator
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("생일을 입력하세요(yyyy/mm/dd) : ");
            string birth = Console.ReadLine();
            string[] bArr = birth.Split('/');

            int bYear = int.Parse(bArr[0]);
            int bMonth = int.Parse(bArr[1]);
            int bDay = int.Parse(bArr[2]);

            int tYear = DateTime.Today.Year;
            int tMonth = DateTime.Today.Month;
            int tDay = DateTime.Today.Day;

            int totalDays = 0;

            // 올해의 1월 1일 부터 오늘까지의 날짜 수 
            totalDays += DayOfYear(tYear, tMonth, tDay);

            // 태어난 해의 생일부터 마지막 날까지의 날짜 수 
            int yearDays = IsLeapYear(bYear) ? 366 : 365;
            totalDays += yearDays - DayOfYear(bYear, bMonth, bDay);

            for (int year = bYear + 1; year < tYear; year++)
            {
                if (IsLeapYear(year))
                {
                    totalDays += 366;
                }
                else
                {
                    totalDays += 365;
                }
            }
            Console.WriteLine("total days from birth day : {0}일", totalDays);
        }

        private static bool IsLeapYear(int Year)
        {
            return Year % 4 == 0 && (Year % 100 != 0 || Year % 400 == 0);
        }

        private static int DayOfYear(int Year, int Month, int Day)
        {
            return D
        }
    }
}
