#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct LinkNode
{
	int data;//������� ��ʱ��int
	struct LinkNode *next;//�¸�����ָ��
} LinkNode, *LinkList;

//����ָ��
SListNode* FindMiddle(SList* plist) {
	SListNode* pSlow = plist->_head;
	SListNode* pFast = plist->_head;
	while (pFast) {
		if (pFast->_next != NULL) {
			pFast = pFast->_next->_next;
		}
		else {
			break;
		}
		pSlow = pSlow->_next;
	}
	return pSlow;
}
