#include <stdio.h>

int main()
{
	int a = 10, b = 20, res;

	// ������Ʈ�� �ִ� ���� �ٷ� ����ϴ� ����
	// ����ϸ� ������Ʈ�� �ִ� ���� �����
	a + b;
	printf("%d + %d = %d\n", a, b, a + b); 

	// �׷��� res�� ��� ���� �����ؼ� ����ϴ°� ����.
	res = a + b;
	printf("%d + %d = %d\n", a, b, res);

	
	return 0;
}