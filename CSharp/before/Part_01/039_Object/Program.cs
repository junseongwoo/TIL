using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * C#에서 모든 형식은 기본 형식이나 사용자가 정의한 형식
 * 값, 참조 형식 상관 없이 모드 Object부터 상속된다.
 * 
 * 따라서, Object 타입은 모든 데이터의 조상이며 object 타입 변수에는 어떠한 값도 할당 불가능
 * 
 * 박싱(Boxing) : 값 형식의 변수가 object 타입으로 변환 되는 것
 * 언방식(UnBoxing) : object 타입 변수가 값 형식으로 변환 되는 것 
 * 
 * object 타입은 참조 형식이므로 힙에 데이터를 할당 
 * 반면 int나 dobule같은 값 형식의 자료는 스택에 데이터 할당
 * 
 * 값 형식의 변수를 박싱할 경우 object로 포장해서 힙에 저장 
 */

namespace _039_Object
{
    class Program
    {
        static void Main(string[] args)
        {
            int i = 123;
            object o = i;
            i = i + 10;
            int j = (int)o; // 캐스팅해서 언박싱

            // i 값이 변해도 o에 저장된 값은 영향을 받지 않음
            // 이유 : 다른 메모리 영역을 사용하기 때문
            Console.WriteLine("The value-type value i = {0}", i);
            Console.WriteLine("The object-type value o = {0}", o);
            Console.WriteLine("The value-type value j = {0}", j);

            object p = o;
            o = 100; // 박싱
            Console.WriteLine("The object-type value o = {0}", o);
            Console.WriteLine("The object-type value p = {0}", p);


        }
    }
}
