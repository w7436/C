#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* Delete(char *s1,char *s2) {
	unsigned int i = 0;
	unsigned int j = 0;
	while (s1[i+1]!='\0') {
		for (j = 0; j < strlen(s2); j++) {
			if (s1[i] == s2[j]) {
				for (int k = i; k < strlen(s1);k++) {
					s1[k] = s1[k + 1];
				}
			}
		}
		i++;
	}
	
	return s1;
}
int main() {
	char s1[100] = "They are students.";
	char s2[100] ="aeiou";
	printf("%s\n",Delete(s1, s2));
	system("pause");
	return 0;
}