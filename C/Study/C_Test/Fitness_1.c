#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	회원관리 프로그램
	신규회원 등록 : 회원 번호, 이름, 체중 
	  - 등록시 회원 번호 음수 입력하면 종료 
	  - 종료되면서 총 회원 수, 평균 체중, 최고 체중을 갖는 정보 출력
*/

typedef struct {
	int num;
	char name[20];
	double weight;
}Fitness;
Fitness* ary[100];									// 포인터 배열 선언
void total_number(int count);						// 전체 등록 회원 수 반환
double average_weight(Fitness** pary, int count);	// 평균 체중 반환
int max_weight(Fitness** pary, int count);			// 최대 체중 회원의 index 반환
void print_info(Fitness** pary, int index);			// 회원 정보 출력
void free_ary(Fitness** pary, int count);			// 동적 할당 영역 해제 


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

