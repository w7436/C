#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#if 0
/* 
1.
дһ���������ز����������� 1 �ĸ���
���磺 15 0000 1111 4 �� 1
����ԭ�ͣ�
int count_one_bits(unsigned int value)
{

}
*/

int count_one_bits(unsigned int value)
{
	int count = 0;//����
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
	//λ����
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
	printf("����������");
	scanf("%d", &value);
	count_one_bits(value);
	printf("%d\n", count_one_bits(value));
	system("pause");
	return 0;
}

#endif





#if 0
//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
void Fun(char num) {
	int i = 0;
	int flg = 0;
	if (flg==0) {
		printf("����λ��");
		for (i = 7; i >= 1; i -= 2) {
			printf("%d", num >> i & 1); //ż��λ
		}
	}
	flg = 1;
	printf("\n");
	if (flg==1) {
		printf("ż��λ��");
		for (i = 6; i >= 0; i -= 2) {
			printf("%d", num >> i & 1);//����λ
		}
		printf("\n");
	}
}
int main()
{
	char num = 0;
	printf("��������Ҫ��������֣�");
	scanf("%d", &num);
	Fun(num);
	system("pause");
	return 0;
}
#endif


#if 0
/*3. ���һ��������ÿһλ��
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
	printf("����������:");
	scanf("%d", &num);
	display(num);
	system("pause");
	return 0;
}
#endif


#if 0
//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//��������:
//1999 2299
//�������:7

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
	printf("��������λ���֣�");
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
5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
Aѡ��˵��B�ڶ����ҵ�����
Bѡ��˵���ҵڶ���E���ģ�
Cѡ��˵���ҵ�һ��D�ڶ���
Dѡ��˵��C����ҵ�����
Eѡ��˵���ҵ��ģ�A��һ��
����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�*/
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
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4����
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
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
//3.����Ļ�ϴ�ӡ������ǡ�
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
//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
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
	printf("���������֣�");
	scanf("%d", &value);
	printf("%u", reverse_bit( value));
	system("pause");
	return 0;
}

#endif


#if 0
//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
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
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ�
//�����������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
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
//��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����
//	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
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
