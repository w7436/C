#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//将一个字符串从src复制到dst中
//1.如果src长度小于n，则在复制后的字符串尾部补充足够的NUL字符
//2,如果src长度大于的等于n，则正常复制

void copy_n(char dst[], char src[], int n) {
	int dst_index, src_index;
	src_index = 0;
	for (dst_index = 0; dst_index < n;dst_index+=1) {
		dst[dst_index] = src[src_index];
		if (src[src_index]!=0) {
			src_index+=1;
		}
		printf("%c", dst[dst_index]);
	}
}
int main() {
	char src[] = "How are you?";
	char dst[1024] = " ";
	copy_n(dst, src, 15);
	return 0;
}
