#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//字符串逆序（递归实现）：将参数字符串中的字符反向排列，不是逆序打印，不能使用库函数中的字符串操作函数
//方法一： 
//int is_strlen(char*string)
//{
//	int count = 0;
//	while(*string!='\0')
//	{
//		string++;
//		count++;
//	}
//	return count;
//}
//
//void reverse_string(char*string)
//{
//	int right =is_strlen(string) - 1;
//	int left = 0;
//	char tem;
//	while(left<right)
//	{
//		tem = string[left];
//		string[left] = string[right];
//		string[right] = tem;
//		right--;
//		left++;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//数组名arr是数组arr首元素的地址
//	printf("%s", arr);
//	return 0;
//
//}


//方法二：递归
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//数组名arr是数组arr首元素的地址
//	printf("%s", arr);
//	return 0;
//}
//
//void reverse_string(char*arr)
//{
//	char tem = *arr;//1
//	int len=is_strlen(arr);
//	*arr = *(arr + len-1);//2
//	*(arr + len-1) = '\0';//3
//	if (is_strlen(arr)>=2)
//	{
//	reverse_string(arr+1);//4
//	}
//	*(arr + len - 1) = tem;//5
//}
//
//int is_strlen(char*arr)
//{
//	if(*arr!='\0')
//	{
//		return 1 + is_strlen(arr - 1);
//	}
//	else
//	return 0;
//} 



//计算一个数的每位之和（递归实现）
//输入1729，输出1+7+2+9=19
//int main()
//{
//	int n =1729;
//	int sum =DigitSum(n);
//	printf("%d", sum);
//	return 0;
//}
//
//int DigitSum(int n)
//{
//	if(n>9)
//	{
//		return DigitSum(n / 10)+n % 10;
//	}
//	else
//	return n;
//
//}



//编写一个函数实现n的k次方，使用递归实现
double fx(int n,int k)
{
	if (k == 0)
		return 1.0;
	else if (k > 0)
		return n * fx(n, k - 1);
	else
		return 1.0 / (fx(n, -k));
}	

int main()
{
	int n =0;
	int k= 0;
	scanf("%d %d", &n, &k);
	double num = fx(n, k);
	printf("%lf\n", num);
	return 0;
}


