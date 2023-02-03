#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//指针类型的意义
//1.指针类型决定了：指针解引用的权限有多大
//2.指针类型决定了，指针走一步，能走多远（步长）
//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;//①char指针内存里每次只走一个字节②int指针内存里每次走四个字节
//	}
//}



 //野指针
//1.指针未初始化
//2.指针越界访问
//3.指针指向的空间释放

//如何避免野指针
//1.指针初始化        int* p= NULL;
//2.小心指针越界
//3.指针指向空间释放即使置NULL
//4.指针使用之前检查有效性 : 不能使用空指针



//指针运算
//指针+-整数
//指针-指针
//指针的关系运算

//int my_strlen(char* str)
//{
//	char* start = str;
//	while(*str!='\0') 
//		{
//		str++;
//		}
//	return str-start;
//}
//
//int main( )
//{
//	int len = my_strlen("abc");
//	printf("%d", len);
//	return 0;
//}


#define N_VALUES 5
float values[N_VALUES];
float* vp;
//指针加减整数；指针的关系运算
int main()
{
	for (vp = &values[0]; vp <&values[N_VALUES]; )
	{
		*vp++ = 0;
	}
}	



//数组与指针
//arr[2]==2[arr]==*(arr+2)
//p[2]==*(p+2)



//二级指针
//int a =10;
//int *pa = &a;
//int **ppa = &pa; a的地址存放在pa中，pa的地址存放在paa中。pa是一级指针，而paa是二级指针。