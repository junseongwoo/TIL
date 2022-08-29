using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
 * TimeSpan은 두 시간의 간격을 나타낸다.
 * TimeSpan 객체는 양수 또는 음수로 측정되는 시간 간격을 
 * 일, 시간, 분, 초 및 초의 소수부로 나타낸다.
 * 
 * TimeSpan 구조체의 가장 큰 단위는 일
 */
namespace _086_TimeSpan
{
    class Program
    {
        static void Main(string[] args)
        {
            DateTime christmas = new DateTime(2018, 12, 25);
            DateTime newYearsDay = new DateTime(2019, 1, 1);

            TimeSpan span = newYearsDay - christmas;

            Console.WriteLine("크리스마스와 1월 1일의 시간 간격");
            Console.WriteLine("{0, 14}", span);
            Console.WriteLine("{0, 14} days", span.Days);
            Console.WriteLine("{0, 14} hours", span.Hours);
            Console.WriteLine("{0, 14} minutes", span.Minutes);
            Console.WriteLine("{0, 14} seconds", span.Seconds);
            Console.WriteLine("{0, 14} milliseconds", span.Milliseconds);

            Console.WriteLine("또는");
            Console.WriteLine("{0, 14}", span);
            Console.WriteLine("{0, 14} days", span.TotalDays);
            Console.WriteLine("{0, 14} hours", span.TotalHours);
            Console.WriteLine("{0, 14} minutes", span.TotalMinutes);
            Console.WriteLine("{0, 14} seconds", span.TotalSeconds);
            Console.WriteLine("{0, 14} milliseconds", span.TotalMilliseconds);
            Console.WriteLine("{0, 14} milliseconds", span.Ticks);
        }
    }
}
