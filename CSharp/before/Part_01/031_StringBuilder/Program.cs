using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * String과 StringBuilder의 차이
 * string 객체의 값은 한 번 만들면 변경할 수 없다. (immutable) 
 * 객체가 변경될 때 마다 새로운 string을 만들어서 변수명에 할당해 주는 것 
 * 
 * StringBuilder는 가변(mutable) 
 * 문자열이 변경되면 자동으로 필요한 메모리를 동적으로 조정하고 내용을 바꿀 수 있음
 */

namespace _031_StringBuilder
{
    class Program
    {
        static void Main(string[] args)
        {
            StringBuilder sb = new StringBuilder("This is a StringBuilder Test.");
            // ToString() : 객체의 값을 string으로 변환
            // Length : 객체의 길이를 가져오거나 설정
            Console.WriteLine("{0} ({1} characters)", sb.ToString(), sb.Length);

            sb.Clear(); // 객체의 모든 문자를 없앤다.
            Console.WriteLine("{0} ({1} chracters)", sb.ToString(), sb.Length);

            sb.Append("This is a new string.");
            Console.WriteLine("{0} ({1} characters)", sb.ToString(), sb.Length);

            sb.Insert(5, "xyz ", 2);
            Console.WriteLine("{0} ({1} characters)", sb.ToString(), sb.Length);

            sb.Remove(5, 4);
            Console.WriteLine("{0} ({1} characters)", sb.ToString(), sb.Length);

            sb.Replace("xyz", "abc");
            Console.WriteLine("{0} ({1} characters)", sb.ToString(), sb.Length);

            Stopwatch time = new Stopwatch();
            string test = string.Empty;
            time.Start();
            for (int i =0; i<100000; i++)
            {
                test += i;
            }

            time.Stop();
            Console.WriteLine("String: " + time.ElapsedMilliseconds + " ms");

            StringBuilder test1 = new StringBuilder();
            time.Reset();
            time.Start();

            for (int i =0; i< 100000; i++)
            {
                test1.Append(i);
            }

            time.Stop();
            Console.WriteLine("Stringbuilder: " + time.ElapsedMilliseconds + " ms");

        }
    }
}
