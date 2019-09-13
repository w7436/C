#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#if 0
/* 
1.
写一个函数返回参数二进制中 1 的个数
比如： 15 0000 1111 4 个 1
程序原型：
int count_one_bits(unsigned int value)
{

}
*/

int count_one_bits(unsigned int value)
{
	int count = 0;//计数
	//	  0000 0111    7
	//&0000 0110    6
	//  0000 0110    6
	//&0000 0101    5
	//  0000 0100    4
	//&0000 0011    3
	//  0000 0000    0
	while (value!=0)
	{
		count++;
		value = value & (value - 1);
	}
	/*while (value!=0) {

		if (value%2==1) {
			count++;
		}
		value /= 2;
	}*/
	//位操作
	/*for (int i = 0; i <32;i++) {
		if ((value>>i)&1!=0) {
			count++;
		}
	}*/
	return count;
}
int main()
{	
	int value;
	printf("请输入数：");
	scanf("%d", &value);
	count_one_bits(value);
	printf("%d\n", count_one_bits(value));
	system("pause");
	return 0;
}

#endif





#if 0
//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
void Fun(char num) {
	int i = 0;
	int flg = 0;
	if (flg==0) {
		printf("奇数位：");
		for (i = 7; i >= 1; i -= 2) {
			printf("%d", num >> i & 1); //偶数位
		}
	}
	flg = 1;
	printf("\n");
	if (flg==1) {
		printf("偶数位：");
		for (i = 6; i >= 0; i -= 2) {
			printf("%d", num >> i & 1);//奇数位
		}
		printf("\n");
	}
}
int main()
{
	char num = 0;
	printf("请输入需要计算的数字：");
	scanf("%d", &num);
	Fun(num);
	system("pause");
	return 0;
}
#endif


#if 0
/*3. 输出一个整数的每一位。
*/
void display(int num) {
	/*while (num!=0)
	{	
		printf("% d", num % 10);
		num /= 10;
	}*/
	if (num > 9) {
		display(num / 10);
	}
	printf("%d", num % 10);
}
int main()
{
	int num;
	printf("请输入数字:");
	scanf("%d", &num);
	display(num);
	system("pause");
	return 0;
}
#endif


#if 0
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子:
//1999 2299
//输出例子:7

int dif(int num1, int num2) {
	int count = 0;
	int i;
	int tmp = num1 ^ num2;
	/*for (i = 0; i < 32;i++) {
		if ((tmp>>i)&1==1) {
			count++;
		}
	}*/
	while (tmp!=0)
	{
		count++;
		tmp = tmp & (tmp-1);
	}
	return count;
}
int main()
{
	int num1, num2;
	printf("请输入两位数字：");
	scanf("%d %d", &num1, &num2);
	printf("%d\n", dif(num1, num2));
	system("pause");
	return 0;
}
#endif


#if 0
int main()
{
	/*1.
5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
A选手说：B第二，我第三；
B选手说：我第二，E第四；
C选手说：我第一，D第二；
D选手说：C最后，我第三；
E选手说：我第四，A第一；
比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。*/
	int a, b, c, d, e;
	for (a = 1; a <= 5; a++) {
		for (b = 1; b <= 5; b++) {
			for (c = 1; c <= 5; c++) {
				for (d = 1; d <= 5; d++) {
					for (e = 1; e <= 5; e++) {
						if ((b == 2) ^ (a == 3) != 0 && \
							(b == 2) ^ (e == 4) != 0 && \
							(c == 1) ^ (d == 2) != 0 && \
							(c == 5) ^ (d == 3) != 0 && \
							(e == 4) ^ (a == 1) != 0) {
							if (a*b*c*d*e==120) {
								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}
#endif

#if 0
//2.
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个。
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
int main() {
	int murder = 0;
	for (murder = 'A'; murder <= 'D';murder++) {
		if ((murder!='A')+(murder=='C')+(murder=='D')+(murder!='D')==3) {
			printf("%c\n", murder);
		}
	}
	system("pause");
	return	0;
}
#endif



#if 0
//3.在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1 

void Show(int(*arr)[10]) {
	int i = 0, j = 0;
	for (i = 0; i < 10; i++) {
		arr[i][j] = 1;
		printf("%-3d", arr[i][j]);
		for (j = 1; j <= i; j++) {
			printf(" ");
			if (i == j) {
				arr[i][j] = 1;
				printf("%-3d", arr[i][j]);
			}
			else {
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
				printf("%-3d", arr[i][j]);
			}
		}
		printf("\n");
		j = 0;

	}
}
int main()
{
	int arr[10][10] = { 0 };
	Show(arr);
	system("pause");
	return 0;
}

#endif


#if 0
//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值是value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
//
unsigned int reverse_bit(unsigned int value){
	int i = 0;
	unsigned int sum = 0;
	for (i = 0; i < 32; i++) {
		sum += ((value >> i) & 1)*pow((double)2, 31- i);
	}
	return sum;
}
int main()
{	
	unsigned int value = 0;
	printf("请输入数字：");
	scanf("%d", &value);
	printf("%u", reverse_bit( value));
	system("pause");
	return 0;
}

#endif


#if 0
//2.不使用（a + b） / 2这种方式，求两个数的平均值。
int Avg(int a, int b) {
	int sum = 0;
	sum = ((a&b) + (a^b) >> 1);
}
int main(){
	int a = 2;
	int b = 4;
	printf("%d", Avg(a,b));
	system("pause");
	return 0;
}
#endif


#if 0
//
//3.编程实现：
//一组数据中只有一个数字出现了一次。
//其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
int Search(int arr[], int len) {
	int i, tmp = 0;
	for (i = 0; i < len; i++) {
		tmp ^= arr[i];
	}
	return tmp;
}
int  main() {
	int arr[5] = { 1,2,3,1,2 };
	printf("%d\n", Search(arr,5));
	system("pause");
	return 0;
}
#endif

//
//4.
//有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）。
int strlen( char* arr)
{
	int count = 0;
	while (*arr++!='\0')
	{
		count++;
	}
	return count;
}
void reserve(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void reserve_buf(char arr[])
{
	int len = strlen(arr);
	char* start = arr;
	char* end = arr;
	reserve(start, arr + len - 1);			//i ma a tneduts
	while (*end != '\0')
	{
		while (*end != ' '&&*end != '\0')
		{
			end++;
		}
		end--;
		reserve(start, end);//i am a student
		if (*(end + 1) != '\0')
		{
			end = end + 2;
			start = end;
		}
		else
			end++;
	}
}
int main()
{
	char arr[] = "student a am i";
	reserve_buf(arr);
	printf("%s", arr);
	system("pause");
	return 0;
}
