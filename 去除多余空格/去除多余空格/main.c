#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void deblank(char string[]) {
	char  *string_temp = string;
	int i, j;
	for (i = 0, j = 0; string_temp[i] != '\0'; j++){
			string[j] = string_temp[i];
			printf("%c", string[j]);
			i++;
			if (string_temp[i] == ' ') {
				printf("%c", string[i]);
			}
			while (string_temp[i] == ' ') {
				i++;
			}
	}
	string[i] = '\0';
}
int main() {
	char arr[] = "how       are    you";
	deblank(arr);
	return 0;
}