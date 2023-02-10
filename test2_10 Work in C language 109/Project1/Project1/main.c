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



//写一个函数打印arr数组的内容，不使用数组下标，使用指针
//arr是一个整形一维数组
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < len; i++)
	{
		printf("%d ",*(arr+i));
	}
}