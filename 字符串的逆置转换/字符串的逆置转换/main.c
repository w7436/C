#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//�ַ���������
//4.
//��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����
//	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���


//�ַ����ĳ���
int Strlen(char *arr) {
	int count = 0;
	while (*(arr++)!= '\0') {
		count++;
	}
	return count;
}
//�ַ�������ȫ����
//i ma a tenduts
void reserve(char* left, char* right) {
	char tmp ;
	while (left < right) {
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void reserve_buf(char *arr) {
	int len = Strlen(arr);
	char* start = arr;
	char* end = arr;
	reserve(start, arr + len - 1);	//i ma a tenduts
	//�����ո����ַ��ڲ�ת��
	while (*(end+1) !='\0') {
		while (*end!=' '&&*end!='\0') {
			end++;
		}
		reserve(start, --end);
		if (*(end + 1) != '\0')
		{
			end = end + 2;
			start = end;
		}
	}
}
int main()
{
	char arr[] = "student a am i";
	reserve_buf(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}
