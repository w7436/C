#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//�ݹ�ʵ���ַ����ĳ���
int Mystrlen(char *str) {
	if (*str == '\0') {
		return 0;
	}
	else
		return 1 + Mystrlen(str + 1);
}
//�ǵݹ�ʵ���ַ�������
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