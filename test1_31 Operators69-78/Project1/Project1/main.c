#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
	//float a = 6 / 5;//1.00000
	//float b = 6 / 5.0;//1.20000其中一个要是浮点数，才能执行保留小数的除法


	//按位与 - &
	//int a = 3;
	//int b = 5;
	//int c = a & b;//c: 00000000000000000000000000000001=十进制：1
	//a: 00000000000000000000000000000011
	//b: 00000000000000000000000000000101
	//c: 00000000000000000000000000000001

	//按位或 - | 
	//int a = 3;
	//int b = 5;  
	//int c = a | b;//c: 00000000000000000000000000000111=十进制：7
	//a: 00000000000000000000000000000011
	//b: 00000000000000000000000000000101
	//c: 00000000000000000000000000000111

	//按位异或 - ^
	// 对应的二进制位进行异或
	// 规则：相同为0，相异为1
	//int a = 3;
	//int b = 5;
	//int c = a ^ b;//c: 00000000000000000000000000000111=十进制：6
	//a: 00000000000000000000000000000011
	//b: 00000000000000000000000000000101
	//c: 00000000000000000000000000000110


	//1.算术右移：右边丢弃，左边补原符号位
	//2.逻辑右移：右移丢弃，左边补0
	//负数存放在内存中，存放的是二进制的补码
//	int a =13;
//	int c = 0;
//	int i=0 ;
//	int count = 0;
//	for (i = 0; i < 32;i++)
//	{
//		if (1 == 1& (a >> i))
//		{
//			count++;
//		}
//	}
//	printf("%d", count);


	//short s = 5;
	//int a = 10;
	//printf("%d\n", sizeof(s = a + 2));//2 sizeof括号中的表达式不参与计算
	//printf("%d\n", s);//5

	//int a = (int)3.14;//强制类型转换
	//printf("%d", a);


	// &&左边为假以后，后面就不用再去运算
	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;
	//printf("a =%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);//1 2 3 4

	// || ||左边为真以后，后面就不用再去运算
	//int i = 0, a = 1, b = 2, c = 3, d = 4;
	//i = a++ || ++b || d++;
	//printf("a =%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);//2 2 3 4
	
	
	//int a = 3;
	//int b = 5;
	//int c = 0;
	////逗号表达式 - 要从左向右依次计算，但是整个表达式的结果是最后一个表达式的结果
	//int d = (c = 5, a = c + 3, b = a - 4, c += 5);
	//printf("%d\n", d);//10
//	return 0;
//}


	//结构成员访问操作符
	//.
	// ->

	//结构体
	//书：书名、书号、定价
	//struct Book
	//{
	//	char name[20];
	//	char id[20];
	//	int price;
	//};
	//int main()
	//{
	//	struct Book b = { "C语言", "C34324434", 55 };
	//	struct Book* pb = &b;
	//	printf("书名：%s\n", pb->name);
	//	printf("书号：%s\n", pb->id);
	//	printf("定价：%d\n", pb->price);
	//	return 0;
	//}



//整形提升
//int main()
//{
//	char a = 3;
	//00000000000000000000000000000011
	//00000011 - a
	//char b = 127;
	//00000000000000000000000001111111
	//01111111 - b
	//char c = a + b;
	//00000000000000000000000000000011
	//00000000000000000000000001111111
	//00000000000000000000000010000010
	
	//10000010 - c
	//11111111111111111111111110000010 - 补码
	//11111111111111111111111110000001 - 反码
	//10000000000000000000000001111110 - 原码
	// -126
	//发现a和b都是char类型，都没有达到一个int的大小
	//这里就会发生整形提升
//	printf("%d\n", c);//-126
//	return 0;
//} 



//实现函数init（）初始化数组为全0
//实现printf（）打印数组的每个元素
//实现reverse（）函数完成数组元素的逆置
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void printf1(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz) 
//{
//	int right = sz - 1;
//	int left = 0;
//	int tem = 0;
//	//int i = 0;
//	while(left <right)
//	{
//		tem = arr[right];
//		arr[right] = arr[left];
//		arr[left] = tem;
//		right--;
//		left++;
//	}
//}
//	
//int main() 
//{
//	int arr[] = {1,2,3,4,5,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr, sz);
//	printf1(arr, sz);
//	reverse(arr, sz);
//	printf1(arr, sz); 
//	return 0;
//}



//将数组A中的内容和数组B中的内容进行交换。(数组一样大)
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6 };
	int arr2[] = { 7, 8, 9, 10, 11, 12 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	int tem = 0;
	for(i=0; i<sz; i++)
	{
		tem = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tem;
	}
	for(i=0; i<sz; i++)
	{
		printf("%d ", arr1[i]);
		
	}
	printf("\n");
	for(i=0; i<sz;i++)
	{
		printf("%d ", arr2[i]);
	}

	return 0;
}