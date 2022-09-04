/*
-- ����, ���� ������ �����ε� 
1 ���� ������ : ++
1 ���� ������ : -- 

ex) ++pos : ȣ��Ǵ� �Լ��� �̸��� ++�����ڿ� Ű���� operator�� �����ؼ� �ϼ��ǹǷ� 
            operator++ �̴�.

pos.operator++() == operator++(pos)
-> ������ ���ڰ� ���� ���� ���� �����ڸ� �����ε� �߱� ����
-> �ϳ� �ִ� �ǿ������� ����Լ��� ȣ���ϴ� �����̱� ���� 

��� 
++pos - ����Լ��� �����ε� �� ��� : pos.operator++();
      - �����Լ��� �����ε� �� ��� : operator++(pos);
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

	// ����Լ� ���·� �����ε�
	Point& operator++()
	{
		xpos += 1;
		ypos += 1;

		/*
		�ڱ��ڽ��� ��ȯ = ���⼭�� ��ü�� ��ȯ
		���⼭�� ���������� ��ȯ�ȴ�. ���� ȣ������ ��ü �ڽ��� ���� �� �� �ִ� 
		'���� ��'�� ��ȯ
		*/
		return *this; 
	}
	// �����Լ��� ���� friend ����
	friend Point& operator--(Point &ref);
};

// �����Լ� ���·� �����ε�
Point& operator--(Point &ref)
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}

int main()
{
	Point pos(1, 2); 
	++pos; // pos.operator++(); -> ����Լ� ���·� �����ε� �Ǿ��� ����

	pos.ShowPosition();
	--pos; // operator--(pos); -> �����Լ� ���·� �����ε� �Ǿ��� ����

	pos.ShowPosition();

	++(++pos);
	pos.ShowPosition();
	--(--pos);
	pos.ShowPosition();

}