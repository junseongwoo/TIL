// ���ѵ� ��������� ���ٸ� ����� �ؼ� �߸�� ���� ������� �ʵ��� ���;� �ϰ� 
// �� �Ǽ��� ���� ��, �Ǽ��� ���� �߰ߵǵ��� �ؾ� �Ѵ�.
#pragma once
#ifndef __POINT_H_
#define __POINT_H_

class Point
{
private:
	int x;
	int y;

public:
	// 
	Point(const int &xpos, const int &ypos);
	//bool InitMembers(int xpos, int ypos);
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};

#endif