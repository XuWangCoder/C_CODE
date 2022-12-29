#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//作用域与生命周期
//局部变量的作用域：就是变量所在的局部范围
//全局变量的作用域：整个工程

//int g_val = 2021;//全局变量
//
//int main()
//{
//	printf("1:%d\n", g_val);
//	printf("hehe\n");
//
//	{
//		printf("2:%d\n", g_val);
//		int a = 10;
//		printf("a = %d\n", a);
//		
//
//	}
//	printf("3:%d\n", g_val);
//
//
//
//	return 0;
//}


////声明一下变量
//extern int g_val;
//
//int main()
//{
//	printf("%d\n" ,  g_val);
//	return 0;
//}


//1.const修饰的常变量
//int main()
//{
// const int num = 10;//num是常变量 - 具有常属性（不能被改变）
//num = 20;
//printf("num = %d/n", num);
//return 0;
//}


//2.#define定义的标识符常量
//#define MAX 10000
//int main() {
//
//	int n = MAX;
//		printf("n = %d\n", n);
//		return 0;
//}

//
////3.枚举常量
////可以一一列举的常量
////性别
//enum Sex
//{
//	//这种枚举类型的变量的未来可能取值
//	//枚举变量
//	MALE = 3,//赋初值
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//
//	return 0;
//}


//字符串就是一串字符 - 用双引号括起来的一串字符

#include <string.h>
int main()
{
	//字符数组 - 数组是一组形同类型的元素
	//字符串在结尾的位置隐藏了一个\0的字符
	//\0是字符串的结束标志
	char arr[] = "hello";
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c' };

	////求字符串长度
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));



	//int len = strlen("abc");//string length
	//printf("%d\n", len);

	////打印字符串
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);



	return 0;
}