#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�����Ӵ�pos1Ų��pos2
void Move(char pos1, char pos2) {
	printf("%c->%c\n", pos1, pos2);
}
//n=1 A->C  
//n=2 A->B A->C B->C
//n=3 A->C A->B C->B A->C B->A B->C A->C
//n������������pos1�������ӵ����λ�ã�pos2���������֧������pos3�������յ�Ŀ�ĵ�
void Hannota(int n,char pos1,char pos2,char pos3) {
	if (n==1) {
		Move(pos1,pos3);
	}
	else{
		Hannota(n - 1, pos1, pos3, pos2);//��n-1�����Ӵ�A��CŲ��B
		Move(pos1, pos3);//����n�����Ӵ�AŲ��C
		Hannota(n - 1, pos2, pos1, pos3);//����n-1�����Ӵ�B��AŲ��C
	}
}
int main() {
	Hannota(3, 'A', 'B', 'C');
	return 0;
}