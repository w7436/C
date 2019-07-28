#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//青蛙有两种跳法：1.一次跳一阶2.一次跳两阶
//n代表台阶数
//n=1    1
//n=2   2
//n=3   3
//n=4   5
//非递归
int JumpFloor(int n) {
	if (n==1) {
		return 1;
	}
	else if (n==2) {
		return 2;
	}
	int f1 = 1;
	int f2 = 2;
	int f3 = 0;
	for (int i = 3; i <= n;i++) {
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	return f3;
}
//递归
int JumpFloor1(int n) {
	if (n==1) {
		return 1;
	}
	else if (n==2) {
		return 2;
	}
	else{
		return JumpFloor1(n - 1) + JumpFloor1(n - 2);
	}
}
int main() {
	printf("%d\n", JumpFloor(4));
	printf("%d\n", JumpFloor(4));
	return 0;
}