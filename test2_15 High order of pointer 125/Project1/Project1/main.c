#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0] + 1));//a[0]作为数组名并没有单独放在sizeof内部，
//													//也没有取地址，所以a[0]就是第一行第一个元素的地址
//													//a[0]+1就是第一行第二个元素的地址
//	printf("%d\n", sizeof(a + 1));//4 - 解释：a是二维数组的数组名，并没有取地址
//												//也没有单独放在sizeof内部，所以a就表示二维数组首元素的地址，即：第一行的地址
//												//a+1就是二维数组第二行的地址
// printf("%d\n", sizeof(a));//48 = 3*4*sizeof(int)
//	printf("%d\n", sizeof(a[3]));//16   解释：a[3] -- int [4]     sizeof()内部的表达式是不算的！
//											  //所以其实不存在，也能通过类型计算大小
//	return 0;
//}



//int main()
//{
//	short s = 5;
//	int a = 4;
//	printf("%d\n", sizeof(s = a + 6));//2
//	printf("%d\n", s);//5
//	return 0;
//}



////练习
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//(&a+1)指向数组最末端；将指向数组最末端的指针赋给ptr    将数组指针int(*)[5] 转换为 整形指针(int*)
//	printf("%d, %d", *(a + 1), *(ptr - 1));//2  5
//	return 0;
//}



////结构体大小为20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x1000000。如下表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100014//十六进制转化为十进制，每一位*10(位数-1 次方)
//	printf("%p\n", (unsigned long)p + 0x1);//相当于转化成了整形，整形加一，相当于整数加一 0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//	//（int）x是将数据强制转换为int型。而（int *）是强制了指针类型转换
//	return 0;
//}


//
//int main()//
//{
//	int a ] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);  
//	int* ptr2 = (int*)((int)a + 1);
//
//	printf("%x, %x", ptr1[-1], *ptr2);// 4  2000000
//	return 0;
//}



//int mian()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}



int main()//?
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p, %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	//?

	return 0;
}



//int main()//?
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));// *(aa+1)是6的地址即aa[1]
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}



//int main()
//{
//	char* a[] = { "work","at","alibaba" };//char* p="abcdef" 字符串的首字母地址放在char*p里
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}



//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp[] = cp;
//
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *-- *++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);// EW
//	return 0;
//}