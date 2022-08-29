using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 변수 = 값을 저장하는 곳 
 * var형 -> 지역변수로만 사용할 수 있고 컴파일러가 형식을 결정한다.
 */

namespace _004_Variable
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("이름을 입력하세요 : ");
            string name = Console.ReadLine();

            Console.WriteLine(name);

        }
    }
}
