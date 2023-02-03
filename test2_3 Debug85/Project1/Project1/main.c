#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for(i=0;i<len;i++)
//	{
//		arr[i] = i + 1;
//	}
//	for(i=0;i<len;i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}



//void test2()
//{
//
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}



//i和arr是局部变量
//局部变量是放在栈区
//
//栈区内存的使用习惯是：
//先使用高地址空间，再使用低地址空间
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	for(i=0;i<=12;i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
	//代码运行的结果是什么？
//	return 0;
//}



void my_strcpy(char*arr1, char*arr2)
{
	while (*arr1++ = *arr2++) ; //‘\0'等于0,又使得循环停止。
}
int main()
{
	char arr1 []= "XXXXXXXXXXX";
	char arr2 []= "hello";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}