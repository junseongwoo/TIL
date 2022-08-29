using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 메소드 : 클래스, 구조체에 포함되어 있는 "함수" 
 * C#은 클래스 바깥에 선언되는 함수를 허용하지 않기 때문에 모든 함수는 메소드가 된다!
 * 
 * [접근제한자] 자료형 메소드_이름 (매개변수) {} 
 * - 메소드는 호출한 곳에 값을 반환할 수 있다.
 * - 메소드를 호출 할 때 객체를 만들지 않으려면 static으로 만들어야 한다.
 * - static을 가지는 메소드를 정적, 클래스 메소드라 하며 객체 이름이 아닌 클래스 이름으로 참조 가능
 */

namespace _070_StaticMethods
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = 10, b = 30, c = 20;
            //Program x = new Program();
            //Console.WriteLine("가장 큰 수 는 {0}", x.Larger(x.Larger(a, b), c));
            Console.WriteLine("가장 큰 수 는 {0}", Larger(Larger(a, b), c));
        }

        private static int Larger(int a, int b)
        {
            return (a >= b) ? a : b;
        }
    }
}
