#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

/*
--��ü ���� ����
1. �޸� ������ �Ҵ�
2. �̴ϼȶ������� �̿��� ��ü �ʱ�ȭ
3. �������� ��ü�κ� ����
*/
int main(void)
{
	Rectangle rec(1, 1, 5, 5);
	rec.ShowRecInfo();
	return 0;
}