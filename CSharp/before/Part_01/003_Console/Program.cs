using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * int Console.Read() : 콘솔에서 한 글자를 읽는다
 * string Console.ReadLine() : 콘솔에서 한 줄을 읽는다.
 * void Console.Write(string) : 콘솔에서 문자열을 출력한다.
 * void Console.WriteLine(string) : 콘솔에 문자열을 출력하고 줄을 바꾼다.
 */

namespace Chap01
{
    class Program
    {
        static void main(string[] args)
        {
            console.write("hello ");
            console.writeline("world!");
            console.write("이름을 입력 : ");

            string name = console.readline();
            console.writeline(name + "님 안녕하세요");
        }
    }
}
