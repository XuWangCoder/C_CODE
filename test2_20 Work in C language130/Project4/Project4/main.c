#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <string.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;//��α併�� return *(int*)e2 - *(int*)e1��ʵ���߼��෴����
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)//ÿ�ν���һ���ֽ�
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

//ģ��qsortʵ��һ��ð�������ͨ���㷨
void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//һ�˵�����
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�رȽ�
			//arr[j] arr[j+1]
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void test3()
{
	//�������ݵ�����
	int arr[] = { 9,0,6,2,5,8,4,3,7,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//����
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	//��ӡ
	print_arr(arr, sz);
}

int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}
