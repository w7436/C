#define _CRT_SECURE_NO_WARNINGS
#include "List.h"


int Init(PLinklist *head) {				//head为二级指针
	*head = ((PLinklist)malloc(sizeof(Node)));
	if (*head) {
		(*head)->next = NULL;
		return 1;
	}
	return 0;
}


int CreatList(PLinklist *head) {
	Node *Tm, *Hm;
	int c;  //存放系数
	int exp; //存放指数
	int i;   //计数器用来提示用户输入第几项
	Hm = *head;
	scanf("%d,%d", &c, &exp);
	
	while (c!=0) {

		Tm = ((PLinklist)malloc(sizeof(Node)));

		if (Tm) {
			Tm->coef = c;
			Tm->exp = exp;
			Tm->next = NULL;
			Hm->next = Tm;
			Hm = Tm;
			scanf("%d,%d", &c, &exp);
		}
		else{
			return 0;
		}
	}
	return 1;
}
//链表的加和
void Add(PLinklist L1, PLinklist L2) {

	//LA,LB是用来在链表中的移动
	Node *LA = L1->next;
	Node *LB = L2->next;

	Node *tmp;//用来保存删除的结点
	int sum;//用来存放系数的和
	while (LA&&LB) {
		if (LA->exp < LB->exp) {
			
			LA = LA->next;
		}
		else if (LA->exp == LB->exp) {
			sum = LA->coef + LB->coef;
			//系数不为0，结果存入LA中，同时删除结点LB
			if (sum != 0) {
				LA->coef = sum;
				L1->next = LA;
				LA = LA->next;
				L1 = L1->next;

				tmp = LB;
				LB= tmp->next;
				free(tmp);

			}
			//系数为0时，删除两个节点
			else
			{
				tmp = LA;
				L1->next = tmp->next;
				free(tmp);
				tmp = LB;
				L2->next = tmp->next;
				free(tmp);
			}
		}
		else
		{
			
			LB = LB->next;

		}
	}
	if (LA) {
		L1->next = LA;
	}
	else
	{
		L1->next = LB;
	}
}