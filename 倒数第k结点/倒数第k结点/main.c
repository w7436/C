#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//һ�����
typedef struct ListNode {
	unsigned int value;
	struct ListNode*next;
}ListNode;

ListNode* FindKthToTail(ListNode* pListHead, int k) {
	//��ʼ��ʱ��p1��p2��ָ����㣬p1����k-1����p1,p2ͬʱ�ߣ�ֱ��p1�ߵ����p2��λ�þ���ҪѰ�ҵĽ��
	ListNode *p1 = pListHead;
	ListNode *p2 = pListHead;

	//����Ϊ��
	if (pListHead == NULL || k == 0) {  
		return NULL;
	}

	//p1��k-1��
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
	//p1,p2ͬʱ�ߣ�ֱ��p1�������Ľ�㣬��ʱp2Ϊ�����Ľ��
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