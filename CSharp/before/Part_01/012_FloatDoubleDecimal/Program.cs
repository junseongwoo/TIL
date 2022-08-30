using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * float : 유효 숫자 7자리, 4바이트, 접미사f
 * 
 * double : 유효 숫자 15~16자리, 8바이트, 접미사 d
 * 
 * decimal : 유효 숫자 28~29자리, 16바이트, 접미사 m
 */

namespace _012_FloatDoubleDecimal
{
    class Program
    {
        static void Main(string[] args)
        {
            float flt = 1F / 3;
            double dbl = 1D / 3;
            decimal dcm = 1M / 3;

            Console.WriteLine("float : {0}\ndouble : {1}\ndecimal : {2}", flt, dbl, dcm);
            Console.WriteLine("float : {0} bytes\ndouble : {1} bytes \ndecimal : {2} bytes", sizeof(float), sizeof(double), sizeof(decimal));
            Console.WriteLine("float : {0} ~ {1}", float.MinValue, float.MaxValue);
            Console.WriteLine("double : {0} ~ {1}", double.MinValue, double.MaxValue);
            Console.WriteLine("decimal : {0} ~ {1}", decimal.MinValue, decimal.MaxValue);


        }
    }
}
