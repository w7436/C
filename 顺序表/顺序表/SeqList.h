#pragma once


//��̬˳���˳���Ĵ�С�ǹ̶��ģ������ڼ�����ģ���
typedef struct SeqList1
{
	int array[100];//������С
	int last;//˳�����Ч���ݵĸ�����ͬʱҲ��ʾ�Ӻ�����һ������λ�õ��±�

}SeqList1;


//��̬˳����������ڼ���Զ�̬���������Ĵ�С��
typedef struct SeqList
{

	int *array; //ָ����ϵĿռ䣬�������
	int capacity;//����
	int size;//��Ч����

}SeqList;

//��̬˳���
void SeqListInit(SeqList *pSeqList);
void SeqListDestroy(SeqList *pSeqlist);
void SeqListPushBack(SeqList* pSeqlist, int value);
void SeqListFrontBack(SeqList* pSeqlist, int value);


//��̬˳���
void InitList(SeqList1 *L);
void PutSeqlist(SeqList1 *L,int n);
int  LengthList(SeqList1 *L);
int PositionList(SeqList1 *L, int X);
int InsertList(SeqList1 *L, int i, int e);
int OutputSeqlist(SeqList1 *L);

