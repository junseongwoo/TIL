// ��� �ʱ�ȭ ����Ʈ
// �Լ� ���ǹ��� ��ü ���̿� :�� ��� �޸��� �����Ͽ� ����

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

class Some
{
public :
	const int total;
	// ��� : �ʱ갪 ����, total(atotal)�� total = atotal�� ����
	Some(int atotal) : total(atotal) {} 
	// ��, Some(int atotal) { total = atotal } �� ���� 
	void OutTotal() { printf("%d\n", total); }
};

int main()
{
	Some S(5);
	S.OutTotal();
}