#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int i;//i��ȫ�ֱ���������ʼ����Ĭ����0
//int main()
//{
//	i--;//-1
//	//sizeof���������������Ľ����������unsigned int
//	if (i > sizeof(i))//�з����������޷������αȽϴ�С��ʱ�򣬻Ὣ�з�������ת��Ϊ�޷�������
//	{ 
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}



////��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ������
////���磺2+22+222+2222+22222
//int main()
//{
//	printf("������a n");  
//	int a, n;
//	scanf("%d %d\n",&a,&n);
//	int i = 0;
//	int S = 0;
//	int ret = 0;
//
//	for (i = 0; i < n; i++)
//		{
//			ret =a + ret * 10;
//			S += ret;
//		}
//	printf("ǰn���Ϊ��%d", S);
//	return 0;
//}



//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ��
//arr��һ������һά����
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < len; i++)
	{
		printf("%d ",*(arr+i));
	}
}