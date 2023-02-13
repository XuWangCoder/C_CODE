#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int i;//i是全局变量，不初始化，默认是0
//int main()
//{
//	i--;//-1
//	//sizeof这个操作符，算出的结果的类型是unsigned int
//	if (i > sizeof(i))//有符号整形与无符号整形比较大小的时候，会将有符号整形转化为无符号整形
//	{ 
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}



////求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字
////例如：2+22+222+2222+22222
//int main()
//{
//	printf("请输入a n");  
//	int a, n;
//	scanf("%d %d\n",&a,&n);
//	int i = 0;
//	int S = 0;
//	int ret = 0;
//
//	for (i = 0; i < n; i++)
//		{
//			ret =a + ret * 10;
//			S += ret;
//		}
//	printf("前n项和为：%d", S);
//	return 0;
//}



////写一个函数打印arr数组的内容，不使用数组下标，使用指针
////arr是一个整形一维数组
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int* pend = arr + len - 1;
//	while (p <= pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	//for (i = 0; i < len; i++)
//	//{
//	//	printf("%d ",*(p+i));
//	//}
//}



////求出0~100000之间的所有“水仙花数”并输出。
////"水仙花数"是指一个n位数，其各位数字的n次方之和确好等于该数本身，
////如：153=1^3+5^3+3^3,则153是一个"水仙花数"。
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否会自幂数
//		//1.计算i的位数 - n
//		int n = 1;
//		int tmp = i;
//		while (tmp/10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//	//2.计算i的每一位的n次方之和
//		int sum = 0;
//		tmp = i;
//		while (tmp)
//		{
//			//pow是用来求平方数
//			sum += pow(tmp%10,n);
//			tmp = tmp / 10;
//		}
//	//3.判断
//		if (sum==i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



////字符串逆序
//#include <string.h>
//#include <assert.h>
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* right = str + len - 1;
//	char* left = str;
//	char tmp;
//	while (right > left)
//	{
//		tmp = *right;
//		*right = *left;
//		*left = tmp;
//		right--;
//		left++;
//	}
//}
//
//int main()
//{
//	char arr[100];
//	gets(arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}



////用c语言打印菱形图案
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i<line; i++)
//	{
//		
//		for (j = 0; j <line-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j<i*2+1 ;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j<(line-1-i-1) *2+1; j++)//for(j=0;j<2*(line-1-i)-1;j++);
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



////喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
//int main()
//{
//	int money = 0;
//	int total = 0;
//	scanf("%d", &money);
//	if (money > 0)
//	{
//		total = money * 2 - 1;
//	}
//	//int total = money;
//	//int empty = money;
//	// 开始置换
//	//while (empty >= 2)
//	//{
//	//	total += empty/2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	printf("%d\n", total);
//	return 0;
// }



////输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//从前往后找一个偶数
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//从后往前找一个奇数
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}



////在屏幕上打印杨辉三角
////1
////1 1
////1 2 1
////1 3 3 1
////..................
//void print(int arr[10][10])
//{
//	int i = 0;
//	for (i=0;i<10;i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[10][10] = {0};
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			if (j==0)
//			{
//				arr[i][j]=1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (j > 0 && i>1)
//			{
//				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
//			}
//		}
//	}
//	print(arr);
//	return 0;
//}



//
////警察通过排查确定杀人凶手必为四个中的一个,写程序判断凶手
////A：不是我。  B：是c。  C:是d。  D：c在胡说。
////三个人说的是真话，一个人说的是假话
//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)//必然三个条件为1，一个条件为0（判断正确为1，判断错误为0）
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}



////5位运动员参加10米跳水比赛，预测比赛结果
////A:b第二，我第三。 B：我第二，e第四。 C：我第一，d第二。 D：c最后，我第三。 E：我第四，a第一。
////每位选手都说对了一半，请编程确定比赛的名次。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if( (b==2)+(a==3)==1
//							&&(b==2)+(e==4)==1
//							&&(c==1)+(d==2)==1
//							&&(c==5)+(d==3)==1
//							&&(e==4)+(a==1)==1
//							&& a*b*c*d*e==120
//							)
//							printf("a=%d b=%d c=%d d=%d e=%d\n ", a, b, c, d, e);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}