#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1.统计二进制中1的个数：15  0000 1111  4个1
//Numberof1就是计算参数n的二进制补码中有几个1
//想得到二进制数字就模2除2
//int my_Numberof1(int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1 ) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int my_Numberof1(int a)
//{
//	int count = 0;
//	int i = 0;
//	while ( a)
//	{
//	a = a & (a - 1);
//	count++;
//		
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", my_Numberof1(a));
//	return 0;
//}



//写一个代码判断一个数字是不是2的n次方
//一个数是二次方它的二进制序列里有且仅有一个1
// k&(k-1) ==0 
//char f1(int a)
//{
//	int count = 0;
//	if((a&(a-1)) == 0)
//	{
//		return 'Y';
//	}
//	else
//		return 'N';
//}
//
//int main()
//{
//	printf("请输入数字：");
//	int a = 0;
//	scanf("%d", &a);
//	printf("是不是2的n次方：%c", f1(a));
//	return 0;
//}



//求两个数二进制中不同位的个数
//例子：输入：1999 2299   输出：7
//int f1(int a, int b)
//{
//	int c = a ^ b;
//	int count = 0;
//	while (c)
//	{
//		c = c & (c - 1);
//		count++;
//	}
//}
//
//int main() 
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", f1(a, b));
//	return 0;
//}
//
//int f1(int a , int b)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) != ((b >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}



//打印整数二进制的奇数位和偶数位
int f1(int num)
{
	int i = 0;
	int count = 0;
	//打印偶数位
	for(i = 31; i>=0; i-=2)
	{
		printf("%d ", 1 & (num >> i));
	}
	printf("\n");
	//打印奇数位
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", 1 & (num >> i));
	}

	
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	f1(num);
	return 0;
}