#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*杨氏矩阵
有一个二维数组.
数组的每行从左到右是递增的，每列从上到下是递增的.
在这样的数组中查找一个数字是否存在。
时间复杂度小于O(N);

数组：
1 2 3
2 3 4
3 4 5


1 3 4
2 4 5
4 5 6

1 2 3
4 5 6
7 8 9
*/
int  Find(int arr[][3], int input) {
	int i = 0;
	int j = 2;
	while (i<3&&j>=0) {
		if (arr[i][j]>input)
		{
			j--;
		}
		else if (arr[i][j] == input) {
			return 1;
		}
		else {
			i++;
		}
	}
	return 0;
}
int main() {
	int  j = 0,input=0,flag=0;
	int arr[3][3] = { 1,2,3,2,3,4,3,4,5};
	printf("请输入你寻找的数字：");
	scanf("%d", &input);
	int flg = Find(arr, input);
	if (flg==1) {
		printf("FIND!");
	}
	else
	{
		printf("NO FIND");
	}
	system("pause");
	return 0;
}