#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	ȸ������ ���α׷�
	�ű�ȸ�� ��� : ȸ�� ��ȣ, �̸�, ü�� 
	  - ��Ͻ� ȸ�� ��ȣ ���� �Է��ϸ� ���� 
	  - ����Ǹ鼭 �� ȸ�� ��, ��� ü��, �ְ� ü���� ���� ���� ���
*/

typedef struct {
	int num;
	char name[20];
	double weight;
}Fitness;
Fitness* ary[100];									// ������ �迭 ����
void total_number(int count);						// ��ü ��� ȸ�� �� ��ȯ
double average_weight(Fitness** pary, int count);	// ��� ü�� ��ȯ
int max_weight(Fitness** pary, int count);			// �ִ� ü�� ȸ���� index ��ȯ
void print_info(Fitness** pary, int index);			// ȸ�� ���� ���
void free_ary(Fitness** pary, int count);			// ���� �Ҵ� ���� ���� 


int main() {
	Fitness* ary[100];




	return 0;
}

void total_number(int count) {

}

double average_weight(Fitness** pary, int count) { 

}

int max_weight(Fitness** pary, int count) {

}

void print_info(Fitness** pary, int index) {

}

void free_ary(Fitness** pary, int count) {

}

