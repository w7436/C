#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"
#include <stdio.h>
#include <assert.h>

/*˳���
				ͨ������Ԫ������洢������������ӦԪ��֮���߼��ϵ����ڹ�ϵ
				����˳��洢�ṹ�洢�����Ա�ͨ�����Ϊ˳���
*/

//��ʼ�����ǽ�˳����ʼ��Ϊ�յ�˳���
void SeqListInit(SeqList *pSeqList) {

	//�������ݽ������Ǳ����ĵ�ַ
	//�����ĵ�ַ�϶����ǿ�
	assert(pSeqList != NULL);

	//����������size
	pSeqList->capacity = 10;
	 
	//���ٿռ�
	pSeqList->array = (int *)malloc(sizeof(int)*pSeqList->capacity);
	pSeqList->size = 0;//��Ч����
	
}


//����˳���
void SeqListDestroy(SeqList *pSeqlist) {

	assert(pSeqlist);					//ȷ��˳���Ϊ��
	assert(pSeqlist->array);		//ȷ��������Ϊ0
	free(pSeqlist->array);			//�ͷſռ�

	pSeqlist->array = NULL;
	pSeqlist->capacity = 0;			//����
	pSeqlist->size = 0;

}


//β��
void SeqListPushBack(SeqList* pSeqlist,int value) {
	//����������
	pSeqlist->array[pSeqlist->size] = value;
	pSeqlist->size++;
}



//ͷ��(�Ӻ���ǰ�ƣ���size����) 
//�ռ���±�[size,1]      ���ݵ��±�[size-1,0]
//�ƶ��Ĺ���array[�ռ�]=array[����]
void SeqListFrontBack(SeqList* pSeqlist, int value) {

	//i�ǿռ���±�
	for (int i = pSeqlist->size; i >= 1;i--) {
		pSeqlist->array[i] = pSeqlist->array[i - 1];
	}
	pSeqlist->array[0] = value;
	pSeqlist->size++;

}


















//��̬˳���:

void InitList(SeqList1 *L) {
	L->last = -1;
}

void PutSeqlist(SeqList1 *L, int n) {
	int i = 0;
	for (i = 0; i < n;i++) {
		scanf("%d ", &(L->array[i]));
	}
	L->last = L->last + n;
}

int LengthList(SeqList1 *L) {
	return L->last + 1;
}

//�жϲ����λ��
int PositionList(SeqList1 *L, int X) {
	int j = 0;
	for (j = 0; j <= L->last;j++) {
		if (X<L->array[j]) {
			return j + 1;
		}
	}
	return L->last + 2;
}

int InsertList(SeqList1 *L, int i, int e) {
	int k;
	//i��������λ��
	if ((i<1) || (i<L->last+2)) {
		printf("����λ�ò��Ϸ�");
		return 0;
	}
	if (L->last>=100-1) {
		printf("˳�������");
		return 0;
	}
	for (k = L->last; k >= i - 1;k--) {
		L->array[k + 1] = L->array[k];
	}
	L->array[i - 1] = e;
	L->last++;
	return 1;
}
int OutputSeqlist(SeqList1 *L) {
	int i;
	printf("������Ϊ��");
	for (i = 0; i <= L->last; i++) {
		printf("%d", L->array[i]);
	}
	return L->last;
}