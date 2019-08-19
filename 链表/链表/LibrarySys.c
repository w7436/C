#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "LibrarySys.h"
//链表的初始化
void SListInit(SList *s) {
	assert(s != NULL);     //如果条件为假，则终止程序
	s->first = NULL;
}
/*输入模块*/
void GetInfo(Info* s) {
	printf("\n$登录号$\t：");
	scanf("%d", &s->registNum);
	printf("$书名号$\t：");
	scanf("%s", s->title);
	printf("$作者$\t\t：");
	scanf("%s", s->name);
	printf("$分类号$\t：");
	scanf("%d", &s->classNum);
	printf("$出版单位$\t：");
	scanf("%s", s->publisher);
	printf("$出版时间$\t：");
	scanf("%s", s->publishTime);
	printf("$价格$\t\t：");
	scanf("%d", &s->price);
}
//尾插
void SListPushBack(SList *s) {
	Node *node = (Node *)malloc(sizeof(Node));
	node->arr = (Info*)malloc(sizeof(Info));
	GetInfo(node->arr);
	node->next = NULL;
	if (s->first == NULL) {				//链表为空的情况
		s->first = node;
		return;
	}
	Node *cur = s->first;				//链表中至少有一个节点的情况，如何找到最后一个结点，隐含着链表中一定有结点
	while (cur->next != NULL) {
		cur = cur->next;
	}
	cur->next = node;						//cur->next一定是NULL,也就是最后一个结点
}
void Menu() {
	printf("******************************************************************************************");
	printf("\n** [菜单]：\t\t\t\t\t\t\t\t\t\t**\n");
	printf("**\t1-输入图书信息\t\t");
	printf("2-浏览图书信息\t\t");
	printf("3-按作者查询图书信息\t\t**\n");
	printf("**\t4-按书名查询图书信息\t");
	printf("5-按价格对图书进行排序\t");
	printf("6-对指定图书信息的删除\t\t**\n");
	printf("**\t7-对图书信息的修改");
	printf("\t8-存储文件信息\t\t\t\t\t\t**\n");
	printf("******************************************************************************************");
	printf("\n$请选择指令$:");
}
//指定节点删除，pos-登录号
void SListErase(SList *s, int pos) {
	assert(s != NULL); //不能没有链表
	assert(s->first != NULL);   //不能没有结点
	if (s->first->next == NULL) {
		//链表中只有一个结点
		free(s->first);
		s->first = NULL;
		return;
	}
	Node  *cur=s->first;
	while (cur!=NULL&&cur->next->arr->registNum== pos) {
		cur = cur->next;
	}
	if (cur == NULL) {
		return; 
	}
	Node *node = cur->next;
	cur->next = node->next;
	free(node);
}
//根据作者名查询图书信息
void NameFind(SList *s, char name [ ]) {
	Node *cur = s->first;
	// flag == 0 说明没有匹配到任何书籍
	// flag == 1 至少匹配到一本书籍
	int flag = 0;
	while (cur!=NULL) {
		if (strcmp(cur->arr->name, name) == 0) {
			Display(cur->arr);
			flag = 1;
		}
		cur = cur->next;
	}
	if (flag == 0) {
		printf("-------so sorry~~ 没有匹配到任何书籍--------\n");
	}
}
//根据书名查询图书信息
void TitleFind(SList *s, char title[ ]) {
	Node *cur = s->first;
	int flag = 0;
	while (cur != NULL) {
		if (strcmp(cur->arr->title, title) == 0) {
			Display(cur->arr);
			flag = 1;
		}
		cur = cur->next;
	}
	if (flag == 0) {
		printf("-------so sorry~~ 没有匹配到任何书籍--------\n");
	}
}

void pricelist(SList *s,int a[]) {
	Node *node = s->first;
	int i=0;
	while (node!=NULL) {
		a[i] = node->arr->price;
		node = node->next;
		i++;
	}
}
//根据登录号删除图书中的某一个信息
void modyfy(SList *s, int pos) {
	Node *node = s->first;
	int order;
	if (node->arr->registNum == pos) {
		Display(node->arr);
	}
	display();//图书信息的编号
	printf("$请输入需要修改的信息$：");
	scanf("%d", &order);
	while (1)
	{
		if (order == 1) {
			int num;
			printf("$请输入修改后的登录号$：");
			scanf("%d", &num);
			node->arr->registNum = num;
			printf("--------修改成功~~-------");
			break;
		}
		else if (order == 2) {
			char num[20];
			printf("$请输入修改后的书名$：");
			scanf("%s", num);
			strcpy(node->arr->title, num);
			printf("------ 修改成功~~ -------");
			break;
		}
		else if (order == 3) {
			char num[20];
			printf("$请输入修改后的作者名$：");
			scanf("%s", num);
			strcpy(node->arr->name, num);
			printf("------ 修改成功~~ ------");
			break;
		}
		else if (order == 4) {
			char num[20];
			printf("$请输入修改后出版单位$：");
			scanf("%s", num);
			strcpy(node->arr->publisher, num);
			printf("------ 修改成功~~ ------");
			break;
		}
		else if (order == 5) {
			char num[20];
			printf("$请输入修改后的出版时间$：");
			scanf("%s", num);
			strcpy(node->arr->publishTime, num);
			printf("------ 修改成功~~ ------");
			break;
		}
		else if (order == 6) {
			int num;
			printf("$请输入修改后的分类号$：");
			scanf("%d", &num);
			node->arr->classNum = num;
			printf("------ 修改成功~~ ------");
			break;
		}
		else if (order == 7) {
			int num=0;
			printf("$请输入修改后的价格$：");
			scanf("%d", &num);
			node->arr->price = num;
			printf("------ 修改成功~~ ------");
			break;
		}
		else
		{
			printf("///////error:::::请按您要求输入~~");
			scanf("%d", &order);
		}
	}
 }
