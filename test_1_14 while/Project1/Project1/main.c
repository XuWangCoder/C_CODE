#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//	int ch = 0;
//	//ctrl+z - getchar 就读取结束
//	while ((ch = getchar()) != EOF) {  //EOF为-1；
//		putchar(ch);
//	}
//	return 0;
//}



//int main() {
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//13213424 45fdgg只能拿走空格前面的部分
//	printf("确定密码（Y/N）:>");
//	//清理缓冲区
//	//清理缓冲区中的多个字符如'\n'
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n') {
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//		printf("确认成功\n");
//	else
//		printf("密码错误");
//	
//	return 0;
//}


输出数字0-9
int main() {
	int ch = 0;
	while ((ch = getchar()) != EOF) {
		if (ch < '0' || ch > '9')
			continue;
		else
			putchar(ch);
	}
	return 0;
}