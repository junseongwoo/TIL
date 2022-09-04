/*
-- ���������� ���������� ����

(1) ++pos  ->  pos.operator++();
(2) pos++  ->  pos.operator++(int);

(1) --pos  ->  pos.operator--();
(2) pos--  ->  pos.operator--(int);
*/

/*
-- ��ȯ�������� const ����� const ��ü

const Point operator++(int) 
{
	const Point retobj(xpos, ypos);
	xpos += 1;
	ypos += 1;
	return retobj;
}

���������� �������� �����ڸ� �����ε� �� �Լ����ε� 
��ȯ���� const�� ����Ǿ��ִ�. 
������? 
"operator-- �Լ��� ��ȯ���� ���� �����Ǵ� �ӽð�ü�� const ��ü�� �����ϰڴ�!" 
retobj ��ü�� const ���������� retobj ��ü�� ��ȯ�� �ƹ��� ������ ��ġ�� ���� 

*/

#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{}

	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}

	Point& operator++() // ��������
	{
		xpos += 1;
		ypos += 1;
		return *this;
	}

	const Point operator++(int) // ���� ����
	{
		const Point retobj(xpos, ypos);
		xpos += 1;
		ypos += 1;
		return retobj;
	}

	friend Point& operator--(Point &ref);
	friend const Point operator--(Point &ref, int);
};

Point& operator--(Point &ref) // ��������
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}

const Point operator--(Point &ref, int) // �������� 
{
	const Point retobj(ref);
	ref.xpos -= 1;
	ref.ypos -= 1;
	return retobj;
}

int main()
{
	Point pos(3, 5);
	Point cpy;
	cpy = pos--;
	cpy.ShowPosition();
	cpy.ShowPosition();
}

