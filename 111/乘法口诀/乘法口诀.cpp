#include <stdio.h>
#include "stdlib.h"
int main() {
	for (int i = 1; i <= 9;i++) {
		for (int j = 1; j <= i;j++) {
			printf("%d*%d=%d\t", j, i,i*j);
			if (j==i) {
				printf("\n");
			}
		}	
	}
	system("pause");
	return 0;
}