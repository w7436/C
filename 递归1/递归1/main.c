#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数
int strlen(char *string) {
	int len = 0;
	int i = 0;
	for (int i = 0; string[i] != '\0'; i++) {
		len = i;
	}
	return len;
}
void  reverse_string(char * str) {
	char left = 0;
	char right = strlen(str) - 1;
	if (left < right) {
		char tmp = str[left];
		str[left] = str[right];
		str[right--] = tmp;
	}
	else {
		return;
	}
	reverse_string(left + 1);
}
int main() {
	char string[] = "helloworld~~";
	reverse_string(string);
	printf("%s\n", string);
	return 0;
}