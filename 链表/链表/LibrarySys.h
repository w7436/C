#define	_CRT_SECURE_NO_WARNINGS
# pragma once
#include "assert.h"
#include"stdlib.h"			//用于malloc, free 内存申请及释放
#include "stdio.h"			//用于scanf, printf 标准输入输出
#include "string.h"

typedef int SListDataType;
typedef char SListLetterType;

//定义的不是链表的结构体，而是链表中一个节点的结构体
typedef struct InfoArr {
	SListDataType  registNum;					//登录号
	SListLetterType title[20];					//书名号
	SListLetterType  name[20];					//作者名
	SListDataType  classNum;					//分类号
	SListLetterType publisher[50];			//出版单位
	SListLetterType  publishTime[50];		//出版时间
	SListDataType price;							//出版价格
} Info;

/*
* typedef - 取别名为Node
* next - 保存下一个节点的地址
*/
typedef struct ListNode {					
	Info* arr;
	struct ListNode *next;						
} Node;													
typedef struct  SList
{
	Node *first;			
}SList;
void SListInit(SList *s);     //链表初始化
void GetInfo(Info* s);				//输入模块
void SListErase(SList *s, int pos);  //删除模块
void Display(Info *s);				//结点图书信息的输出
void ShowList(SList *s);			//浏览模块
void Menu();								//菜单
void display();							//图书信息的编号
void NameFind(SList *s, char name[]);			//根据作者查询模块
void TitleFind(SList *s, char title[]);			//根据书名查询模块
void modyfy(SList *s, int pos);					//修改结点的某一个信息
void SListPushBack(SList *s);					//插入结点（尾插）
void SortPrice(SList *s);						//排序模块
void fileList(SList *s);						//文件存储模块