#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//一个结点
typedef struct ListNode {
	unsigned int value;
	struct ListNode*next;
}ListNode;

ListNode* FindKthToTail(ListNode* pListHead, int k) {
	//开始的时候，p1和p2都指向起点，p1先走k-1步，p1,p2同时走，直到p1走到最后，p2的位置就是要寻找的结点
	ListNode *p1 = pListHead;
	ListNode *p2 = pListHead;

	//链表为空
	if (pListHead == NULL || k == 0) {  
		return NULL;
	}

	//p1走k-1步
	while (k-1>0){
		if (p1->next!=NULL) {
			p1=p1->next;
			k--;
		}
		else{
			printf("error\n");
			return NULL;
		}
	}
	//p1,p2同时走，直到p1到达最后的结点，此时p2为倒数的结点
	while (p1->next!=NULL){
		p1 = p1->next;
		p2 = p2->next;
	}
	return p2;

}

ListNode* CreateList(int* arr,int size) {
	static int index = 0;
	if (index >= size)
		return NULL;
	ListNode* newNode = malloc(sizeof(ListNode));
	newNode->value = arr[index++];
	newNode->next = CreateList(arr,size);
	return newNode;
}

int main() {

	int arr[10] = { 3, 4, 5, 6, 7, 3, 44, 55, 34, 500 };
	int size = sizeof(arr) / sizeof(arr[0]);
	ListNode* head = CreateList(arr, size);


	ListNode* kNode = FindKthToTail(head, 3);
	printf("%d\n",kNode->value);
	system("pause");
	return 0;
}