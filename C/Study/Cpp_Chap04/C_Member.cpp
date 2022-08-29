#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// getDate() 호출하면 회원 이름 주소 전화번호 출력 

class CMember
{
private :
	char name[10];
	char addr[50];
	char number[14];
	static int cnt;
public : 
	CMember(const char *aname, const char *aaddr, const char *anumber)
	{
		strcpy(this->name, aname);
		strcpy(this->addr, aaddr);
		strcpy(this->number, anumber);
		cnt++;
	}
	~CMember()
	{
		cnt--;
	}
	void getData() {
		printf("-------------------------\n");
		printf("회원 이름 : %s\n", name);
		printf("회원 주소 : %s\n", addr);
		printf("회원 전화 번호 : %s\n", number);
		printf("-------------------------\n");
	}

	static void OutCount() {
		printf("객체 개수 = %d\n", cnt);
	}

	void setData() {

	}
};

int CMember::cnt = 0;

int main()
{
	CMember m1("우준성", "부산남구", "010-3092-1890");
	m1.getData();

	CMember m2("우준성2", "해운대구", "999-999-9999");
	m2.getData();

	CMember::OutCount();

	return 0;
}