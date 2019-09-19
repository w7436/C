#pragma once
#include <stdio.h>
#include<stdlib.h>

typedef struct poly {
	int exp;
	int coef;
	struct poly *next;
}Node, *PLinklist;

//初始化
int Init(PLinklist *head);
//创建链表（尾插）
int CreatList(PLinklist *head);
void Add(PLinklist L1, PLinklist L2);


