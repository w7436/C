#pragma once
#include <stdio.h>
#include<stdlib.h>

typedef struct poly {
	int exp;
	int coef;
	struct poly *next;
}Node, *PLinklist;

//��ʼ��
int Init(PLinklist *head);
//��������β�壩
int CreatList(PLinklist *head);
void Add(PLinklist L1, PLinklist L2);


