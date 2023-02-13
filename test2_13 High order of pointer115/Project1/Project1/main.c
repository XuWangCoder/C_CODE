#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////一级指针传参
//void test(char* p)
//{
//
//}
//
//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));//遍历数组
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//p是一级指针
//	print(p, sz);
//	char ch = 'w';
//	char* p1 = &ch;
//	test(&ch);//char*
//	return 0;
//}



////二级指针传参
//void test(int** p2)
//{
//	**p2 = 20;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一级指针
//	int** ppa = &pa;//ppa是二级指针
//	//把二级指针进行传参？
//	test(ppa);
//	test(&pa);//传一级指针变量的地址
//	int* arr[10] = { 0 };
//	test(arr);//传存放一级指针的数组
// int arr[10]={0};
// int (*parr)[10]=&arr;//取出数组的地址
// parr 是指向数组的指针 - 存放的是数组的地址
//	printf("%d", a);
//	return 0;
//}





////函数指针 - 存放函数地址的指针
////&函数名 - 取到的就是函数的地址
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//pf就是一个函数指针变量
//	//int (*pf)(int, int) = &Add;
//	int (*pf)(int, int) = Add;//Add == pf 
//	int ret = (*pf)(3, 5);//1
//	int ret = pf(3, 5);//2
//	int ret = Add(3, 5);//3
//	printf("%p\n", &Add);
//	printf("%p", Add);
//	return 0;
//}


//代码1
//int main()
//{
//	(*(void(*)())0) ();
//	//调用0地址处的函数
//	//该函数无参，返回类型是void
//	//1. void(*)（） -  函数指针类型
//	//2. (void(*)()) 0  -  对0进行强制类型转换，转换为一个函数的地址
//	//3. *(void(*)())0 - 对0地址进行了解引用操作
//	//4. (*(void(*)())0)() - 调用0地址处的函数
//	//《c陷阱和缺陷》
//	return 0;
//}


//代码2
void (* signal(int, void(*)(int)))(int);
//1.signal和()先结合，说明signal是函数名
//2.signal函数的第一个参数类型是int，第二个参数类型是函数指针
//该函数指针，指向一个参数为int，返回类型是void的函数
//3.signal函数的返回类型也是一个函数指针
//该函数指针，指向一个参数为int，返回类型是void的函数
//signal是一个函数的声明
//typedef - 对类型进行重定义
typedef void(*pfun_t)(int);//对void(*)(int)的函数指针类型重命名为pfun_t



//函数指针数组 - 存放函数指针的数组
// 
//整型指针 int*
//整型指针数组 int* arr[5]
int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int main()
{
	int (*pf1)(int, int) = Add;
	int (*pf2)(int, int) = Sub;
	int (*pfArr[2])(int, int) = { Add,Sub };//pfArr就是函数指针数组 
	return 0;
}


