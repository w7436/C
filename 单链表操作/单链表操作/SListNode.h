#pragma once
 
//一个结点
typedef struct SListNode{
	int value;
	struct SListNode *next;  //指向自己的指针
}Node;
//链表
typedef struct SList{
	Node *pHead;
}SList;

//链表的初始化
void SListInit(SList* s);
//尾插
void  SListPushBack(SList* s, int data);
//删除链表中最后的结点
void SListPopBack(SList* s);
//头插
//删除链表中第一个结点
//在链表中的pos位置后插入结点
//删除链表中的结点
//在链表中查找值为data的节点，找到返回该节点的地址，否则返回空
//销毁链表
//获取链表中有效结点的个数
//检测链表是否为空
//获取链表的第一个结点
//获取链表的第二个结点
//删除链表中值为data的结点
//删除链表中所有值为data的结点
//打印链表