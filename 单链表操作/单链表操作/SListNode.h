#pragma once
 
typedef int SLTDataType;
//һ�����
typedef struct SListNode{
	SLTDataType value;          //�����ֵ
	struct SListNode *next;  //������һ�����ĵ�ַ
}Node;
//����

typedef struct SList {
	Node *first;  //��first=NULL,������
}SList;
void SListInit(Node* phead);

