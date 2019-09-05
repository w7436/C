#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//字符串的逆序
//4.
//有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）。


//字符串的长度
int Strlen(char *arr) {
	int count = 0;
	while (*(arr++)!= '\0') {
		count++;
	}
	return count;
}
//字符串的完全逆置
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
	//遇到空格，则字符内部转换
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
