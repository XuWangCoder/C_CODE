#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////һ��ָ�봫��
//void test(char* p)
//{
//
//}
//
//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));//��������
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//p��һ��ָ��
//	print(p, sz);
//	char ch = 'w';
//	char* p1 = &ch;
//	test(&ch);//char*
//	return 0;
//}



////����ָ�봫��
//void test(int** p2)
//{
//	**p2 = 20;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��һ��ָ��
//	int** ppa = &pa;//ppa�Ƕ���ָ��
//	//�Ѷ���ָ����д��Σ�
//	test(ppa);
//	test(&pa);//��һ��ָ������ĵ�ַ
//	int* arr[10] = { 0 };
//	test(arr);//�����һ��ָ�������
// int arr[10]={0};
// int (*parr)[10]=&arr;//ȡ������ĵ�ַ
// parr ��ָ�������ָ�� - ��ŵ�������ĵ�ַ
//	printf("%d", a);
//	return 0;
//}





////����ָ�� - ��ź�����ַ��ָ��
////&������ - ȡ���ľ��Ǻ����ĵ�ַ
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//pf����һ������ָ�����
//	//int (*pf)(int, int) = &Add;
//	int (*pf)(int, int) = Add;//Add == pf 
//	int ret = (*pf)(3, 5);//1
//	int ret = pf(3, 5);//2
//	int ret = Add(3, 5);//3
//	printf("%p\n", &Add);
//	printf("%p", Add);
//	return 0;
//}


//����1
//int main()
//{
//	(*(void(*)())0) ();
//	//����0��ַ���ĺ���
//	//�ú����޲Σ�����������void
//	//1. void(*)���� -  ����ָ������
//	//2. (void(*)()) 0  -  ��0����ǿ������ת����ת��Ϊһ�������ĵ�ַ
//	//3. *(void(*)())0 - ��0��ַ�����˽����ò���
//	//4. (*(void(*)())0)() - ����0��ַ���ĺ���
//	//��c�����ȱ�ݡ�
//	return 0;
//}


//����2
void (* signal(int, void(*)(int)))(int);
//1.signal��()�Ƚ�ϣ�˵��signal�Ǻ�����
//2.signal�����ĵ�һ������������int���ڶ������������Ǻ���ָ��
//�ú���ָ�룬ָ��һ������Ϊint������������void�ĺ���
//3.signal�����ķ�������Ҳ��һ������ָ��
//�ú���ָ�룬ָ��һ������Ϊint������������void�ĺ���
//signal��һ������������
//typedef - �����ͽ����ض���
typedef void(*pfun_t)(int);//��void(*)(int)�ĺ���ָ������������Ϊpfun_t



//����ָ������ - ��ź���ָ�������
// 
//����ָ�� int*
//����ָ������ int* arr[5]
int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int main()
{
	int (*pf1)(int, int) = Add;
	int (*pf2)(int, int) = Sub;
	int (*pfArr[2])(int, int) = { Add,Sub };//pfArr���Ǻ���ָ������ 
	return 0;
}


