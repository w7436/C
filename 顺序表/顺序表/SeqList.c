#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"
#include <stdio.h>
#include <assert.h>

/*顺序表：
				通过数据元素物理存储的连续性来反应元素之间逻辑上的相邻关系
				采用顺序存储结构存储的线性表通常简称为顺序表
*/

//初始化就是将顺序表初始化为空的顺序表
void SeqListInit(SeqList *pSeqList) {

	//期望传递进来的是变量的地址
	//变量的地址肯定不是空
	assert(pSeqList != NULL);

	//设置容量和size
	pSeqList->capacity = 10;
	 
	//开辟空间
	pSeqList->array = (int *)malloc(sizeof(int)*pSeqList->capacity);
	pSeqList->size = 0;//有效个数
	
}


//销毁顺序表
void SeqListDestroy(SeqList *pSeqlist) {

	assert(pSeqlist);					//确保顺序表不为空
	assert(pSeqlist->array);		//确保容量不为0
	free(pSeqlist->array);			//释放空间

	pSeqlist->array = NULL;
	pSeqlist->capacity = 0;			//容量
	pSeqlist->size = 0;

}


//尾插
void SeqListPushBack(SeqList* pSeqlist,int value) {
	//不考虑容量
	pSeqlist->array[pSeqlist->size] = value;
	pSeqlist->size++;
}



//头插(从后往前移，移size个数) 
//空间的下标[size,1]      数据的下标[size-1,0]
//移动的过程array[空间]=array[数据]
void SeqListFrontBack(SeqList* pSeqlist, int value) {

	//i是空间的下标
	for (int i = pSeqlist->size; i >= 1;i--) {
		pSeqlist->array[i] = pSeqlist->array[i - 1];
	}
	pSeqlist->array[0] = value;
	pSeqlist->size++;

}
//尾删
void SeqListPopBack(SeqList *ps) {
	assert(ps != NULL);
	assert(ps->array != NULL);

	ps->size--;
}

//头删
void SeqListPopFront(SeqList *ps) {
	assert(ps != NULL);
	assert(ps->array != NULL);

	for (int i = 0; i < ps->size - 1; i++) {
		ps->array[i] = ps->array[i + 1];
	}
	ps->size--;
}

//任意位置的插入
void SeqListInsert(SeqList *ps, int pos, int data) {
	assert(ps != NULL);
	assert(ps->array != NULL);

	for (int i = ps->size - 1; i > pos - 1; i--) {
		ps->array[i] = ps->array[i - 1];
	}
	ps->array[pos - 1] = data;
	ps->size++;
}

//任意位置的删除
void SeqListErase(SeqList *ps, int pos) {
	assert(ps != NULL);
	assert(ps->array != NULL);

	for (int i = pos - 1; i < size; i++) {
		ps->array[i - 1] = ps->array[i];
	}
	ps->size--;
}


// 检测data是否在顺序表中 
int SeqListFind(SeqList *ps, int data) {
	assert(ps != NULL);
	assert(ps->array != NULL);

	for (int i = 0; i < ps->size; i++) {
		if (ps->array[i] == data) {
			return 1;
		}
	}
	return 0;
}

//删除顺序表中数为data的元素
void SeqListRemove(SeqList *ps, int data) {
	assert(ps != NULL);
	assert(ps->array != NULL);

	for (int i = 0; i < ps->size; i++) {
		if (ps->array[i] == data) {
			for (int j = i; j < ps->size - 1; j++) {
				ps->array[j] = ps->array[j + 1];
			}
			ps->size--;
			return;
		}
	}
	return;
}

// 移除顺序表中所有值为data的元素
void SeqListRemoveAll(SeqList *ps, int data) {
	assert(ps != NULL);
	assert(ps->array != NULL);

	for (int i = 0; i < ps->size; ++i) {
		if (ps->array[i] == data) {
			for (int j = i; j < ps->size - 1; ++j) {
				ps->array[j] = ps->array[j + 1];
			}
			--i;
			ps->size--;
		}
	}
	return;
}


//扩容
void SeqListBiger(SeqList *ps) {
	assert(ps != NULL);
	assert(ps->array != NULL);

	int* a = (int*)malloc(sizeof(int) * ps->capacity * 2);
	for (int i = 0; i < ps->size; ++i) {
		a[i] = ps->array[i];
	}
	ps->array = a;
	ps->capacity *= 2;
}


















//静态顺序表:

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

//判断插入的位置
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
	//i代表插入的位置
	if ((i<1) || (i<L->last+2)) {
		printf("插入位置不合法");
		return 0;
	}
	if (L->last>=100-1) {
		printf("顺序表已满");
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
	printf("输出结果为：");
	for (i = 0; i <= L->last; i++) {
		printf("%d", L->array[i]);
	}
	return L->last;
}