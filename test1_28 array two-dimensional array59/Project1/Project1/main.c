#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//��ά�����������д洢
//int arr[][4] = { {1,2}, {3,4}, {4,5} };
//int*p = &arr[0][0];
//int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}



//��������������Ԫ�صĵ�ַ
//������2������
//1. sizeof(������) - ��������ʾ�������� - ���������������Ĵ�С��λ���ֽ�
//2. &������ - ��������ʾ�������� - ȡ��������������ĵ�ַ
//ð������
void bubble_sort(int arr[], int len)
{
	int i = 0;

	for (i = 0; i < len-1; i++)
	{
		int j = 0;
		for (j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
			}
		}
	}
}int main()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, len);
	int i = 0;
	for (i = 0; i < len; i++)
	{
	printf("%d ", arr[i]); 
	}
	return 0;
}

