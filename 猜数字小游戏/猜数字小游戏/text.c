#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	
	char dest[10] = "abcdef";
	char *p = (char *)memset(dest, 'g', 4);//void *
	printf("%s\n", p);
	return 0;
}
