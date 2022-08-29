using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 열거형은 서로 관련 있는 상수들의 집합을 정의한 것 
 * 숫자에 특정한 명칭을 붙이거나 의미를 쉽게 이해할 수 있게 하는 용도로 사용 
 * 
 * 원소로 기술된 명칭을 기호 상수라 하며 순서에 따라 디폴트 0 부터 정수 값을 갖게된다.
 */

namespace _032_Enum
{
    class Program
    {
        enum Size { Short, Tall, Grande, Venti };
        static int[] price = { 3300, 3800, 4300, 4800 };
        enum Colors { Red = 1, Green = 2, Blue = 4, Yellow = 8 };
        enum Coffee { Short = 3300, Tall = 3800, Grande = 4300, Venti = 4800 };

        static void Main(string[] args)
        {
            Console.WriteLine("커피 가격표");

            for(int i = 0; i < 4; i++)
            {
                if (i == (int)Size.Short)
                {
                    Console.WriteLine("{0,10} : {1:C}", Size.Short, price[i]);
                }

                else if (i == (int)Size.Tall)
                {
                    Console.WriteLine("{0,10} : {1:C}", Size.Tall, price[i]);
                }

                else if (i == (int)Size.Grande)
                {
                    Console.WriteLine("{0,10} : {1:C}", Size.Grande, price[i]);
                }

                else if (i == (int)Size.Venti)
                {
                    Console.WriteLine("{0,10} : {1:C}", Size.Venti, price[i]);
                }
            }

            Console.WriteLine("\n커피 가격표(Enum iteration)");
            foreach (var size in Enum.GetValues(typeof(Size)))
            {
                Console.WriteLine("{0,10} : {1:C}", size, price[(int)size]);
            }

            Console.WriteLine("\nColors Enum iteration");
            foreach (var color in Enum.GetValues(typeof(Colors)))
            {
                Console.WriteLine("{0,10} : {1}", color, Convert.ToInt32(color));
            }

            Console.WriteLine("\n커피 가격표(Enum iteration with value)");
            foreach (var coffee in Enum.GetValues(typeof(Coffee)))
            {
                Console.WriteLine("{0,10} : {1:C}", coffee, Convert.ToInt32(coffee));
            }
        }
    }
}


