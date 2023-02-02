#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Add(int*p)
{
	 (*p)++;
}

int main()
{
	int num = 0;
	Add(&num);
	printf("%d ", num);//1

	Add(&num);
	printf("%d ", num);//2

	Add(&num);
	printf("%d ", num);//3

	return 0;
}



//函数的嵌套调用和链式访问

//链式访问
#include <string.h>
//int main()
//{
//	char arr1[20] = {0};
//	char arr2[] = "bit";
//	printf("%s ", strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}


//int Add(int , int);函数的声明
	  

//导入静态库
//#pragma comment (lib, "sub.lib")




//函数的递归
//
//int main()
//{
//	unsigned int num;
//	scanf("%d", &num);
//	print(num);
//	
//	return 0;  
//}
//
//void print(unsigned int num)
//{
//	
//	if(num>9)
//	{
//		print(num/ 10);
//	}
//	printf("%d ", num%10);
//}

//int my_strlen(char* arr)
//{
//	if(  *arr != '\0')
//	{
//		return 1 + my_strlen(arr+1);
//	}
//	else
//	return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//
//	printf("%d", my_strlen(arr));
//
//	return 0;
//}



////函数的递归与嵌套  求n的阶乘
//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//		return n * Fac(n - 1);
//}
//
//int main()
//{
//	int n=0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d ", ret);
//	return 0;
//}



//求第n个菲波那切数列
//方法一：递归可以求解，但是效率太低
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n" ,F(n));
//	printf("count=%d\n", count);
//	return 0;
//}
//int count = 0;
//int F(int n)
//{
//	//统计第3个斐波那契数的计算机次数
//	if (n == 3)
//		count++;
//	
//	if(n>2)
//	{
//		return  F(n - 1) + F(n - 2);
//	}
//	return 1;
//}



//求第n个菲波那切数列
//方法二：效率高
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n" ,F(n));
//	return 0;
//}
//
//int F(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;	
//	}
//	return c;
//}



//汉诺塔
//青蛙跳台阶

