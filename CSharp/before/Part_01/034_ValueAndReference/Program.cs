using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * C#의 자료형은 값 형식(value type)과 참조 형식(reference type)이 있다.
 * 값 형식 : 변수가 실제 데이터 값을 저장하는 형식
 * 참조 형식 : 변수가 값이 저장되어 있는 곳의 위치를 저장하는 형식
 * 
 * 값 형식 : 기본 C# 형식(int, double, char, bool 등), enum, struct 
 * 참조 형식 : object, string, dynamic, class, interface, delegate 
 */

namespace _034_ValueAndReference
{
    class Program
    {
        static void Main(string[] args)
        {
            string s = "before passing";
            Console.WriteLine(s);

            Test(s);
            Console.WriteLine(s);

            Test(ref s);
            Console.WriteLine(s);

        }

        public static void Test(string s)
        {
            s = "after passing";
        }

        public static void Test(ref string s)
        {
            s = "after passing";
        }
    }
}
