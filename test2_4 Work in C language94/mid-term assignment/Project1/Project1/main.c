#define _CRT_SECURE_NO_WARNINGS 1

//��a��b����С������
// ����һ��
//int f1(int a, int b)
//{
//	int i = 0;
//	if (a >= b) {
//		for (i = 2; i<b+1 ; i++)
//		{
//			if ( (a % i == 0 )&&( b % i ==0))
//			{
//				return  a*b/i;
//				break;
//			}
//		}
//	}
//	if (a < b) {
//		for (i = 2; i < a+1; i++)
//		{
//			if ( (a % i == 0) && (b % i == 0))
//			{
//				return  a*b/i;
//				break;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", f1(a, b));
//	return 0;
//}

//������
//int f1(int a, int b)
//{
//	int m = a > b ? a : b;
//	while (1)
//	{
//		if ((m % a == 0) && (m % b == 0))
//		{
//			break;
//		}
//		m++;
//	}
//	return m;
//}

//������
//int f1(int a, int b)
//{
//	int i = 1;
//	for (i = 1; ; i++)
//	{
//		if (a * i % b == 0)
//		{
//			return a * i;
//			break;
//		}
//	}
//}



//��һ�仰�ĵ��ʵ��ã���㲻���á��磺����i like Beijing.   ���beijing. like i
//#include <stdio.h>
//#include <string.h>
//void reverse(char* left, char* right)
//{
//	char tem = 0;
//	while (right>left)
//	{
//		tem = *right;
//		*right = *left;
//		*left = tem;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[100] = {0};
//	gets(arr);
//	int len = strlen(arr);
//	reverse(arr, arr+len-1);
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		while ((*end != ' ' )&&( *end != '\0'))
//		{
//			end++;
//		}
//	reverse(start,end-1);
//	if (*end == ' ')
//		start = end + 1;
//	else
//		start= end;
//	}
//	
//	printf("%s", arr);
//	return 0;
//}



//��һ�仰�ĵ��ʵ��ã���㲻���á��磺����i like Beijing.   ���beijing. like i
#include <stdio.h>
#include <string.h>
void reverse(char* left, char* right)
{
	char tem = 0;
	while (right > left)
	{
		tem = *left;
		*left = *right;
		*right = tem;
		right--;
		left++;
	}
}

int main()
{
	char arr[100] = { 0 };
	gets(arr);
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while ((*end != ' ' )&& (*end != '\0'))
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}
	printf("%s", arr);
	return 0;
}