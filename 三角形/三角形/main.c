#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//判断三角形    两边之和大于第三边，在此基础上进行判断
//1.如果两边相等，等腰三角形
//2.如果三边相等，等边三角形
//3.如果三边不相等，不等边三角形
int  IsTriangle(int s1,int s2,int s3) {
	if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1) {
		if (s1 == s2 || s1 == s3 || s2 == s3) {
			if (s1 == s2 && s2 == s3 && s1 == s3) {
				printf("则为等边三角形\n");
				return 0;
			}
			printf("则为等腰三角形\n");
		}
		if (s1 != s2 && s2 != s3 && s1 != s3) {
			printf("则为不等边三角形\n");
		}
	}
	else
		printf("则不为三角形\n");
}
int main() {
	int s1 = 0, s2 = 0, s3 = 0;
	printf("请输入三边长：");
	scanf("%d %d %d", &s1, &s2, &s3);
	IsTriangle(s1, s2, s3);
	return 0;
}