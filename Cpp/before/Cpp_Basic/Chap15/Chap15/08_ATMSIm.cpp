/*
-- ���� Ŭ������ ���� ��ü
���ܰ�ü : ���ܹ߻��� �˸��µ� ���Ǵ� ��ü 
����Ŭ���� : ���ܰ�ü�� ������ ���� ���ǵ� Ŭ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class DepositException
{
private:
	int reqDep;

public:
	DepositException(int money) : reqDep(money)
	{}
	void ShowExceptionReason()
	{
		cout << "[���� �޽���: " << reqDep << "�� �ԱݺҰ� ]" << endl;
	}
};

class WithdrawExcetion
{
private:
	int balance; 

public:
	WithdrawExcetion(int money) : balance(money)
	{}
	void ShowExceptionReason()
	{
		cout << "[���� �޽���: �ܾ�" << balance << " : �ܾ׺��� ]" << endl;
	}
};

class Account
{
private:
	char accNum[50];
	int balance;

public:
	Account(const char * acc, int money) : balance(money)
	{
		strcpy(accNum, acc);
	}

	void Deposit(int money) throw (DepositException)
	{
		if (money < 0)
		{
			DepositException expn(money);
			throw expn;
		}
		balance += money;
	}

	void Withdraw(int money) throw (WithdrawExcetion)
	{
		if (money > balance)
		{
			throw WithdrawExcetion(balance);
		}
		balance -= money;
	}

	void ShowMyMoney()
	{
		cout << "�ܰ� : " << balance << endl << endl;
	}
};

int main()
{
	Account myAcc("12345-78945", 5000);

	try
	{
		myAcc.Deposit(2000);
		myAcc.Deposit(-300);
	}
	catch (DepositException &expn)
	{
		expn.ShowExceptionReason();
	}
	myAcc.ShowMyMoney();

	try
	{
		myAcc.Withdraw(3500);
		myAcc.Withdraw(4500);
	}
	catch (WithdrawExcetion &expn)
	{
		expn.ShowExceptionReason();
	}
	myAcc.ShowMyMoney();
}