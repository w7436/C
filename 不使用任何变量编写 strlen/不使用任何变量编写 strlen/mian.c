#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include<stdlib.h>
int My_strlen(char *string) {
	assert(string != NULL);
	if (*string=='\0') {
		return 0;
	}
	else
	{
		return (1 + My_strlen(++string));
	}
}
int My_strlen1(char *string) {
	return (*string == '\0' ? 0: (1 + My_strlen(++string)));
}
int main() {
	char *string = "hello";
	printf("%d\n", My_strlen1(string));
	system("pause");
	return 0;
}