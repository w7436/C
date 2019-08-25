#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <assert.h>

//һ�����
typedef struct ListNode{
	int data;//������� ��ʱ��int
	struct ListNode *next;//�¸�����ָ��
}Node;


//����ָ�� 
Node* FindMiddle(Node* plist) {
	Node* pSlow = plist;
	Node* pFast = plist;

	//����Ϊ��ֱ�ӷ���
	if (pFast==NULL) {
		return NULL;
	}
	//���ڵ���������������
	while (pFast->next!=NULL && pFast->next->next != NULL) {
		pFast = pFast->next->next;
		pSlow = pSlow->next;
	}

	return pSlow;
}


//��������
Node *SlistNode(int *arr,int size) {
	static int index = 0;
	//�ж�����
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
