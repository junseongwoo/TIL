using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * C#에서 null이란 "어떤 객체도 참조하지 않는 참조형 변수"라는 뜻
 * null은 참조형 변수의 디폴트 값, 값 형식은 null일 수 없다.
 * 
 * 참조형 변수의 속성을 사용하려면 그 변수는 null이 아니여야한다.
 * null 참조형에서 속성에 접근할 경우 NullReferenceException이 발생 
 * 
 * 이를 피하기 위해 속성에 접근할 때마다 변수가 null인지 체크해야하는 불편함 발생
 * 그래서 null 조건연산자 ?가 도입 
 * null 조건 연산자 ? 를 사용하면 변수가 null일 때 속성을 찾지 않고 null 리턴 한다.
 */

namespace _036_NullConditionalOperator
{
    class Program
    {
        static void Main(string[] args)
        {
            string animal = null;

            Console.WriteLine("4글자 이상인 동물의 이름만 출력");
            do
            {
                LongNameAnimal(animal);
                Console.Write("동물 이름: ");
            } while ((animal = Console.ReadLine()) != "");
        }

        private static void LongNameAnimal(string animal)
        {
            if(animal?.Length >=4)
            {
                Console.WriteLine(animal + " : " + animal.Length);
            }
        }
    }
}
