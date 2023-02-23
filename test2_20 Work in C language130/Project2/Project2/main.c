#define _CRT_SECURE_NO_WARNINGS 1
//放在代码第一行
#include <stdio.h>
//int main()
//{
//
//	//printf("比特\n");
//	//printf("hehe\n");
//	//printf("%d\n", 100);//打印一个整数-%d
//	//sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间的大小
//	//sizeof单位是字节 byte=8bit比特位
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int main() {
//	int age = 20;
//	double weight = 75.3;
//
//	age = age + 1;
//	weight = weight - 10;
//		printf("%d\n", age);
//		printf("%lf\n", weight);
//	return 0;
//}
//%d - 整形
//%f - float
//%lf - double


//全局变量 - {}外部定义的
//int a = 100;
//int main()
//{
////局部变量- {}内部定义的
////当局部变量和全局变量名字冲突的情况下，局部优先
////不建议把全局变量和局部变量的名字写成一样
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//
//}



//写一个代码求2个整数的和
//scanf函数是输入函数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b); 
//	sum = a + b;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1, 2,  3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}


//
//int main()
//{
//	float a = 9/2.0;
//	int b = 9 / 2;
//	printf("%f\n", a);//4.50000
//	printf("%d\n", b);//4
//	return 0;
//}


//int main()
//{
//
//	int a = 10;//0为假非0为真
//	printf("%d", !a);
//	if(a)
//	{//如果a为真，做事
//	}
//	if(!a)
//	{//如果a为假，做事
//	}
//}



int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//计算的数组的总大小单位是字节
	printf("%d\n", sizeof(arr[0]));
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);


	return 0;
}