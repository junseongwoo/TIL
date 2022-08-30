using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


/*
 * 캐스팅과 자료형 변환
 * 형변환 : 하나의 자료형을 다른 자료형으로 바꾸는 것 
 * (1) 암시적 형변환 
 * - float을 double로 형변환하는 경우 처럼 작은 자료형을 더 큰 자료형으로 변환 할 때 
 * 데이터의 손실은 생기지 않는다. (자동으로 형변환) 
 * 
 * (2) 명시적 형변환
 * - double을 int로 형변환하는 경우 처럼 큰 자료형을 작은 자료형으로 변환 할 때 
 * 데이터가 손실될 수 있다. (강제로 형변환)
 * - 명시적 형변환을 위해서는 변환하고자 하는 자료형으로 기존 자료형을 cast 해준다.
 * ex) double x -> int a = (int)x; : int를 x로 바꾼 후에 int a에 할당 
 */

namespace _013_TypeConversion
{
    class Program
    {
        static void Main(string[] args)
        {
            int num = 2147483647;
            long bigNum = num; // 암시작 형변환 
            Console.WriteLine(bigNum);

            double x = 1234.5;
            int a;

            a = (int)x;        // 명시적 형변환
            Console.WriteLine(a);
        }
    }
}
