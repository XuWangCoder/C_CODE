#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1.ͳ�ƶ�������1�ĸ�����15  0000 1111  4��1
//Numberof1���Ǽ������n�Ķ����Ʋ������м���1
//��õ����������־�ģ2��2
//int my_Numberof1(int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1 ) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int my_Numberof1(int a)
//{
//	int count = 0;
//	int i = 0;
//	while ( a)
//	{
//	a = a & (a - 1);
//	count++;
//		
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", my_Numberof1(a));
//	return 0;
//}



//дһ�������ж�һ�������ǲ���2��n�η�
//һ�����Ƕ��η����Ķ��������������ҽ���һ��1
// k&(k-1) ==0 
//char f1(int a)
//{
//	int count = 0;
//	if((a&(a-1)) == 0)
//	{
//		return 'Y';
//	}
//	else
//		return 'N';
//}
//
//int main()
//{
//	printf("���������֣�");
//	int a = 0;
//	scanf("%d", &a);
//	printf("�ǲ���2��n�η���%c", f1(a));
//	return 0;
//}



//���������������в�ͬλ�ĸ���
//���ӣ����룺1999 2299   �����7
//int f1(int a, int b)
//{
//	int c = a ^ b;
//	int count = 0;
//	while (c)
//	{
//		c = c & (c - 1);
//		count++;
//	}
//}
//
//int main() 
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", f1(a, b));
//	return 0;
//}
//
//int f1(int a , int b)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) != ((b >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}



//��ӡ���������Ƶ�����λ��ż��λ
int f1(int num)
{
	int i = 0;
	int count = 0;
	//��ӡż��λ
	for(i = 31; i>=0; i-=2)
	{
		printf("%d ", 1 & (num >> i));
	}
	printf("\n");
	//��ӡ����λ
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", 1 & (num >> i));
	}

	
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	f1(num);
	return 0;
}