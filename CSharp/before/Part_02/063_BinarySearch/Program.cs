using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 선형탐색과 이진탐색
 * 배열에 자료가 저장되어 있을 때 그 자료들 중 원하는 값을 찾는 문제를 탐색이라 함
 * 
 * 선형탐색 : 배열의 처음부터 끝까지 모든 요소를 찾고자하는 값과 비교하여 
 * 같으면 그 인덱스를 결과를 출력. 
 * 데이터의 개수가 n개 일 때, 비교횟수는 평균 N/2로 시작하는 시간복잡도가 O(N)인 알고리즘 
 * 
 * 이진탐색 : 배열의 요소들이 정렬되어 있을 때만 적용할 수 있는 알고리즘 
 * 배열의 중간 값과 키값을 비교하여 중간 값보다 키 값이 크다면 중간 아래쪽 자료는 찾지 않는다.
 * 한번 비교할 때마다 1/2씩 줄어들기 때문에 시간 복잡도가 O(InN) 
 */
namespace _063_BinarySearch
{
    class Program
    {
        static void Main(string[] args)
        {
            Random r = new Random();

            int[] v = new int[30];

            for (int i = 0; i < 30; i++)
            {
                v[i] = r.Next(1000);
            }
            PrintArray("정렬 전", v);

            // (1) 정렬
            Array.Sort(v);
            PrintArray("정렬 후", v);

            Console.Write("=> 검색할 숫자를 입력하세요 : ");
            int key = int.Parse(Console.ReadLine());
            int count = 0; // 비교 횟수

            // (2) 선형탐색
            for (int i = 0; i < v.Length; i++)
            {
                count++;
                if (v[i] == key)
                {
                    Console.WriteLine("v[{0}] = {1}", i, key);
                    Console.WriteLine("선형탐색의 비교횟수는 {0}회입니다.", count);
                    break;
                }
            }

            // (3) 이진탐색 
            count = 0;
            int low = 0;
            int high = v.Length - 1;
            while (low <= high)
            {
                count++;
                int mid = (low + high) / 2;

                if(key == v[mid])
                {
                    Console.WriteLine("v[{0}] = {1}", mid, key);
                    Console.WriteLine("이진탐색의 비교횟수는 {0}회입니다.", count);
                    break;
                }
                else if (key > v[mid])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }

        private static void PrintArray(string v1, int[] v2)
        {
            Console.WriteLine(v1);
            for (int i = 0; i < v2.Length; i++)
            {
                Console.Write("{0, 5}{1}", v2[i], (i % 10 == 9) ? "\n" : "");
            }
        }

    }
}
