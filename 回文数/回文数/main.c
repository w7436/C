#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void Palindrome_number(int num) {
	int s1 = num;
	int s2 = 0;  //代表新数，逆读后的数
	while (s1 !=0) {
		s2 = s1 % 10 + s2 * 10;
		s1 /= 10;
	}
	if (s2==num) {
		printf("%d为回文数",num);
	}
	else
	{
		printf("%d不为回文数",num);
	}

}
int main() {
	int num = 0;
	scanf("%d", &num);
	Palindrome_number(num);
	system("pause");
	return 0;
}