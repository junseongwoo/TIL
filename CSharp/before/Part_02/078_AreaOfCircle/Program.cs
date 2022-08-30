using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 원의 면적은 파이 r제곱 
 * 반지름을 받아 원의 면적을 리턴하는 메소드 구현  
 * 원의 반지름이 1 ~ 10cm까지 변할 때 원의 면적 출력 
 */ 

namespace _078_AreaOfCircle
{
    class Program
    {
        static void Main(string[] args)
        {
            CircleArea();
        }

        private static void CircleArea()
        {
            for (int i = 1; i <= 10; i++)
            {
                Console.WriteLine("원의 반지름이 {0, 2}인 원의 면적 : {1, 6:F2}", i, i*i*Math.PI);
            }
        }
    }
}
