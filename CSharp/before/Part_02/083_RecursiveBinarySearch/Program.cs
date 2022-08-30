using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 재귀 이진탐색
 * 1 ~ 1000까지의 랜덤 정수 30개를 배열에 저장하고 이진탐색을 하는 프로그램 작성 
 */

namespace _083_RecursiveBinarySearch
{
    class Program
    {
        static void Main(string[] args)
        {
            Random r = new Random();
            int[] v = new int[30];

            for (int i = 0; i < 30; i++)
            {
                v[i] = r.Next(3000);
            }
            PrintArray("정렬 전", v);

            Array.Sort(v);
            PrintArray("정렬 후 ", v);

            Console.Write("=> 검색할 숫자를 입력하세요 : ");
            int key = int.Parse(Console.ReadLine());

            int index = RecbinarySearch(v, 0, v.Length - 1, key);
            if (index == -1)
            {
                Console.WriteLine("찾는 값이 배열에 없습니다.");
            }
            else
            {
                Console.WriteLine("v[{0}] = {1}", index, key);
            }
        }

        private static int RecbinarySearch(int[] v1, int v2, int v3, int key)
        {
            if(low <= high)
            {
                int mid = (low + high) / 2;
                if (true)
                {

                }
            }
        }

        private static void PrintArray(string v1, int[] v2)
        {
            throw new NotImplementedException();
        }
    }
}
