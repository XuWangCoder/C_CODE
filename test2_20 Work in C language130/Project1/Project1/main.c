#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ�����
////���д�����������ľ����в���ĳ�������Ƿ����
////Ҫ��ʱ�临�Ӷ�С��O��N�������Ĳ��Ҵ������ܳ���N��
////O��1�����Ҵ���Ϊ���� - 5 7 8
//int find_num(int arr[3][3], int* px, int* py, int k)
//{
//	int x = 0;
//	int y = *py- 1;
//	while (x<*px&&y>=0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px=x;
//			*py = y;
//			return 1;//�ҵ���
//		}
//	}
//	return 0;//�Ҳ���
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };//N - ���ҵĴ�������������N��
//	int k = 7;
//	//����ҵ�����1���Ҳ�������0
//	int x = 3;//��
//	int y = 3;//��
//	//&x, &y
//	//1. �������
//	//2. ����ֵ
//
//	int ret =find_num(arr, &x, &y, k);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("�±��ǣ�%d %d\n", x, y);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	//����һ�����֣������ң�7
//	return 0;
//}



////�ַ���������ʵ��һ�����������������ַ����е�k���ַ�
////���磺
////ABCD����һ���ַ��õ�BCDA
////ABCD���������ַ��õ�CDAB
////����һ��
//void string_left_rotate(char* str, int k)
//{
//	int i = 0;
//	int n = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		//ÿ������תһ���ַ�
//		char tmp = *str;//1
//		//2.�����n-1���ַ���ǰ��Ų��
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3.tmp�������
//		*(str+n-1) = tmp;
//	}
//}
//
//int main()
//{
//	char arr[10] ="ABCDEF";
//	int k = 2;
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//
//	return 0;
//}

////������
//#include <assert.h>
////������ת��
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void string_left_rotate(char* str, int k)
//{
//	int n = strlen(str);
//	reverse(str,str+k-1);//��
//	reverse(str+k,str+n-1);//��
//	reverse(str,str+n-1);//����
//}
//
//int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 3;
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//
//	return 0;
//}



////дһ�������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
////���磺����s1=AABCD��s2=BCDAA������1
////����s1=abcd��s2=ACBD,����0
//#include <string.h>
//int is_string_rotate(char* str1, char* str2)
//{
//	//���Ȳ���ȣ��϶�������ת�õ���
//	if ( strlen(str1) != strlen(str2))
//	{
//		return 0;
//	}
//
//	//1. str1�ַ����ĺ��׷��һ��str1
//	//AABCDAABCD
//	int len = strlen(str1);
//	strncat(str1, str1, len);
//	//2.�ж�str2�Ƿ�Ϊstr1���ִ�
//	char* ret = strstr(str1, str2);
//
//	return ret != NULL;
//	/*if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}*/
//}
//
//int main()
//{
//	char arr1[20] = "AABCD";
//	char arr2[] = "BCDAA";
//	int ret = is_string_rotate(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}
