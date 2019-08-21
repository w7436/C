#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct LinkNode
{
	int data;//结点数据 此时用int
	struct LinkNode *next;//下个结点的指针
} LinkNode, *LinkList;

//快慢指针
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
