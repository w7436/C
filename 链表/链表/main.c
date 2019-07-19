#include "LibrarySys.h"
#include"stdlib.h"
/*
*	菜单：
*	1-输入图书信息
*	2-浏览图书信息
*	3-按作者查询图书信息
*	4-按书名查询图书信息
*	5-按价格对图书进行排序
*	6-对指定图书信息的删除
*  7-对图书信息的修改
*  8-存储文件信息
*/
int main() {
	unsigned int order;
	SList s;
	SListInit(&s);

	Menu();
	while (1) {
		scanf("%d", &order);
		// 清空缓冲区中的\n
		//getchar();
		if (order == 1) {
			printf("$请输入你输入图书个数$：");
			int num;
			scanf("%d", &num);
			for (int i = 1; i <= num; i++) {
				printf("\n$请输入第%d本书：", i);
				SListPushBack(&s);
			}
		} else if (order == 2) {
			ShowList(&s);
		} else if (order == 3) {
			char name_t[20];
			printf("$请输入你所查询的作者$：");
			scanf("%s", name_t);
			NameFind(&s, name_t);
		} else if (order == 4) {
			char title_t[20];
			printf("$请输入你所查询的书名$：");
			scanf("%s", title_t);
			TitleFind(&s, title_t);
		} else if (order == 5) {
			SortPrice(&s); 
			printf("------- 按价格进行排序成功~~ ------\n");
		} else if (order == 6) {
			int num;
			printf("$请输入你所删除的图书的登录号$：");
			scanf("%d", &num);
			SListErase(&s, num);
			printf("------ 删除图书信息成功~~ ------");
		} else if(order==7){
			int pos;
			printf("$请输入需要修改数据的登录号$：");
			scanf("%d", &pos);
			modyfy(&s, pos);
		} else if (order == 8) {
			fileList(&s);
			printf("------ 存储文件成功~~ ------");
		}
		printf("\n\n$重新选择指令$：");
	}
	system("pause");
	return 0;
}