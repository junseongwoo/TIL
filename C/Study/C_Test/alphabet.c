#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 연결리스트 자료형 
typedef struct listNode {
	char data;
	struct listNode* link;
}ListNode;

typedef struct {
	ListNode* head;
}HeadNode;

// 연결 리스트 생성 
HeadNode* createLinkedList() {
	HeadNode* h;
	h = (HeadNode*)malloc(sizeof(HeadNode));
	if (h != NULL) h->head = NULL;
	return h;
}

ListNode* createNode(char c) {
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	if (newNode == NULL) {
		printf("메모리 할당 실패\n");
		return NULL;
	}
	newNode->data = c;
	newNode->link = NULL;

	return newNode;
}

void insertLastNode(HeadNode* h, ListNode* newNode) {
	ListNode* tmp = h->head;
	if (h->head == NULL) {
		h->head = newNode;
		return;
	}
	while (tmp->link != NULL) {
		tmp = tmp->link;
	}
	tmp->link = newNode;
}

void printList(HeadNode* h) {
	if (h->head == NULL) {
		printf("List : ()\n");
		return;
	}
	ListNode* tmp = h->head;
	printf("List : (");
	while (tmp != NULL) {
		printf("%c", tmp->data);
		if (tmp->link != NULL) printf(" -> ");
		tmp = tmp->link;
	}
	printf(")\n");
}

void freeList(HeadNode* h) {
	ListNode* tmp;
	while (h->head != NULL) {
		tmp = h->head;
		h->head = tmp->link;
		free(tmp);
		tmp = NULL;
	}
}


void makeList(HeadNode* h, HeadNode* h_upper, HeadNode* h_lower) {
	ListNode* tmp = h->head;
	ListNode* node;
	h_upper->head = h->head;
	while (tmp->link != NULL) {
		if (tmp->data >= 'A' && tmp->data <= 'Z' &&
			tmp->link->data >= 'a' && tmp->link->data <= 'z') 
		{ 
			h_lower->head = tmp->link;
			tmp->link = NULL;
			return;
		}
		tmp = tmp->link;
	}
}

HeadNode* aryToList(char* ary) {
	HeadNode* h = createLinkedList();
	for (int i = 0; ary[i] != 0; i++) {
		insertLastNode(h, createNode(ary[i]));
	}
	return h;
}

void insertionSort(HeadNode* h) {
	ListNode* node, * tmp;
	node = h->head;
	while (node->link != NULL) {
		if (node->data > node->link->data)
		{
			tmp = node->link;         
			node->link = node->link->link;  
			tmp->link = h->head; 
			h->head = node = tmp; 
			continue;
		}
		node = node->link;
	}
}

int main() {
	char input_ary[10];
	HeadNode* list;
	HeadNode* list_upper = createLinkedList(); 
	HeadNode* list_lower = createLinkedList(); 

	printf("문자열 : ");
	gets_s(input_ary, 10);
	printf("==================\n");

	list = aryToList(input_ary);
	printf("비정렬 ");
	printList(list);

	insertionSort(list);
	printList(list);

	makeList(list, list_upper, list_lower);

	// 출력 
	printf("대문자 ");
	printList(list_upper);
	printf("소문자 ");
	printList(list_lower);

	freeList(list_upper);
	freeList(list_lower);

	return 0;
}