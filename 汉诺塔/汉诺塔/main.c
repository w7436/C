#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//将盘子从pos1挪到pos2
void Move(char pos1, char pos2) {
	printf("%c->%c\n", pos1, pos2);
}
//n=1 A->C  
//n=2 A->B A->C B->C
//n=3 A->C A->B C->B A->C B->A B->C A->C
//n代表盘子数，pos1代表盘子的最初位置，pos2代表借助的支架数，pos3代表最终的目的地
void Hannota(int n,char pos1,char pos2,char pos3) {
	if (n==1) {
		Move(pos1,pos3);
	}
	else{
		Hannota(n - 1, pos1, pos3, pos2);//将n-1个盘子从A经C挪到B
		Move(pos1, pos3);//将第n个盘子从A挪到C
		Hannota(n - 1, pos2, pos1, pos3);//将第n-1个盘子从B经A挪到C
	}
}
int main() {
	Hannota(3, 'A', 'B', 'C');
	return 0;
}