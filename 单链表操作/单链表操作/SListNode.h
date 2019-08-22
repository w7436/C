#pragma once
 
typedef int SLTDataType;
//一个结点
typedef struct SListNode{
	SLTDataType value;          //保存的值
	struct SListNode *next;  //保存下一个结点的地址
}Node;
//链表

typedef struct SList {
	Node *first;  //当first=NULL,空链表
}SList;
void SListInit(Node* phead);

