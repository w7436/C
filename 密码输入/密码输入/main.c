#define _CRT_SECURE_NO_WARNINGS
#include "stdlib.h"
#include "stdio.h"
#include <string.h>
int main()
{
	char password[20] = { 0 };
	int count = 3;
	while (count != 0)
	{
		printf("���������password��");
		scanf("%s", password);   //scanf  �����ո񣬻س�ֹͣ����
		if (strcmp(password, "123456") == 0)//"123456"
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			count--;
			printf("�㻹��%d�λ���!\n", count);
		}
	}
	return 0;
}
#if 0
int main() {
	char a[10], b[10] = "hello";
	printf("���������룺");
	int m = 0;
	while (m < 3) {
		scanf("%s", a);
		if (strcmp(a, b) == 0) {
			printf("����������ȷ\n");
			break;
		}
		else
			printf("���������룺");
			m++;
	}
	system("pause");
	return 0;
}
#endif