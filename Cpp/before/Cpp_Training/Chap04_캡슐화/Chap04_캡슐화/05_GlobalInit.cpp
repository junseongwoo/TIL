/*
-- ���� ����� Ȱ��
- �� �� ���� �ؾ��ϴ� ���� �ڿ��� �ʱ�ȭ (DB����, ��Ʈ��ũ ����)
*/

#include <stdio.h>

class DBQuery
{
private:
	static int hCon;
	int nResult;

public:
	DBQuery() {};
	static void DBConnect(const char* Server, const char* ID,
		const char* Pass);
	static void DBDisConnect();
	bool RunQuery(const char* SQL);
};
int DBQuery::hCon;

void DBQuery::DBConnect(const char* Server, const char* ID, const char* Pass)
{
	// DB����
	hCon = 1234;
	puts("����Ǿ����ϴ�.");
}

void DBQuery::DBDisConnect()
{
	// ���� ����
	hCon = NULL;
	puts("������ ���������ϴ�.");
}

bool DBQuery::RunQuery(const char* SQL)
{
	// Query 
	puts(SQL);
	return true;
}

int main()
{
	DBQuery::DBConnect("Secret", "Adult", "doemfdmsrkfk");
	DBQuery Q1, Q2, Q3;

	// �ʿ��� DB ���� �Ѵ�.
	Q1.RunQuery("select * from tblBuja where ���� ģ�� ���");

	DBQuery::DBDisConnect();
}