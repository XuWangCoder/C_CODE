#define _CRT_SECURE_NO_WARNINGS 1
//���ڴ����һ��
#include <stdio.h>
//int main()
//{
//
//	//printf("����\n");
//	//printf("hehe\n");
//	//printf("%d\n", 100);//��ӡһ������-%d
//	//sizeof - �ؼ��� - ������ - �������ͻ��߱�����ռ�ռ�Ĵ�С
//	//sizeof��λ���ֽ� byte=8bit����λ
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int main() {
//	int age = 20;
//	double weight = 75.3;
//
//	age = age + 1;
//	weight = weight - 10;
//		printf("%d\n", age);
//		printf("%lf\n", weight);
//	return 0;
//}
//%d - ����
//%f - float
//%lf - double


//ȫ�ֱ��� - {}�ⲿ�����
//int a = 100;
//int main()
//{
////�ֲ�����- {}�ڲ������
////���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ�����
////�������ȫ�ֱ����;ֲ�����������д��һ��
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//
//}



//дһ��������2�������ĺ�
//scanf���������뺯��

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b); 
//	sum = a + b;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1, 2,  3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}


//
//int main()
//{
//	float a = 9/2.0;
//	int b = 9 / 2;
//	printf("%f\n", a);//4.50000
//	printf("%d\n", b);//4
//	return 0;
//}


//int main()
//{
//
//	int a = 10;//0Ϊ�ٷ�0Ϊ��
//	printf("%d", !a);
//	if(a)
//	{//���aΪ�棬����
//	}
//	if(!a)
//	{//���aΪ�٣�����
//	}
//}



int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//�����������ܴ�С��λ���ֽ�
	printf("%d\n", sizeof(arr[0]));
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);


	return 0;
}