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



////дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ��
////arr��һ������һά����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int* pend = arr + len - 1;
//	while (p <= pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	//for (i = 0; i < len; i++)
//	//{
//	//	printf("%d ",*(p+i));
//	//}
//}



////���0~100000֮������С�ˮ�ɻ������������
////"ˮ�ɻ���"��ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
////�磺153=1^3+5^3+3^3,��153��һ��"ˮ�ɻ���"��
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ��������
//		//1.����i��λ�� - n
//		int n = 1;
//		int tmp = i;
//		while (tmp/10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//	//2.����i��ÿһλ��n�η�֮��
//		int sum = 0;
//		tmp = i;
//		while (tmp)
//		{
//			//pow��������ƽ����
//			sum += pow(tmp%10,n);
//			tmp = tmp / 10;
//		}
//	//3.�ж�
//		if (sum==i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



////�ַ�������
//#include <string.h>
//#include <assert.h>
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* right = str + len - 1;
//	char* left = str;
//	char tmp;
//	while (right > left)
//	{
//		tmp = *right;
//		*right = *left;
//		*left = tmp;
//		right--;
//		left++;
//	}
//}
//
//int main()
//{
//	char arr[100];
//	gets(arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}



////��c���Դ�ӡ����ͼ��
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i<line; i++)
//	{
//		
//		for (j = 0; j <line-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j<i*2+1 ;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j<(line-1-i-1) *2+1; j++)//for(j=0;j<2*(line-1-i)-1;j++);
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



////����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
//int main()
//{
//	int money = 0;
//	int total = 0;
//	scanf("%d", &money);
//	if (money > 0)
//	{
//		total = money * 2 - 1;
//	}
//	//int total = money;
//	//int empty = money;
//	// ��ʼ�û�
//	//while (empty >= 2)
//	//{
//	//	total += empty/2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	printf("%d\n", total);
//	return 0;
// }



////����һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿��
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//��ǰ������һ��ż��
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//�Ӻ���ǰ��һ������
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}



////����Ļ�ϴ�ӡ�������
////1
////1 1
////1 2 1
////1 3 3 1
////..................
//void print(int arr[10][10])
//{
//	int i = 0;
//	for (i=0;i<10;i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[10][10] = {0};
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			if (j==0)
//			{
//				arr[i][j]=1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (j > 0 && i>1)
//			{
//				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
//			}
//		}
//	}
//	print(arr);
//	return 0;
//}



//
////����ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ�ĸ��е�һ��,д�����ж�����
////A�������ҡ�  B����c��  C:��d��  D��c�ں�˵��
////������˵�����滰��һ����˵���Ǽٻ�
//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)//��Ȼ��������Ϊ1��һ������Ϊ0���ж���ȷΪ1���жϴ���Ϊ0��
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}



////5λ�˶�Ա�μ�10����ˮ������Ԥ��������
////A:b�ڶ����ҵ����� B���ҵڶ���e���ġ� C���ҵ�һ��d�ڶ��� D��c����ҵ����� E���ҵ��ģ�a��һ��
////ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if( (b==2)+(a==3)==1
//							&&(b==2)+(e==4)==1
//							&&(c==1)+(d==2)==1
//							&&(c==5)+(d==3)==1
//							&&(e==4)+(a==1)==1
//							&& a*b*c*d*e==120
//							)
//							printf("a=%d b=%d c=%d d=%d e=%d\n ", a, b, c, d, e);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}