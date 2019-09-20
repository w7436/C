//#pragma once
#ifndef   _LIST_H__
#define  _LIST_H__

#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
	struct Node *next;
}Node,  *Plist;

void InitList(Plist plist);//≥ı ºªØ
void InsertHead(Plist plist, int val);
void Show(Plist plist);
void InsertTail(Plist plist,int val);
int GetLength(Plist plist);

#endif


