#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	연결리스트 사용
	배열 이름은 input_ary 사용
	배열 크기는 10
	정렬 알고리즘은 삽입 정렬
*/


// 연결리스트 노드 구조 정의
typedef struct ListNode {
	char data;
	struct ListNode* link;
}listNode;

// 헤드 노드 정의
typedef struct {
	listNode* head;
}HeadNode;

// 공백 연결 리스트 생성
HeadNode* createLinkedList() {
	HeadNode* h;
	h = (HeadNode*)malloc(sizeof(HeadNode));
	if (h != NULL) {
		h->head = NULL;  // 공백 리스트라 NULL 설정  
	}
	return h;
}

// 메모리 해제 
void freeLinkedList(HeadNode* h) {
	listNode* p;
	while (h->head != NULL) {
		p = h->head;
		h->head = h->head->link;
		free(p);
		p = NULL;
	}
}

// 리스트 출력 함수
void printList(HeadNode* h) {
	listNode* p = h->head;
	while (p != NULL) {
		printf("%c", p->data);
		if (p->link != NULL) {
			printf(" - ");
		}
		p = p->link;
	}
	printf("\n");
}

// 알파벳을 입력받아 노드를 생성 
listNode* createNode(char x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	if (newNode == NULL) {
		printf("메모리 할당 실패\n");
		return NULL;
	}
	newNode->data = x;
	newNode->link = NULL;

	return newNode;
}

// 노드 삽입
void insertNode(HeadNode* h, listNode* newNode) {
	listNode* res = h->head;
	if (h->head == NULL) {
		h->head = newNode;
		return;
	}
	while (res->link != NULL) {
		res = res->link;
	}
	res->link = newNode;
}

// 입력받은 알페벳 배열을 연결리스트로 만들기 
HeadNode* alphabet_ary_Linked(char* ary) {
	HeadNode* h = createLinkedList();

	// 문자열 입력 받은 크기 까지 노드 만들기
	for (int i = 0; ary[i] != 0; i++) {
		insertNode(h, createNode(ary[i]));
	}
	return h;
}

void insertion_sort(HeadNode* h)
{
	listNode* p, * res;
	p = h->head;

	while (p->link != NULL) {
		if (p->data > p->link->data)
		{
			res = p->link; // 앞으로 옮겨야할 노드를 res에 저장
			p->link = p->link->link; // res에 저장한 것을 빼고 연결 
			res->link = h->head; // res의 link는 가장 첫 자리를 지정
			h->head = p = res; // 그리고 p와 h->head 모두 res로 초기화해서 모두 가장 첫자리로 지정
			continue; // 가장 첫 자리로 간 p가 밑의 p = p->link로 인해서 앞으로 가지 못하도록 막는 역할
		}
		p = p->link;
	}
}

int main()
{
	char input_ary[10];
	// printf("%d\n", sizeof(input_ary) / sizeof(char));
	HeadNode* list;

	printf("알파벳 입력(10자까지) : ");
	gets_s(input_ary, 10);

	printf("정렬전 연결 리스트 : ");
	list = alphabet_ary_Linked(input_ary);
	printList(list);
	printf("====================================================\n");
	printf("정렬후 연결 리스트 : ");
	insertion_sort(list);
	printList(list);

}