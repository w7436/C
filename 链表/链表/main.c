#include "LibrarySys.h"
#include"stdlib.h"
/*
*	�˵���
*	1-����ͼ����Ϣ
*	2-���ͼ����Ϣ
*	3-�����߲�ѯͼ����Ϣ
*	4-��������ѯͼ����Ϣ
*	5-���۸��ͼ���������
*	6-��ָ��ͼ����Ϣ��ɾ��
*  7-��ͼ����Ϣ���޸�
*  8-�洢�ļ���Ϣ
*/
int main() {
	unsigned int order;
	SList s;
	SListInit(&s);

	Menu();
	while (1) {
		scanf("%d", &order);
		// ��ջ������е�\n
		//getchar();
		if (order == 1) {
			printf("$������������ͼ�����$��");
			int num;
			scanf("%d", &num);
			for (int i = 1; i <= num; i++) {
				printf("\n$�������%d���飺", i);
				SListPushBack(&s);
			}
		} else if (order == 2) {
			ShowList(&s);
		} else if (order == 3) {
			char name_t[20];
			printf("$������������ѯ������$��");
			scanf("%s", name_t);
			NameFind(&s, name_t);
		} else if (order == 4) {
			char title_t[20];
			printf("$������������ѯ������$��");
			scanf("%s", title_t);
			TitleFind(&s, title_t);
		} else if (order == 5) {
			SortPrice(&s); 
			printf("------- ���۸��������ɹ�~~ ------\n");
		} else if (order == 6) {
			int num;
			printf("$����������ɾ����ͼ��ĵ�¼��$��");
			scanf("%d", &num);
			SListErase(&s, num);
			printf("------ ɾ��ͼ����Ϣ�ɹ�~~ ------");
		} else if(order==7){
			int pos;
			printf("$��������Ҫ�޸����ݵĵ�¼��$��");
			scanf("%d", &pos);
			modyfy(&s, pos);
		} else if (order == 8) {
			fileList(&s);
			printf("------ �洢�ļ��ɹ�~~ ------");
		}
		printf("\n\n$����ѡ��ָ��$��");
	}
	system("pause");
	return 0;
}