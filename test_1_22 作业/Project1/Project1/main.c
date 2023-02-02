#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//打印100-200以内的质数
int main() {
	int i = 0;
	
	int count = 0;
	for (i = 100; i <= 200;i++) {
		int j = 0;             //定义变量需要紧跟着下面使用的函数
		int flag = 1;        //定义变量需要紧跟着下面使用的函数
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1) {
			count++;
			printf("%d ", i);
			}
		
		
	}
	printf("\ncount=%d\n", count);
	return 0;
}