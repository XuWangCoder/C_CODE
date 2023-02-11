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


//
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