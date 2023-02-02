#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
		char word[20] = { 0 };
		system("shutdown -s -t 60");
	again: 
		printf("一分钟后即将关机,如果输入叫爸爸则可以中止关机\n:");
		scanf("%s", &word);
	if (strcmp(word, "爸爸") == 0) {
		system("shutdown -a");
	}
	else
		goto again;
	
	
	return 0;
}