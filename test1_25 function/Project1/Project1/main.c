#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//如果判断是闰年返回1
//不是闰年，返回0
//一个函数如果不写返回类型，默认返回int
//int is_leap_year(int y) {
//	
//	
//	
//		return ((y % 4 == 0 &&y % 100 != 0)||(y%400==0));
//	
//}
//
//int main() {
//
//	int y = 0;
//	int* p = &y;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++) {
//		if (is_leap_year(y) == 1) {
//			printf("%d是瑞年\n", y);
//			count++;
//		}
//	}
//	return 0;
//}



int binary_search(int arr[], int sz, int key)
{

	int right =sz-1;
	int left =0 ;
	
	while (left<=right) 
	{
		int mid = (right + left) / 2;
		if (arr[mid]<key) 
		{
			left = mid+1;
		}
		else if (arr[mid] >key) 
		{
			right = mid-1;
		}
		else
		{
			return mid;
		}
	}	
		return -1;
		
	
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int key = 7;
	//找到了就返回找到的位置的下标
	//找不到就返回-1
	//数组arr传参，实际传递的不是数组的本身
	//仅仅传过去了数组首元素的地址
	int ret = binary_search(arr, sz, key);
	if (-1 == ret)
	{
		printf("找不到 ");
	}
	else
	{
		printf("找到，下标是：%d\n ", ret);
	}
	return 0;
}