using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 생성자 메소드 : 객체가 생성될 때 처리되는 메소드
 */

namespace _068_Constructor
{
    class Date
    {
        private int year, month, day;

        public Date()
        {
            year = 1;
            month = 1;
            day = 1;
        }

        public Date(int y, int m, int d)
        {
            year = y;
            month = m;
            day = d;
        }
        
        public void PrintDate()
        {
            Console.WriteLine("{0}-{1}-{2}", year, month, day);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Date birthday = new Date(1993, 4, 30);
            Date goodDay = new Date(1992, 12, 29);
            Date firstDay = new Date();

            birthday.PrintDate();
            goodDay.PrintDate();
            firstDay.PrintDate();
        }
    }
}
