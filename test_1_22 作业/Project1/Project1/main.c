#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��ӡ100-200���ڵ�����
int main() {
	int i = 0;
	
	int count = 0;
	for (i = 100; i <= 200;i++) {
		int j = 0;             //���������Ҫ����������ʹ�õĺ���
		int flag = 1;        //���������Ҫ����������ʹ�õĺ���
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