#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//��һ���ַ�����src���Ƶ�dst��
//1.���src����С��n�����ڸ��ƺ���ַ���β�������㹻��NUL�ַ�
//2,���src���ȴ��ڵĵ���n������������

void copy_n(char dst[], char src[], int n) {
	int dst_index, src_index;
	src_index = 0;
	for (dst_index = 0; dst_index < n;dst_index+=1) {
		dst[dst_index] = src[src_index];
		if (src[src_index]!=0) {
			src_index+=1;
		}
		printf("%c", dst[dst_index]);
	}
}
int main() {
	char src[] = "How are you?";
	char dst[1024] = " ";
	copy_n(dst, src, 15);
	return 0;
}
