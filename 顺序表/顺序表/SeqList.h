#pragma once


//静态顺序表（顺序表的大小是固定的（编译期间决定的））
typedef struct SeqList1
{
	int array[100];//容量大小
	int last;//顺序表有效数据的个数，同时也表示从后数下一个可用位置的下标

}SeqList1;


//动态顺序表（在运行期间可以动态控制容量的大小）
typedef struct SeqList
{

	int *array; //指向堆上的空间，存放数据
	int capacity;//容量
	int size;//有效个数

}SeqList;

//动态顺序表
void SeqListInit(SeqList *pSeqList);
void SeqListDestroy(SeqList *pSeqlist);
void SeqListPushBack(SeqList* pSeqlist, int value);
void SeqListFrontBack(SeqList* pSeqlist, int value);


//静态顺序表
void InitList(SeqList1 *L);
void PutSeqlist(SeqList1 *L,int n);
int  LengthList(SeqList1 *L);
int PositionList(SeqList1 *L, int X);
int InsertList(SeqList1 *L, int i, int e);
int OutputSeqlist(SeqList1 *L);

