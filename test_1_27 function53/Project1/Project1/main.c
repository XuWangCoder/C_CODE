#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ַ������򣨵ݹ�ʵ�֣����������ַ����е��ַ��������У����������ӡ������ʹ�ÿ⺯���е��ַ�����������
//����һ�� 
//int is_strlen(char*string)
//{
//	int count = 0;
//	while(*string!='\0')
//	{
//		string++;
//		count++;
//	}
//	return count;
//}
//
//void reverse_string(char*string)
//{
//	int right =is_strlen(string) - 1;
//	int left = 0;
//	char tem;
//	while(left<right)
//	{
//		tem = string[left];
//		string[left] = string[right];
//		string[right] = tem;
//		right--;
//		left++;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//������arr������arr��Ԫ�صĵ�ַ
//	printf("%s", arr);
//	return 0;
//
//}


//���������ݹ�
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//������arr������arr��Ԫ�صĵ�ַ
//	printf("%s", arr);
//	return 0;
//}
//
//void reverse_string(char*arr)
//{
//	char tem = *arr;//1
//	int len=is_strlen(arr);
//	*arr = *(arr + len-1);//2
//	*(arr + len-1) = '\0';//3
//	if (is_strlen(arr)>=2)
//	{
//	reverse_string(arr+1);//4
//	}
//	*(arr + len - 1) = tem;//5
//}
//
//int is_strlen(char*arr)
//{
//	if(*arr!='\0')
//	{
//		return 1 + is_strlen(arr - 1);
//	}
//	else
//	return 0;
//} 



//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//����1729�����1+7+2+9=19
//int main()
//{
//	int n =1729;
//	int sum =DigitSum(n);
//	printf("%d", sum);
//	return 0;
//}
//
//int DigitSum(int n)
//{
//	if(n>9)
//	{
//		return DigitSum(n / 10)+n % 10;
//	}
//	else
//	return n;
//
//}



//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
double fx(int n,int k)
{
	if (k == 0)
		return 1.0;
	else if (k > 0)
		return n * fx(n, k - 1);
	else
		return 1.0 / (fx(n, -k));
}	

int main()
{
	int n =0;
	int k= 0;
	scanf("%d %d", &n, &k);
	double num = fx(n, k);
	printf("%lf\n", num);
	return 0;
}


