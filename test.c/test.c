#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"

int main()
{
	Node head;
	InitList(&head);

	//插法
	InsertTail(&head,10);
	InsertTail(&head,20);
	InsertTail(&head,30);
	InsertTail(&head,40);
	InsertTail(&head,50);
	InsertTail(&head,60);
	//打印
	Show(&head);
	//int ret = GetLength(&head);
	printf("%d\n",GetLength(&head));
	return 0;
}

 //int a,b;



#if 0
/*
结构体和数组一样  属于聚合类型    进行整体初始化  定义的时候

class   struct   ???
C/C++  区别？  static      extern     const
typedef

define 

C:弱类型--》
Java:强类型

*/
typedef struct Student
{
	char name[10];
	int age;
	//struct Student student;   自引用 只能以指针的形式
	//struct Student *pstu;
}Student;    //stu = {"hello",99};
void Show1(Student arr[],int len)
{
	int i = 0;
	for(i = 0;i < len;i++)
	{
		printf("%s,%d\n",arr[i].name,arr[i].age);
	}
}
void Show2(Student *arr,int len)
{
	int i = 0;
	for(i = 0;i < len;i++)
	{
		printf("%s,%d\n",  (*(arr+i)).name, (arr+i)->age  );
	}
}
void Show3(Student stu)
{
	printf("%s,%d\n",stu.name,stu.name);
}
void Show4(Student *pstu)
{
	printf("%s,%d\n",pstu->name,(*pstu).name);
}
/*
.   :   变量.  
->:   指针->
*/
struct A
{
    int a;
	int b;
};
struct B
{
	int c;
	struct A *pa;
	struct A AA;
};
int main()
{
	struct A Aa;
	struct B bb = {1,&Aa,{10,20}};
	bb.c;
	bb.pa = NULL;
	bb.pa->b;
	bb.AA.a;
	bb.AA.b;
	/*Student stu2 = {"guanyu",99};
	Show4(&stu2);*/

	/*Student arr[3] = {{"bit",12},{"cacao",88},{"liubei",99}};
	int len = sizeof(arr)/sizeof(arr[0]);


	Show(arr,len);*/

	/*Student stu1 = {"caocao",18};
	Student stu2 = {"liubei",188};
	stu2.age = 99;
	strcpy(stu2.name,"bit");*/

	//stu2.name = "gaobo";
	//10 = 20;
	//int a = 12.5;

	//stu = {"liubei",99};
	//stu.age = 100;
	/*struct A
	{

	}AA;*/
	return 0;
}
#endif