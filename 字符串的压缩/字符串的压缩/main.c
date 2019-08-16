#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
//xxxyy------>3x2y
void reduce_str(char *str,int len) {
	int count = 0;
	int i = 0;
	for (i = 0; i < len;i++) {
		str[i] = str[i];
		if (str[++i]=str[i]) {
			count++;
		}
	}
	

}
int main() {
	char *str = "hhheello";
	int len = strlen(str);
	reduce_str(str, len);

	system("pause");
	return 0;
}