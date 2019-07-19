#define	_CRT_SECURE_NO_WARNINGS
# pragma once
#include "assert.h"
#include"stdlib.h"			//����malloc, free �ڴ����뼰�ͷ�
#include "stdio.h"			//����scanf, printf ��׼�������
#include "string.h"

typedef int SListDataType;
typedef char SListLetterType;

//����Ĳ�������Ľṹ�壬����������һ���ڵ�Ľṹ��
typedef struct InfoArr {
	SListDataType  registNum;					//��¼��
	SListLetterType title[20];					//������
	SListLetterType  name[20];					//������
	SListDataType  classNum;					//�����
	SListLetterType publisher[50];			//���浥λ
	SListLetterType  publishTime[50];		//����ʱ��
	SListDataType price;							//����۸�
} Info;

/*
* typedef - ȡ����ΪNode
* next - ������һ���ڵ�ĵ�ַ
*/
typedef struct ListNode {					
	Info* arr;
	struct ListNode *next;						
} Node;													
typedef struct  SList
{
	Node *first;			
}SList;
void SListInit(SList *s);     //�����ʼ��
void GetInfo(Info* s);				//����ģ��
void SListErase(SList *s, int pos);  //ɾ��ģ��
void Display(Info *s);				//���ͼ����Ϣ�����
void ShowList(SList *s);			//���ģ��
void Menu();								//�˵�
void display();							//ͼ����Ϣ�ı��
void NameFind(SList *s, char name[]);			//�������߲�ѯģ��
void TitleFind(SList *s, char title[]);			//����������ѯģ��
void modyfy(SList *s, int pos);					//�޸Ľ���ĳһ����Ϣ
void SListPushBack(SList *s);					//�����㣨β�壩
void SortPrice(SList *s);						//����ģ��
void fileList(SList *s);						//�ļ��洢ģ��