#pragma once
 
//һ�����
typedef struct SListNode{
	int value;
	struct SListNode *next;  //ָ���Լ���ָ��
}Node;
//����
typedef struct SList{
	Node *pHead;
}SList;

//����ĳ�ʼ��
void SListInit(SList* s);
//β��
void  SListPushBack(SList* s, int data);
//ɾ�����������Ľ��
void SListPopBack(SList* s);
//ͷ��
//ɾ�������е�һ�����
//�������е�posλ�ú������
//ɾ�������еĽ��
//�������в���ֵΪdata�Ľڵ㣬�ҵ����ظýڵ�ĵ�ַ�����򷵻ؿ�
//��������
//��ȡ��������Ч���ĸ���
//��������Ƿ�Ϊ��
//��ȡ����ĵ�һ�����
//��ȡ����ĵڶ������
//ɾ��������ֵΪdata�Ľ��
//ɾ������������ֵΪdata�Ľ��
//��ӡ����