#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//	int ch = 0;
//	//ctrl+z - getchar �Ͷ�ȡ����
//	while ((ch = getchar()) != EOF) {  //EOFΪ-1��
//		putchar(ch);
//	}
//	return 0;
//}



//int main() {
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//13213424 45fdggֻ�����߿ո�ǰ��Ĳ���
//	printf("ȷ�����루Y/N��:>");
//	//��������
//	//���������еĶ���ַ���'\n'
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n') {
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("�������");
//	
//	return 0;
//}


�������0-9
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