//图书信息的编号
void display() {
	printf("图书信息的编号如下：\n");
	printf("1: 登录号\t\t");
	printf("2: 书名\t\t\t");
	printf("3: 作者\t\t\n");
	printf("4: 出版单位\t\t");
	printf("5: 出版时间\t\t");
	printf("6: 分类号\t");
	printf("7:价格\n");
}
void Display(Info *s) {
	printf("登录号：%d\t|", s->registNum);
	printf("书名号：%s\t| ", s->title);
	printf("作者：%s\t| ", s->name);
	printf("分类号：%d\t|", s->classNum);
	printf("出版单位：%s\t|", s->publisher);
	printf("出版时间：%s\t|", s->publishTime);
	printf("价格：%d\n\n", s->price);
}
//链表的遍历
void ShowList(SList *s) {
	Node *node = s->first;
	while (node != NULL) {
		Display(node->arr);
		node = node->next;
	}
}
//根据价格大小进行链表排序
//创建一个新的链表，对原来的链表不断循环获取最小的结点
//调用复制结点函数，将复制的结点插入到新的链表
//调用删除指定结点函数，删除原链表中已经被复制的结点
//最后将原链表销毁，并且指向新的链表
/*复制结点函数*/
Node* copyNode(Node* node) {
	Node* ret = (Node*)malloc(sizeof(Node));
	ret->arr = (Info*)malloc(sizeof(Info));
	ret->next = NULL;
	ret->arr->classNum = node->arr->classNum;
	strcpy(ret->arr->name, node->arr->name);
	ret->arr->price = node->arr->price;
	strcpy(ret->arr->publisher, node->arr->publisher);
	strcpy(ret->arr->publishTime, node->arr->publishTime);
	ret->arr->registNum = node->arr->registNum;
	strcpy(ret->arr->title, node->arr->title);
	return ret;
}
/*删除指定结点*/
void deleteNode(SList *s, Node* pos) {
	if (s->first == NULL)
		return;
	// 如果第一个结点是需要删除的结点
	if (s->first == pos) {
		Node* node = s->first;
		s->first = s->first->next;
		free(node);
		return;
	}
	Node *cur = s->first;
	while (cur->next != NULL && cur->next != pos) {
		cur = cur->next;
	}
	// cur->next可能为NULL导致退出，也可能找到pos结点
	if (cur->next == NULL) {
		Node* delNode = cur;
		cur = NULL;
		free(delNode);
	} else {
		Node* delNode = cur->next;
		cur->next = cur->next->next;
		free(delNode);
	}
}
/*尾插*/
void pushNode(SList* s, Node* node) {
	if (s->first == NULL) {
		s->first = node;
		return;
	}
	Node* cur = s->first;
	while (cur->next != NULL) {
		cur = cur->next;
	}
	cur->next = node;
}
// 调用上面两个函数实现根据价格排序
void SortPrice(SList *s) {
	//新创建一个链表
	SList sNew;
	SListInit(&sNew);

	while (s->first != NULL) {
		//寻找最小的结点small_node
		Node* cur = s->first;
		Node* smallNode = s->first;
		while (cur != NULL) {
			if (smallNode->arr->price > cur->arr->price)
				smallNode = cur;
			cur = cur->next;
		}

		//创建复制的结点
		Node* copy_Node = copyNode(smallNode);
		//将复制的结点插入到新的链表中
		pushNode(&sNew, copy_Node);
		//从原链表中删除该结点
		deleteNode(s, smallNode);
	}
	s->first = sNew.first;
}
/*将图书信息存储在文件中*/
void fileList(SList *s) {
	if (s->first == NULL)
		return;
	FILE* fp = NULL;
	fp = fopen("C:/Users/DELL/Desktop/library.txt", "w");
	Node* cur = s->first;
	while (cur != NULL) {
		fprintf(fp ,"登录号:%d, 书名号:%s, 作者名:%s, 分类号:%d, 出版单位:%s, 出版时间:%s, 出版价格:%d\n"
			, cur->arr->registNum
			, cur->arr->title
			, cur->arr->name
			, cur->arr->classNum
			, cur->arr->publisher
			, cur->arr->publishTime
			, cur->arr->price);
		cur = cur->next;
	}
	fclose(fp);
}