#include "SListNode.h"
#include <stdlib.h>
#include <malloc.h>
#include <assert.h>

//初始化 
void SListInit(SList* s) {
	assert (s!=NULL);
	s->first = NULL;
}
//头插
void SListPushFront(SList *s, SLTDataType v) {
	Node *node = (Node *)malloc(sizeof(Node)); //申请的内存
	node->value = v;
	node->next = s->first;
	s->first = node;
}
//尾插
void slistPushBack(SList *s,SLTDataType v) {
	Node* node = (Node *)malloc(sizeof(Node));
	node->value = v;
	node->next = NULL;
	//链表为空的情况
	if (s->first==NULL) {
		
		s->first = node;
	}
	//链表不为空的情况
	//找到最后一个结点,链表中一定有节点
	Node *cur = s->first;
	while (cur->next!=NULL)
	{
		cur = cur->next;
	}
	//cur 为最后一个结点
	cur->next = node;
}
//头删
void SListPopFront(SList *s) {
	assert(s != NULL);  //不能没有链表
	assert(s->first != NULL);  //不能没有结点
	//存储结点
	Node *next = s->first->next;
	//释放内存
	free(s->first);
	s->first = next;
}
//尾删
void SListPopBack(SList *s) {
	assert(s != NULL);  //不能没有链表
	assert(s->first != NULL);  //不能没有结点
	//链表只有一个结点
	if (s->first->next == NULL) {
		free(s->first);
		s->first = NULL;
	}
	Node *cur = s->first;
	while (cur->next->next != NULL) {
		cur = cur->next;
	}
	//cur为倒数第二个结点
	free(cur->next);
	cur->next = NULL;
}

//求倒数第k个结点
Node *LastNode(SList *plist,int k) {

	//创建两个指针
	Node *p = plist;
	Node *q = plist;
	//让p结点走k-1步
	while (k-1>0) {
		if (p->next != NULL) {
			p = p->next;
			k--;
		}
		else
		{
			printf("无此结点！");
			break;
		}
	}
	//两个同时走，从而确定q的结点
	while (p->next != NULL) {
		q = q->next;
		p = p->next;
	}
	return q;
}