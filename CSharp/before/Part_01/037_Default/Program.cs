using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * C#에서는 초기화되지 않은 변수를 사용할 수 없다.
 * 특정한 값을 할당 하거나 형식의 기본 값(default)을 사용하여 변수를 초기화 하여야함
 * 
 * 
 */

namespace _037_Default
{
    class Program
    {
        enum E
        {
            Red, Green, Blue
        };

        static void Main(string[] args)
        {
            int a = default;    //0
            string s = default; //null

            Console.WriteLine("a = " + a);
            Console.WriteLine("s = " + s);

            Console.WriteLine("E = " + default(E));
            Console.WriteLine("E = " + (E)0);

            MyList<int> iList = new MyList<int>();
            Console.WriteLine("iList : " + iList.GetLast());

            MyList<string> sList = new MyList<string>();
            Console.WriteLine("sList : " + sList.GetLast());
        }
    }

    public class MyList<T>
    {
        private Node head = default;

        public T GetLast()
        {
            T temp = default(T);

            Node current = head;
            while (current != null)
            {
                temp = current.data;
                current = current.next;
            }

            return temp;
        }

        private class Node
        {
            public T data;
            public Node next;
        }
    }
}
