#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	���Ḯ��Ʈ ���
	�迭 �̸��� input_ary ���
	�迭 ũ��� 10
	���� �˰����� ���� ����
*/


// ���Ḯ��Ʈ ��� ���� ����
typedef struct ListNode {
	char data;
	struct ListNode* link;
}listNode;

// ��� ��� ����
typedef struct {
	listNode* head;
}HeadNode;

// ���� ���� ����Ʈ ����
HeadNode* createLinkedList() {
	HeadNode* h;
	h = (HeadNode*)malloc(sizeof(HeadNode));
	if (h != NULL) {
		h->head = NULL;  // ���� ����Ʈ�� NULL ����  
	}
	return h;
}

// �޸� ���� 
void freeLinkedList(HeadNode* h) {
	listNode* p;
	while (h->head != NULL) {
		p = h->head;
		h->head = h->head->link;
		free(p);
		p = NULL;
	}
}

// ����Ʈ ��� �Լ�
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

// ���ĺ��� �Է¹޾� ��带 ���� 
listNode* createNode(char x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	if (newNode == NULL) {
		printf("�޸� �Ҵ� ����\n");
		return NULL;
	}
	newNode->data = x;
	newNode->link = NULL;

	return newNode;
}

// ��� ����
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

// �Է¹��� ���亪 �迭�� ���Ḯ��Ʈ�� ����� 
HeadNode* alphabet_ary_Linked(char* ary) {
	HeadNode* h = createLinkedList();

	// ���ڿ� �Է� ���� ũ�� ���� ��� �����
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
			res = p->link; // ������ �Űܾ��� ��带 res�� ����
			p->link = p->link->link; // res�� ������ ���� ���� ���� 
			res->link = h->head; // res�� link�� ���� ù �ڸ��� ����
			h->head = p = res; // �׸��� p�� h->head ��� res�� �ʱ�ȭ�ؼ� ��� ���� ù�ڸ��� ����
			continue; // ���� ù �ڸ��� �� p�� ���� p = p->link�� ���ؼ� ������ ���� ���ϵ��� ���� ����
		}
		p = p->link;
	}
}

int main()
{
	char input_ary[10];
	// printf("%d\n", sizeof(input_ary) / sizeof(char));
	HeadNode* list;

	printf("���ĺ� �Է�(10�ڱ���) : ");
	gets_s(input_ary, 10);

	printf("������ ���� ����Ʈ : ");
	list = alphabet_ary_Linked(input_ary);
	printList(list);
	printf("====================================================\n");
	printf("������ ���� ����Ʈ : ");
	insertion_sort(list);
	printList(list);

}