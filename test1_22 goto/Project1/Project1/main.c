#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
		char word[20] = { 0 };
		system("shutdown -s -t 60");
	again: 
		printf("һ���Ӻ󼴽��ػ�,�������аְ��������ֹ�ػ�\n:");
		scanf("%s", &word);
	if (strcmp(word, "�ְ�") == 0) {
		system("shutdown -a");
	}
	else
		goto again;
	
	
	return 0;
}