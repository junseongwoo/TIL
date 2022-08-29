using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * BMI = 몸무게(kg)를 키(m)의 제곱으로 나눈 값
 * 
 * BMI < 20, 저체중
 * 20 <= BMI < 25, 정상
 * 25 <= BMI < 30, 경도비만
 * 30 <= BMI < 40, 비만
 * BMI >= 40, 고도비만
 */

namespace _042_BMI
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("몸무게를 입력 하세요 : ");
            double weight = double.Parse(Console.ReadLine());
            Console.Write("키를 입력하세요(cm) : ");
            int height = int.Parse(Console.ReadLine());
            height = height / 100;

            double bmi = weight / (height * height);

            if (bmi < 20)
            {
                Console.WriteLine("저체중");
            }
            else if (bmi < 25)
            {
                Console.WriteLine("정상체중");
            }
            else if (bmi < 30)
            {
                Console.WriteLine("경도비만");
            }
            else if (bmi < 30)
            {
                Console.WriteLine("비만");
            }
            else
                Console.WriteLine("고도비만");
            
        }
    }
}
