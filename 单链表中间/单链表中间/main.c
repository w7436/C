#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <assert.h>

//一个结点
typedef struct ListNode{
	int data;//结点数据 此时用int
	struct ListNode *next;//下个结点的指针
}Node;


//快慢指针 
Node* FindMiddle(Node* plist) {
	Node* pSlow = plist;
	Node* pFast = plist;

	//链表为空直接返回
	if (pFast==NULL) {
		return NULL;
	}
	//大于等于两个结点的链表
	while (pFast->next!=NULL && pFast->next->next != NULL) {
		pFast = pFast->next->next;
		pSlow = pSlow->next;
	}

	return pSlow;
}


//创建链表
Node *SlistNode(int *arr,int size) {
	static int index = 0;
	//判断条件
	if (index>=size) {
		return NULL;
	}
	Node *node = malloc(sizeof(Node));
	node->data = arr[index++];
	node->next = SlistNode(arr, size);
	return node;
}

int main() {
	int arr[] = { 1,2,3,4};
	int size = sizeof(arr) / sizeof(arr[0]);
	Node *Slist = SlistNode(arr, size);
	Node *node = FindMiddle(Slist);
	printf("%d\n", node->data);
	system("pause");
	return 0;
}
