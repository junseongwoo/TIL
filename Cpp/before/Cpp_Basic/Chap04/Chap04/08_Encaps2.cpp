#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class SinivelCap
{
public:
	void Take() const
	{
		cout << "�๰�� �ȳ��ϴ�." << endl;
	}
};

class SneezeCap
{
public:
	void Take() const
	{
		cout << "��ä�Ⱑ �ܽ��ϴ�." << endl;
	}
};

class SnuffleCap
{
public:
	void Take() const
	{
		cout << "�ڰ� �ո��ϴ�." << endl;
	}
};

// �� �κ��� ĸ��ȭ #include <iostream>
using namespace std;

class SinivelCap
{
public:
	void Take() const
	{
		cout << "�๰�� �ȳ��ϴ�." << endl;
	}
};

class SneezeCap
{
public:
	void Take() const
	{
		cout << "��ä�Ⱑ �ܽ��ϴ�." << endl;
	}
};

class SnuffleCap
{
public:
	void Take() const
	{
		cout << "�ڰ� �ո��ϴ�." << endl;
	}
};
class CAP
{
private :
	SinivelCap sin;
	SneezeCap sne;
	SnuffleCap snu;

public:
	void Take() const
	{
		sin.Take();
		sne.Take();
		snu.Take();
	}
};

class ColdPatient
{
public:
	void TakeCAP(const CAP &cap) const { cap.Take(); }
};

int main(void)
{
	CAP cap;
	ColdPatient sufferer;
	sufferer.TakeCAP(cap);

	return 0;
}