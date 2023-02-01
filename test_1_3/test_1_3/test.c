#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = a++;//先使用后++
//	printf("%d\n", b);//10
//	printf("%d\n", a);//11
//	//int b = ++a;//先++后使用
//	//printf("%d\n", b);//11
//	//printf("%d\n", a);//11
//	return 0;
//}



//int main()
//{//强制类型转换
//	int a = (int)3.14;
//	printf("%d", a);
//	return 0;
//}


//int main()
//{
//	//int a = 3;
//	//int b = 5;
//	//int c = a && b;
//	//printf("%d\n", c);//1为真
//	int a = 0;
//	int b = 0;
//	int c = a || b;
//	printf("%d\n", c);//0为假
//	return 0;
//}


//
//int main()
//{
//	int a = 3;
//	int b = 6;
//	int MAX = a > b ? a : b;
//	printf("%d\n", MAX);
//	return 0;
//}



//int main()
//{
//	int a = 3;
//	int b = 4;
//	int c = 1;
//	int d = (a = b + 2, b = c - 3, c = b + a);//4 逗号表达式从左至右依次计算
//	printf("%d\n", d);
//	return 0;
//}


//typedef unsigned int u_int;
//int main()
//{
//	unsigned int a = 100;
//	u_int b = 100;
//	return 0;
//}


void test()
{
	int a = 1;
	a++;
	printf("%d", a);
}
int mian()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}
