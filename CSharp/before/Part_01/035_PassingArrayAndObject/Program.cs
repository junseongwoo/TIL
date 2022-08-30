using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * 배열과 객체를 매소드 매개변수로 전달
 * 배열은 참조형이며 배열의 이름은 배열이 저장된 곳의 참조이다.
 * 따라서 메소드를 호출 할 때 배열의 이름을 매개변수로 전달하면 배열의 참조가 전달 
 */

namespace _035_PassingArrayAndObject
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = { 10, 20, 30 };
            Console.WriteLine("Main() before: arr[0] = {0}", arr[0]);

            Change(arr);
            Console.WriteLine("Main() after: arr[0] = {0}", arr[0]);

            Student s1 = new Student();
            s1.name = "Alpha";
            Console.WriteLine("Main() before: " + s1.name);
            Change(s1);
            Console.WriteLine("Main() after: " + s1.name);
        }

        private static void Change(int[] arr)
        {
            arr[0] = -10;
        }

        private static void Change(Student s1)
        {
            s1.name = "Beta";
        }
    }

    class Student
    {
        public string name;
    }
}
