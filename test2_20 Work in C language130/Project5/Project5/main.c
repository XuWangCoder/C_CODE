#define _CRT_SECURE_NO_WARNINGS 1
//int find_num(int arr[3][3], int* px, int* py, int k)
//{
//	int x = 0;
//	int y = *py- 1;
//	while (x<*px&&y>=0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px=x;
//			*py = y;
//			return 1;//找到了
//		}
//	}
//	return 0;//找不到
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };//N - 查找的次数最坏的情况下是N次
//	int k = 7;
//	//如果找到返回1，找不到返回0
//	int x = 3;//行
//	int y = 3;//列
//	//&x, &y
//	//1. 传入参数
//	//2. 带回值
//
//	int ret =find_num(arr, &x, &y, k);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是：%d %d\n", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	//查找一个数字，比如找：7
//	return 0;
//}



////字符串左旋：实现一个函数，可以左旋字符串中的k个字符
////例如：
////ABCD左旋一个字符得到BCDA
////ABCD左旋两个字符得到CDAB
////方法一：
//void string_left_rotate(char* str, int k)
//{
//	int i = 0;
//	int n = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		//每次左旋转一个字符
//		char tmp = *str;//1
//		//2.后面的n-1个字符往前面挪动
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3.tmp放在最后
//		*(str+n-1) = tmp;
//	}
//}
//
//int main()
//{
//	char arr[10] ="ABCDEF";
//	int k = 2;
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//
//	return 0;
//}

////方法二
//#include <assert.h>
////三步反转法
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void string_left_rotate(char* str, int k)
//{
//	int n = strlen(str);
//	reverse(str,str+k-1);//左
//	reverse(str+k,str+n-1);//右
//	reverse(str,str+n-1);//整体
//}
//
//int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 3;
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//
//	return 0;
//}

