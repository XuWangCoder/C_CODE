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


////����2
//void (* signal(int, void(*)(int)))(int);
////1.signal��()�Ƚ�ϣ�˵��signal�Ǻ�����
////2.signal�����ĵ�һ������������int���ڶ������������Ǻ���ָ��
////�ú���ָ�룬ָ��һ������Ϊint������������void�ĺ���
////3.signal�����ķ�������Ҳ��һ������ָ��
////�ú���ָ�룬ָ��һ������Ϊint������������void�ĺ���
////signal��һ������������
////typedef - �����ͽ����ض���
//typedef void(*pfun_t)(int);//��void(*)(int)�ĺ���ָ������������Ϊpfun_t



////����ָ������ - ��ź���ָ�������
//// 
////����ָ�� int*
////����ָ������ int* arr[5]
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pfArr[2])(int, int) = { Add,Sub };//pfArr���Ǻ���ָ������ 
//	return 0;
//}



////������-�������ͱ����ļӡ������ˡ���
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("*****1.�ӷ�   2.����**********\n");
//	printf("*****3.�˷�   4.����**********\n");
//	printf("********0.�˳�***************\n");
//	printf("*****************************\n");
//
//}
//
//int main()
//{
//	int input;
//	do {
//		menu();
//		int (*pfarr[5])(int, int) = { NULL, Add, Sub, Mul,Div };
//		int x,y,ret;
//		printf("���������֣�\n");
//		scanf("%d", &input);
//		
//		if (input >= 1 && input <= 4)
//		{
//			printf("������x y��\n");
//			scanf("%d %d", &x, &y);
//		
//			ret = (pfarr[input])(x, y);
//			printf("���Ϊ��");
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//			break;
//		}
//		else
//			printf("�����������������\n");
//
//	} while (input);
//	return 0;
//} 



//int main()
//{
//	int arr[10];
//	//����Ԫ������ - int
//	//arr����������� int[10]
//	return 0;
//}



////�ص�����
////������
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("*****1.�ӷ�   2.����**********\n");
//	printf("*****3.�˷�   4.����**********\n");
//	printf("********0.�˳�***************\n");
//	printf("*****************************\n");
//}
//
//int Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("������2��������");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}
//
//int main()
//{
//	int input;
//	do {
//		menu();
//		int x,y,ret;
//		printf("���������֣�\n");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			ret = Calc(Add);
//			printf("ret=%d\n", ret);
//			break;
//		case 2:
//			ret = Calc(Sub);
//			printf("ret=%d\n", ret);
//			break;
//		case 3:
//			ret = Calc(Mul);
//			printf("ret=%d\n", ret);
//			break;
//		case 4:
//			ret = Calc(Div);
//			printf("ret=%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//		}
//	} while (input);
//	return 0;
//} 



//qsort()����    ��Ҫ#include <stdlib.h>
//void qsort(void* base, //base�д�ŵ��Ǵ����������е�һ������ĵ�ַ
//				size_t num, //��������Ԫ�صĸ���
//				size_t size, //����������һ��Ԫ�صĴ�С����λ���ֽ�
//				int (*cmp)(const void* e1, const void* e2)//�������Ƚϴ����������е�2��Ԫ�صĺ���
//);

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

void test1()
{
	//�������ݵ�����
	int arr[] = { 9,0,6,2,5,8,4,3,7,1 };
	int sz = sizeof(arr) / sizeof(arr[10]);
	//����
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	//��ӡ
	print_arr(arr, sz);
}

struct Stu
{
	char name[20];
	int age;
};

int sort_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int sort_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test2()
{
	//ʹ��qsort��������ṹ������
	struct Stu s[3] = { {"zhangsan", 30},{"lisi", 34},{"wangwu", 20} };
	//abcq
	//abc
	int sz = sizeof(s) / sizeof(s[0]); 
	//��������������
	//qsort(s, sz, sizeof(s[0]), sort_by_age);
	//��������������
	qsort(s, sz, sizeof(s[0]), sort_by_name);
}

void test3()
{
	//�������ݵ�����
	int arr[] = { 9,0,6,2,5,8,4,3,7,1 };
	int sz = sizeof(arr) / sizeof(arr[10]);
	//����
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	//��ӡ
	print_arr(arr, sz);
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
void bubble_sort(void* base, 
							int sz,
							int width,
							int (*cmp)(const void*e1, const void*e2)
							)
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
			if (cmp((char*)base+j*width, (char*)base+(j+1)*width ) > 0)
			{
				//����
				Swap((char*)base+j*width, (char*)base+(j+1)*width, width);
			}
		}
	}
}

int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}