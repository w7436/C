#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"
//初始化   头结点
void InitList(Plist plist)
{
	if(plist == NULL)
	{
		return;
	}
	plist->next = NULL;
}

//得到一个节点  malloc 用来动态开辟内存的
Node * GetNode(int val)
{
	Node *pGet = (Node *)malloc(sizeof(Node));
	pGet->data = val;
	pGet->next = NULL;
	return pGet;
}

//头插法   
void InsertHead(Plist plist, int val)
{
	Node *pGet = GetNode(val);
	pGet->next = plist->next;
	plist->next = pGet;
}
void InsertTail(Plist plist,int val)
{
	Node *pCur = plist;
	Node *pGet = GetNode(val);
	while(pCur->next != NULL)
	{
		pCur = pCur->next;
	}
	pCur->next = pGet;
}

int GetLength(Plist plist)
{
	int count = 0;
	Node *pCur = plist->next;
	while(pCur  != NULL)
	{
		count++;
		pCur = pCur->next;
	}
	return count;
}

void Show(Plist plist)
{
	Node *pCur = plist->next;

	while(pCur != NULL)
	{
		printf("%d ",pCur->data);
		pCur = pCur->next;
	}
	printf("\n");
}




