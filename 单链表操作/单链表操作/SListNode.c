#include "SListNode.h"
#include <stdlib.h>
#include <malloc.h>
#include <assert.h>

//��ʼ�� 
void SListInit(SList* s) {
	assert (s!=NULL);
	s->first = NULL;
}
//ͷ��
void SListPushFront(SList *s, SLTDataType v) {
	Node *node = (Node *)malloc(sizeof(Node)); //������ڴ�
	node->value = v;
	node->next = s->first;
	s->first = node;
}
//β��
void slistPushBack(SList *s,SLTDataType v) {
	Node* node = (Node *)malloc(sizeof(Node));
	node->value = v;
	node->next = NULL;
	//����Ϊ�յ����
	if (s->first==NULL) {
		
		s->first = node;
	}
	//����Ϊ�յ����
	//�ҵ����һ�����,������һ���нڵ�
	Node *cur = s->first;
	while (cur->next!=NULL)
	{
		cur = cur->next;
	}
	//cur Ϊ���һ�����
	cur->next = node;
}
//ͷɾ
void SListPopFront(SList *s) {
	assert(s != NULL);  //����û������
	assert(s->first != NULL);  //����û�н��
	//�洢���
	Node *next = s->first->next;
	//�ͷ��ڴ�
	free(s->first);
	s->first = next;
}
//βɾ
void SListPopBack(SList *s) {
	assert(s != NULL);  //����û������
	assert(s->first != NULL);  //����û�н��
	//����ֻ��һ�����
	if (s->first->next == NULL) {
		free(s->first);
		s->first = NULL;
	}
	Node *cur = s->first;
	while (cur->next->next != NULL) {
		cur = cur->next;
	}
	//curΪ�����ڶ������
	free(cur->next);
	cur->next = NULL;
}

//������k�����
Node *LastNode(SList *plist,int k) {

	//��������ָ��
	Node *p = plist;
	Node *q = plist;
	//��p�����k-1��
	while (k-1>0) {
		if (p->next != NULL) {
			p = p->next;
			k--;
		}
		else
		{
			printf("�޴˽�㣡");
			break;
		}
	}
	//����ͬʱ�ߣ��Ӷ�ȷ��q�Ľ��
	while (p->next != NULL) {
		q = q->next;
		p = p->next;
	}
	return q;
}