#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*���Ͼ���
��һ����ά����.
�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
�������������в���һ�������Ƿ���ڡ�
ʱ�临�Ӷ�С��O(N);

���飺
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
	printf("��������Ѱ�ҵ����֣�");
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