#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����ж������귵��1
//�������꣬����0
//һ�����������д�������ͣ�Ĭ�Ϸ���int
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
//			printf("%d������\n", y);
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
	//�ҵ��˾ͷ����ҵ���λ�õ��±�
	//�Ҳ����ͷ���-1
	//����arr���Σ�ʵ�ʴ��ݵĲ�������ı���
	//��������ȥ��������Ԫ�صĵ�ַ
	int ret = binary_search(arr, sz, key);
	if (-1 == ret)
	{
		printf("�Ҳ��� ");
	}
	else
	{
		printf("�ҵ����±��ǣ�%d\n ", ret);
	}
	return 0;
}