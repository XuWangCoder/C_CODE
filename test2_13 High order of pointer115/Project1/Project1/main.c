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


////代码2
//void (* signal(int, void(*)(int)))(int);
////1.signal和()先结合，说明signal是函数名
////2.signal函数的第一个参数类型是int，第二个参数类型是函数指针
////该函数指针，指向一个参数为int，返回类型是void的函数
////3.signal函数的返回类型也是一个函数指针
////该函数指针，指向一个参数为int，返回类型是void的函数
////signal是一个函数的声明
////typedef - 对类型进行重定义
//typedef void(*pfun_t)(int);//对void(*)(int)的函数指针类型重命名为pfun_t



////函数指针数组 - 存放函数指针的数组
//// 
////整型指针 int*
////整型指针数组 int* arr[5]
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pfArr[2])(int, int) = { Add,Sub };//pfArr就是函数指针数组 
//	return 0;
//}



////计算器-计算整型变量的加、减、乘、除
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("*****1.加法   2.减法**********\n");
//	printf("*****3.乘法   4.除法**********\n");
//	printf("********0.退出***************\n");
//	printf("*****************************\n");
//
//}
//
//int main()
//{
//	int input;
//	do {
//		menu();
//		int (*pfarr[5])(int, int) = { NULL, Add, Sub, Mul,Div };
//		int x,y,ret;
//		printf("请输入数字：\n");
//		scanf("%d", &input);
//		
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入x y：\n");
//			scanf("%d %d", &x, &y);
//		
//			ret = (pfarr[input])(x, y);
//			printf("结果为：");
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//			break;
//		}
//		else
//			printf("输入错误，请重新输入\n");
//
//	} while (input);
//	return 0;
//} 



//int main()
//{
//	int arr[10];
//	//数组元素类型 - int
//	//arr数组的类型是 int[10]
//	return 0;
//}



////回调函数
////计算器
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("*****1.加法   2.减法**********\n");
//	printf("*****3.乘法   4.除法**********\n");
//	printf("********0.退出***************\n");
//	printf("*****************************\n");
//}
//
//int Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入2个操作数");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}
//
//int main()
//{
//	int input;
//	do {
//		menu();
//		int x,y,ret;
//		printf("请输入数字：\n");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			ret = Calc(Add);
//			printf("ret=%d\n", ret);
//			break;
//		case 2:
//			ret = Calc(Sub);
//			printf("ret=%d\n", ret);
//			break;
//		case 3:
//			ret = Calc(Mul);
//			printf("ret=%d\n", ret);
//			break;
//		case 4:
//			ret = Calc(Div);
//			printf("ret=%d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//		}
//	} while (input);
//	return 0;
//} 



//qsort()函数    需要#include <stdlib.h>
//void qsort(void* base, //base中存放的是待排序数据中第一个对象的地址
//				size_t num, //排序数据元素的个数
//				size_t size, //排序数据中一个元素的大小，单位是字节
//				int (*cmp)(const void* e1, const void* e2)//是用来比较待排序数据中的2个元素的函数
//);

#include <stdlib.h>
#include <string.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;//如何变降序 return *(int*)e2 - *(int*)e1即实现逻辑相反即可
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test1()
{
	//整形数据的排序
	int arr[] = { 9,0,6,2,5,8,4,3,7,1 };
	int sz = sizeof(arr) / sizeof(arr[10]);
	//排序
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	//打印
	print_arr(arr, sz);
}

struct Stu
{
	char name[20];
	int age;
};

int sort_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int sort_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test2()
{
	//使用qsort函数排序结构体数据
	struct Stu s[3] = { {"zhangsan", 30},{"lisi", 34},{"wangwu", 20} };
	//abcq
	//abc
	int sz = sizeof(s) / sizeof(s[0]); 
	//按照年龄来排序
	//qsort(s, sz, sizeof(s[0]), sort_by_age);
	//按照名字来排序
	qsort(s, sz, sizeof(s[0]), sort_by_name);
}

void test3()
{
	//整形数据的排序
	int arr[] = { 9,0,6,2,5,8,4,3,7,1 };
	int sz = sizeof(arr) / sizeof(arr[10]);
	//排序
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	//打印
	print_arr(arr, sz);
}


void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)//每次交换一个字节
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

//模仿qsort实现一个冒泡排序的通用算法
void bubble_sort(void* base, 
							int sz,
							int width,
							int (*cmp)(const void*e1, const void*e2)
							)
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//一趟的排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素比较
			//arr[j] arr[j+1]
			if (cmp((char*)base+j*width, (char*)base+(j+1)*width ) > 0)
			{
				//交换
				Swap((char*)base+j*width, (char*)base+(j+1)*width, width);
			}
		}
	}
}

int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}