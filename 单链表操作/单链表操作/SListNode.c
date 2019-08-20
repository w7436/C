#include "SListNode.h"
#include <stdlib.h>
#include <malloc.h>
#include <assert.h>

//����ĳ�ʼ��
void SListInit(SList *s) {
	assert(s != NULL);   //�����������Ϊ�٣�����ֹ����
	s->pHead = NULL;
}
//β��
void  SListPushBack(SList* s, int data) {
	assert(s != NULL);
	Node *node = (Node*)malloc(sizeof(Node));  //��̬�ڴ����
	node->next = NULL;
	node->value = data;

	if (s->pHead==NULL) {   //������
		s->pHead = node;
		return; 
	}
	Node *cur = s->pHead;
	while (cur->next != NULL) {
		cur = cur->next;
	}
	//�����curΪ���һ��Ԫ��
	cur->next = node;
}
//ɾ�����������һ�����
void SListPopBack(SList* s) {
	assert(s != NULL);   //�����������Ϊ�٣�����ֹ����
	assert(s->pHead!= NULL);
	Node *node = (Node*)malloc(sizeof(Node));  //��̬�ڴ����
}
