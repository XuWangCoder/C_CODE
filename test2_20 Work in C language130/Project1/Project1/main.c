#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
////请编写程序在这样的矩阵中查找某个数字是否存在
////要求：时间复杂度小于O（N）（最大的查找次数不能超过N）
////O（1）查找次数为常数 - 5 7 8
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
//			return 1;//找到了
//		}
//	}
//	return 0;//找不到
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };//N - 查找的次数最坏的情况下是N次
//	int k = 7;
//	//如果找到返回1，找不到返回0
//	int x = 3;//行
//	int y = 3;//列
//	//&x, &y
//	//1. 传入参数
//	//2. 带回值
//
//	int ret =find_num(arr, &x, &y, k);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是：%d %d\n", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	//查找一个数字，比如找：7
//	return 0;
//}



////字符串左旋：实现一个函数，可以左旋字符串中的k个字符
////例如：
////ABCD左旋一个字符得到BCDA
////ABCD左旋两个字符得到CDAB
////方法一：
//void string_left_rotate(char* str, int k)
//{
//	int i = 0;
//	int n = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		//每次左旋转一个字符
//		char tmp = *str;//1
//		//2.后面的n-1个字符往前面挪动
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3.tmp放在最后
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

////方法二
//#include <assert.h>
////三步反转法
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
//	reverse(str,str+k-1);//左
//	reverse(str+k,str+n-1);//右
//	reverse(str,str+n-1);//整体
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



////写一个函数判断一个字符串是否为另外一个字符串旋转之后的字符串
////例如：给定s1=AABCD和s2=BCDAA，返回1
////给定s1=abcd和s2=ACBD,返回0
//#include <string.h>
//int is_string_rotate(char* str1, char* str2)
//{
//	//长度不相等，肯定不是旋转得到的
//	if ( strlen(str1) != strlen(str2))
//	{
//		return 0;
//	}
//
//	//1. str1字符串的后边追加一个str1
//	//AABCDAABCD
//	int len = strlen(str1);
//	strncat(str1, str1, len);
//	//2.判断str2是否为str1的字串
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
