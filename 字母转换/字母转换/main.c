#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"
int main() {
	char m = ' ';
	while (m != '!') {
		scanf("%c", &m);
		if (m >= 65 && m <= 90) {
			m = m + 32;
			printf("%c", m);
		}
		else (m >= 97 && m <= 122) {
			m = m - 32;
			printf("%c", m);
		}
	}
	system("pause");
	return 0;
}