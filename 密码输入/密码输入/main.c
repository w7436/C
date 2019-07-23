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
		printf("请输入你的password：");
		scanf("%s", password);   //scanf  遇到空格，回车停止输入
		if (strcmp(password, "123456") == 0)//"123456"
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			count--;
			printf("你还有%d次机会!\n", count);
		}
	}
	return 0;
}
#if 0
int main() {
	char a[10], b[10] = "hello";
	printf("请输入密码：");
	int m = 0;
	while (m < 3) {
		scanf("%s", a);
		if (strcmp(a, b) == 0) {
			printf("密码输入正确\n");
			break;
		}
		else
			printf("请重新输入：");
			m++;
	}
	system("pause");
	return 0;
}
#endif