#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//����������������
//�ֲ������������򣺾��Ǳ������ڵľֲ���Χ
//ȫ�ֱ�������������������

//int g_val = 2021;//ȫ�ֱ���
//
//int main()
//{
//	printf("1:%d\n", g_val);
//	printf("hehe\n");
//
//	{
//		printf("2:%d\n", g_val);
//		int a = 10;
//		printf("a = %d\n", a);
//		
//
//	}
//	printf("3:%d\n", g_val);
//
//
//
//	return 0;
//}


////����һ�±���
//extern int g_val;
//
//int main()
//{
//	printf("%d\n" ,  g_val);
//	return 0;
//}


//1.const���εĳ�����
//int main()
//{
// const int num = 10;//num�ǳ����� - ���г����ԣ����ܱ��ı䣩
//num = 20;
//printf("num = %d/n", num);
//return 0;
//}


//2.#define����ı�ʶ������
//#define MAX 10000
//int main() {
//
//	int n = MAX;
//		printf("n = %d\n", n);
//		return 0;
//}

//
////3.ö�ٳ���
////����һһ�оٵĳ���
////�Ա�
//enum Sex
//{
//	//����ö�����͵ı�����δ������ȡֵ
//	//ö�ٱ���
//	MALE = 3,//����ֵ
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//
//	return 0;
//}


//�ַ�������һ���ַ� - ��˫������������һ���ַ�

#include <string.h>
int main()
{
	//�ַ����� - ������һ����ͬ���͵�Ԫ��
	//�ַ����ڽ�β��λ��������һ��\0���ַ�
	//\0���ַ����Ľ�����־
	char arr[] = "hello";
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c' };

	////���ַ�������
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));



	//int len = strlen("abc");//string length
	//printf("%d\n", len);

	////��ӡ�ַ���
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);



	return 0;
}