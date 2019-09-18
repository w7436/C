#define _CRT_SECURE_NO_WARNINGS
#include "List.h"


int Init(PLinklist *head) {				//headΪ����ָ��
	*head = ((PLinklist)malloc(sizeof(Node)));
	if (*head) {
		(*head)->next = NULL;
		return 1;
	}
	return 0;
}


int CreatList(PLinklist *head) {
	Node *Tm, *Hm;
	int c;  //���ϵ��
	int exp; //���ָ��
	int i;   //������������ʾ�û�����ڼ���
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
//����ļӺ�
void Add(PLinklist L1, PLinklist L2) {

	//LA,LB�������������е��ƶ�
	Node *LA = L1->next;
	Node *LB = L2->next;

	Node *tmp;//��������ɾ���Ľ��
	int sum;//�������ϵ���ĺ�
	while (LA&&LB) {
		if (LA->exp < LB->exp) {
			
			LA = LA->next;
		}
		else if (LA->exp == LB->exp) {
			sum = LA->coef + LB->coef;
			//ϵ����Ϊ0���������LA�У�ͬʱɾ�����LB
			if (sum != 0) {
				LA->coef = sum;
				L1->next = LA;
				LA = LA->next;
				L1 = L1->next;

				tmp = LB;
				LB= tmp->next;
				free(tmp);

			}
			//ϵ��Ϊ0ʱ��ɾ�������ڵ�
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