using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 무한루프와 break 문
 * 
 * 첫 날에 천원을 저금하고 매일 그 두 배를 저금 한다 했을 때 
 * 며칠만에 100만원을 저금 할 수 있는가? 
 */

namespace _051_InfiniteLoop
{
    class Program
    {
        static void Main(string[] args)
        {
            int money = 1000;
            int sum_money = 0;
            int days = 1;

            while (true)
            {
                sum_money += money;

                Console.WriteLine("{0, 2}일차 : {1, 8:C}, sum = {2, 11:C}", days, money, sum_money);

                if(sum_money >= 1000000)
                {
                    break;
                }
                days++;
                money *= 2;
            }
        }
    }
}
