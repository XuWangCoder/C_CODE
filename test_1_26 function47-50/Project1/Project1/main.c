#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Add(int*p)
{
	 (*p)++;
}

int main()
{
	int num = 0;
	Add(&num);
	printf("%d ", num);//1

	Add(&num);
	printf("%d ", num);//2

	Add(&num);
	printf("%d ", num);//3

	return 0;
}



//������Ƕ�׵��ú���ʽ����

//��ʽ����
#include <string.h>
//int main()
//{
//	char arr1[20] = {0};
//	char arr2[] = "bit";
//	printf("%s ", strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}


//int Add(int , int);����������
	  

//���뾲̬��
//#pragma comment (lib, "sub.lib")




//�����ĵݹ�
//
//int main()
//{
//	unsigned int num;
//	scanf("%d", &num);
//	print(num);
//	
//	return 0;  
//}
//
//void print(unsigned int num)
//{
//	
//	if(num>9)
//	{
//		print(num/ 10);
//	}
//	printf("%d ", num%10);
//}

//int my_strlen(char* arr)
//{
//	if(  *arr != '\0')
//	{
//		return 1 + my_strlen(arr+1);
//	}
//	else
//	return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//
//	printf("%d", my_strlen(arr));
//
//	return 0;
//}



////�����ĵݹ���Ƕ��  ��n�Ľ׳�
//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//		return n * Fac(n - 1);
//}
//
//int main()
//{
//	int n=0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d ", ret);
//	return 0;
//}



//���n���Ʋ���������
//����һ���ݹ������⣬����Ч��̫��
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n" ,F(n));
//	printf("count=%d\n", count);
//	return 0;
//}
//int count = 0;
//int F(int n)
//{
//	//ͳ�Ƶ�3��쳲��������ļ��������
//	if (n == 3)
//		count++;
//	
//	if(n>2)
//	{
//		return  F(n - 1) + F(n - 2);
//	}
//	return 1;
//}



//���n���Ʋ���������
//��������Ч�ʸ�
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n" ,F(n));
//	return 0;
//}
//
//int F(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;	
//	}
//	return c;
//}



//��ŵ��
//������̨��

