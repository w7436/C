#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//递归实现字符串的长度
int Mystrlen(char *str) {
	if (*str == '\0') {
		return 0;
	}
	else
		return 1 + Mystrlen(str + 1);
}
//非递归实现字符串长度
int Mystrlen(char *str) {
	int len = 0;  
	while (*(str++)!='\0') {
		len++;
	}
	return len;
}
void reverse_string(char* str) {
	int len = Mystrlen(str);
	char tmp = *str;
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (len >= 2) {
		reverse_string(str + 1);
	}
	*(str + len - 1) = tmp;
}
int main() {
	char str[] = "hello";
	reverse_string(str);
	printf("%s\n", str);
	return 0;
}