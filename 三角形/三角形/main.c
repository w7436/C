#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ж�������    ����֮�ʹ��ڵ����ߣ��ڴ˻����Ͻ����ж�
//1.���������ȣ�����������
//2.���������ȣ��ȱ�������
//3.������߲���ȣ����ȱ�������
int  IsTriangle(int s1,int s2,int s3) {
	if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1) {
		if (s1 == s2 || s1 == s3 || s2 == s3) {
			if (s1 == s2 && s2 == s3 && s1 == s3) {
				printf("��Ϊ�ȱ�������\n");
				return 0;
			}
			printf("��Ϊ����������\n");
		}
		if (s1 != s2 && s2 != s3 && s1 != s3) {
			printf("��Ϊ���ȱ�������\n");
		}
	}
	else
		printf("��Ϊ������\n");
}
int main() {
	int s1 = 0, s2 = 0, s3 = 0;
	printf("���������߳���");
	scanf("%d %d %d", &s1, &s2, &s3);
	IsTriangle(s1, s2, s3);
	return 0;
}