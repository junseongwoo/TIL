using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * C#의 모든 배열은 System.Array 클래스를 상속받아 구현
 * 속성은 괄호가 없고 메소드는 괄호가 있다.
 */
namespace _058_ArrayClass
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] a = { 5, 25, 75, 35, 15 };
            PrintArray(a);

            int[] b;
            b = (int[])a.Clone(); // 배열 복사 방법 1
            PrintArray(b);

            
            int[] c = new int[10];    
            // a 배열의 0번 인덱스부터 3개의 요소를 c배열의 1번 인덱스 위치에 복사 
            Array.Copy(a, 0, c, 1, 3);
            PrintArray(c);

            // a 배열의 내용을 c 배열의 3번 인덱스에 복사하고 출력 
            a.CopyTo(c, 3);
            PrintArray(c);

            Array.Sort(a);        // 오름차순 정렬
            PrintArray(a);

            Array.Reverse(a);     // 내림차순 정렬
            PrintArray(a);

            Array.Clear(a, 0, a.Length);  // 배열 초기화
            PrintArray(a);
        }

        private static void PrintArray(int[] a)
        {
            foreach (var item in a)
            {
                Console.Write("{0, 5}", item);
            }
            Console.WriteLine();
        }
    }
}
