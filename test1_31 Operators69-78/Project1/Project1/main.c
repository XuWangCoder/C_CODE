#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
	//float a = 6 / 5;//1.00000
	//float b = 6 / 5.0;//1.20000����һ��Ҫ�Ǹ�����������ִ�б���С���ĳ���


	//��λ�� - &
	//int a = 3;
	//int b = 5;
	//int c = a & b;//c: 00000000000000000000000000000001=ʮ���ƣ�1
	//a: 00000000000000000000000000000011
	//b: 00000000000000000000000000000101
	//c: 00000000000000000000000000000001

	//��λ�� - | 
	//int a = 3;
	//int b = 5;  
	//int c = a | b;//c: 00000000000000000000000000000111=ʮ���ƣ�7
	//a: 00000000000000000000000000000011
	//b: 00000000000000000000000000000101
	//c: 00000000000000000000000000000111

	//��λ��� - ^
	// ��Ӧ�Ķ�����λ�������
	// ������ͬΪ0������Ϊ1
	//int a = 3;
	//int b = 5;
	//int c = a ^ b;//c: 00000000000000000000000000000111=ʮ���ƣ�6
	//a: 00000000000000000000000000000011
	//b: 00000000000000000000000000000101
	//c: 00000000000000000000000000000110


	//1.�������ƣ��ұ߶�������߲�ԭ����λ
	//2.�߼����ƣ����ƶ�������߲�0
	//����������ڴ��У���ŵ��Ƕ����ƵĲ���
//	int a =13;
//	int c = 0;
//	int i=0 ;
//	int count = 0;
//	for (i = 0; i < 32;i++)
//	{
//		if (1 == 1& (a >> i))
//		{
//			count++;
//		}
//	}
//	printf("%d", count);


	//short s = 5;
	//int a = 10;
	//printf("%d\n", sizeof(s = a + 2));//2 sizeof�����еı���ʽ���������
	//printf("%d\n", s);//5

	//int a = (int)3.14;//ǿ������ת��
	//printf("%d", a);


	// &&���Ϊ���Ժ󣬺���Ͳ�����ȥ����
	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;
	//printf("a =%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);//1 2 3 4

	// || ||���Ϊ���Ժ󣬺���Ͳ�����ȥ����
	//int i = 0, a = 1, b = 2, c = 3, d = 4;
	//i = a++ || ++b || d++;
	//printf("a =%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);//2 2 3 4
	
	
	//int a = 3;
	//int b = 5;
	//int c = 0;
	////���ű���ʽ - Ҫ�����������μ��㣬������������ʽ�Ľ�������һ������ʽ�Ľ��
	//int d = (c = 5, a = c + 3, b = a - 4, c += 5);
	//printf("%d\n", d);//10
//	return 0;
//}


	//�ṹ��Ա���ʲ�����
	//.
	// ->

	//�ṹ��
	//�飺��������š�����
	//struct Book
	//{
	//	char name[20];
	//	char id[20];
	//	int price;
	//};
	//int main()
	//{
	//	struct Book b = { "C����", "C34324434", 55 };
	//	struct Book* pb = &b;
	//	printf("������%s\n", pb->name);
	//	printf("��ţ�%s\n", pb->id);
	//	printf("���ۣ�%d\n", pb->price);
	//	return 0;
	//}



//��������
//int main()
//{
//	char a = 3;
	//00000000000000000000000000000011
	//00000011 - a
	//char b = 127;
	//00000000000000000000000001111111
	//01111111 - b
	//char c = a + b;
	//00000000000000000000000000000011
	//00000000000000000000000001111111
	//00000000000000000000000010000010
	
	//10000010 - c
	//11111111111111111111111110000010 - ����
	//11111111111111111111111110000001 - ����
	//10000000000000000000000001111110 - ԭ��
	// -126
	//����a��b����char���ͣ���û�дﵽһ��int�Ĵ�С
	//����ͻᷢ����������
//	printf("%d\n", c);//-126
//	return 0;
//} 



//ʵ�ֺ���init������ʼ������Ϊȫ0
//ʵ��printf������ӡ�����ÿ��Ԫ��
//ʵ��reverse���������������Ԫ�ص�����
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void printf1(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz) 
//{
//	int right = sz - 1;
//	int left = 0;
//	int tem = 0;
//	//int i = 0;
//	while(left <right)
//	{
//		tem = arr[right];
//		arr[right] = arr[left];
//		arr[left] = tem;
//		right--;
//		left++;
//	}
//}
//	
//int main() 
//{
//	int arr[] = {1,2,3,4,5,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr, sz);
//	printf1(arr, sz);
//	reverse(arr, sz);
//	printf1(arr, sz); 
//	return 0;
//}



//������A�е����ݺ�����B�е����ݽ��н�����(����һ����)
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6 };
	int arr2[] = { 7, 8, 9, 10, 11, 12 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	int tem = 0;
	for(i=0; i<sz; i++)
	{
		tem = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tem;
	}
	for(i=0; i<sz; i++)
	{
		printf("%d ", arr1[i]);
		
	}
	printf("\n");
	for(i=0; i<sz;i++)
	{
		printf("%d ", arr2[i]);
	}

	return 0;
}