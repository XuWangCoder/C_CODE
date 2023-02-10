#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char str1[] = "hello bit. ";
//	char str2[] = "hello bit. ";
//	const char* str3 = "hello bit. ";//常量字符串
//	const char* str4 = "hello bit. ";//常量字符串
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}



//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j= 0; j < 5; j++)
//		{
//			//printf("%d ", *(arr[i] + j));
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



////数组指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//	double* d[5];
//	double* (*pd)[5] = &d;//pd 就是一个数组指针
//
//	//int arr[10] ={1,2,3,4,5};
//	//int (*parr)[10]=&arr;//取出的是数组的地址
//
//	//parr 就是一个数组指针 - 其中存放的是数组的地址
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//
//	int* p1  = arr;
//	int (*p2)[10] = &arr;
//
//	printf("%p\n", p1);	
//	printf("%p\n", p1+1);//跳四个字节
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);//跳四十个字节
//
//	return 0;
//}

//数组名是数组首元素的地址
//但是有两个例外：
//1. sizeof（数组名）- 数组名表示整个数组，计算的是整个数组大小，单位是字节
//2. &数组名 - 数组名表示整个数组，取出的是整个数组的地址



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa) + i));
//	}
//	return 0;
//}
//
//
//
////P是一个数组指针
//void print2(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));//打印出全部的二维数组
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print2(arr, 3, 5);//arr数组名，表示首元素的地址
//	return 0;
//}



//一维数组传参
void test(int arr[])//ok?
{}
void test(int arr[10])//ok?
{}
void test(int *arr)//ok?
{}
void test2(int *arr[20])//ok?
{}
void test2(int **arr)//ok?
{}
int main()
{
	int arr[10] = { 0 };
	int* arr2[20] = { 0 };
	test(arr);
	test2(arr2);
}

//二维数组传参
void test(int arr[][5])
{}
void test2(int (*arr)[5])
{}
int main()
{
	int arr[10] = { 0 };
	int* arr2[20] = { 0 };
	test(arr);
	test2(arr2);
}