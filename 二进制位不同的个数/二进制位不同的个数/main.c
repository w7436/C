#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//��������:
//1999 2299
//�������:7

int dif(int num1, int num2) {
	int i = 0;
	int count = 0;
	int tmp;
	tmp = num1 ^ num2;
	for (; i < 32; i++) {
		if ((tmp >> i) & 1 == 1) {
			count++;
		}
	}
	return count;

}
int main()
{
	int num1, num2;
	printf("��������λ���֣�");
	scanf("%d %d", &num1, &num2);
	printf("%d\n", dif(num1, num2));
	system("pause");
	return 0;
}