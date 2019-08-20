#include "SListNode.h"
#include <stdlib.h>
#include <malloc.h>
#include <assert.h>

//链表的初始化
void SListInit(SList *s) {
	assert(s != NULL);   //如果其后的条件为假，则终止程序
	s->pHead = NULL;
}
//尾插
void  SListPushBack(SList* s, int data) {
	assert(s != NULL);
	Node *node = (Node*)malloc(sizeof(Node));  //动态内存分配
	node->next = NULL;
	node->value = data;

	if (s->pHead==NULL) {   //空链表
		s->pHead = node;
		return; 
	}
	Node *cur = s->pHead;
	while (cur->next != NULL) {
		cur = cur->next;
	}
	//这里的cur为最后一个元素
	cur->next = node;
}
//删除链表中最后一个结点
void SListPopBack(SList* s) {
	assert(s != NULL);   //如果其后的条件为假，则终止程序
	assert(s->pHead!= NULL);
	Node *node = (Node*)malloc(sizeof(Node));  //动态内存分配
}
