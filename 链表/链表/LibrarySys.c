#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "LibrarySys.h"
//����ĳ�ʼ��
void SListInit(SList *s) {
	assert(s != NULL);     //�������Ϊ�٣�����ֹ����
	s->first = NULL;
}
/*����ģ��*/
void GetInfo(Info* s) {
	printf("\n$��¼��$\t��");
	scanf("%d", &s->registNum);
	printf("$������$\t��");
	scanf("%s", s->title);
	printf("$����$\t\t��");
	scanf("%s", s->name);
	printf("$�����$\t��");
	scanf("%d", &s->classNum);
	printf("$���浥λ$\t��");
	scanf("%s", s->publisher);
	printf("$����ʱ��$\t��");
	scanf("%s", s->publishTime);
	printf("$�۸�$\t\t��");
	scanf("%d", &s->price);
}
//β��
void SListPushBack(SList *s) {
	Node *node = (Node *)malloc(sizeof(Node));
	node->arr = (Info*)malloc(sizeof(Info));
	GetInfo(node->arr);
	node->next = NULL;
	if (s->first == NULL) {				//����Ϊ�յ����
		s->first = node;
		return;
	}
	Node *cur = s->first;				//������������һ���ڵ�����������ҵ����һ����㣬������������һ���н��
	while (cur->next != NULL) {
		cur = cur->next;
	}
	cur->next = node;						//cur->nextһ����NULL,Ҳ�������һ�����
}
void Menu() {
	printf("******************************************************************************************");
	printf("\n** [�˵�]��\t\t\t\t\t\t\t\t\t\t**\n");
	printf("**\t1-����ͼ����Ϣ\t\t");
	printf("2-���ͼ����Ϣ\t\t");
	printf("3-�����߲�ѯͼ����Ϣ\t\t**\n");
	printf("**\t4-��������ѯͼ����Ϣ\t");
	printf("5-���۸��ͼ���������\t");
	printf("6-��ָ��ͼ����Ϣ��ɾ��\t\t**\n");
	printf("**\t7-��ͼ����Ϣ���޸�");
	printf("\t8-�洢�ļ���Ϣ\t\t\t\t\t\t**\n");
	printf("******************************************************************************************");
	printf("\n$��ѡ��ָ��$:");
}
//ָ���ڵ�ɾ����pos-��¼��
void SListErase(SList *s, int pos) {
	assert(s != NULL); //����û������
	assert(s->first != NULL);   //����û�н��
	if (s->first->next == NULL) {
		//������ֻ��һ�����
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
//������������ѯͼ����Ϣ
void NameFind(SList *s, char name [ ]) {
	Node *cur = s->first;
	// flag == 0 ˵��û��ƥ�䵽�κ��鼮
	// flag == 1 ����ƥ�䵽һ���鼮
	int flag = 0;
	while (cur!=NULL) {
		if (strcmp(cur->arr->name, name) == 0) {
			Display(cur->arr);
			flag = 1;
		}
		cur = cur->next;
	}
	if (flag == 0) {
		printf("-------so sorry~~ û��ƥ�䵽�κ��鼮--------\n");
	}
}
//����������ѯͼ����Ϣ
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
		printf("-------so sorry~~ û��ƥ�䵽�κ��鼮--------\n");
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
//���ݵ�¼��ɾ��ͼ���е�ĳһ����Ϣ
void modyfy(SList *s, int pos) {
	Node *node = s->first;
	int order;
	if (node->arr->registNum == pos) {
		Display(node->arr);
	}
	display();//ͼ����Ϣ�ı��
	printf("$��������Ҫ�޸ĵ���Ϣ$��");
	scanf("%d", &order);
	while (1)
	{
		if (order == 1) {
			int num;
			printf("$�������޸ĺ�ĵ�¼��$��");
			scanf("%d", &num);
			node->arr->registNum = num;
			printf("--------�޸ĳɹ�~~-------");
			break;
		}
		else if (order == 2) {
			char num[20];
			printf("$�������޸ĺ������$��");
			scanf("%s", num);
			strcpy(node->arr->title, num);
			printf("------ �޸ĳɹ�~~ -------");
			break;
		}
		else if (order == 3) {
			char num[20];
			printf("$�������޸ĺ��������$��");
			scanf("%s", num);
			strcpy(node->arr->name, num);
			printf("------ �޸ĳɹ�~~ ------");
			break;
		}
		else if (order == 4) {
			char num[20];
			printf("$�������޸ĺ���浥λ$��");
			scanf("%s", num);
			strcpy(node->arr->publisher, num);
			printf("------ �޸ĳɹ�~~ ------");
			break;
		}
		else if (order == 5) {
			char num[20];
			printf("$�������޸ĺ�ĳ���ʱ��$��");
			scanf("%s", num);
			strcpy(node->arr->publishTime, num);
			printf("------ �޸ĳɹ�~~ ------");
			break;
		}
		else if (order == 6) {
			int num;
			printf("$�������޸ĺ�ķ����$��");
			scanf("%d", &num);
			node->arr->classNum = num;
			printf("------ �޸ĳɹ�~~ ------");
			break;
		}
		else if (order == 7) {
			int num=0;
			printf("$�������޸ĺ�ļ۸�$��");
			scanf("%d", &num);
			node->arr->price = num;
			printf("------ �޸ĳɹ�~~ ------");
			break;
		}
		else
		{
			printf("///////error:::::�밴��Ҫ������~~");
			scanf("%d", &order);
		}
	}
 }
//ͼ����Ϣ�ı��
void display() {
	printf("ͼ����Ϣ�ı�����£�\n");
	printf("1: ��¼��\t\t");
	printf("2: ����\t\t\t");
	printf("3: ����\t\t\n");
	printf("4: ���浥λ\t\t");
	printf("5: ����ʱ��\t\t");
	printf("6: �����\t");
	printf("7:�۸�\n");
}
void Display(Info *s) {
	printf("��¼�ţ�%d\t|", s->registNum);
	printf("�����ţ�%s\t| ", s->title);
	printf("���ߣ�%s\t| ", s->name);
	printf("����ţ�%d\t|", s->classNum);
	printf("���浥λ��%s\t|", s->publisher);
	printf("����ʱ�䣺%s\t|", s->publishTime);
	printf("�۸�%d\n\n", s->price);
}
//����ı���
void ShowList(SList *s) {
	Node *node = s->first;
	while (node != NULL) {
		Display(node->arr);
		node = node->next;
	}
}
//���ݼ۸��С������������
//����һ���µ�������ԭ����������ѭ����ȡ��С�Ľ��
//���ø��ƽ�㺯���������ƵĽ����뵽�µ�����
//����ɾ��ָ����㺯����ɾ��ԭ�������Ѿ������ƵĽ��
//���ԭ�������٣�����ָ���µ�����
/*���ƽ�㺯��*/
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
/*ɾ��ָ�����*/
void deleteNode(SList *s, Node* pos) {
	if (s->first == NULL)
		return;
	// �����һ���������Ҫɾ���Ľ��
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
	// cur->next����ΪNULL�����˳���Ҳ�����ҵ�pos���
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
/*β��*/
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
// ����������������ʵ�ָ��ݼ۸�����
void SortPrice(SList *s) {
	//�´���һ������
	SList sNew;
	SListInit(&sNew);

	while (s->first != NULL) {
		//Ѱ����С�Ľ��small_node
		Node* cur = s->first;
		Node* smallNode = s->first;
		while (cur != NULL) {
			if (smallNode->arr->price > cur->arr->price)
				smallNode = cur;
			cur = cur->next;
		}

		//�������ƵĽ��
		Node* copy_Node = copyNode(smallNode);
		//�����ƵĽ����뵽�µ�������
		pushNode(&sNew, copy_Node);
		//��ԭ������ɾ���ý��
		deleteNode(s, smallNode);
	}
	s->first = sNew.first;
}
/*��ͼ����Ϣ�洢���ļ���*/
void fileList(SList *s) {
	if (s->first == NULL)
		return;
	FILE* fp = NULL;
	fp = fopen("C:/Users/DELL/Desktop/library.txt", "w");
	Node* cur = s->first;
	while (cur != NULL) {
		fprintf(fp ,"��¼��:%d, ������:%s, ������:%s, �����:%d, ���浥λ:%s, ����ʱ��:%s, ����۸�:%d\n"
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