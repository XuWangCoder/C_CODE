#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ָ�����͵�����
//1.ָ�����;����ˣ�ָ������õ�Ȩ���ж��
//2.ָ�����;����ˣ�ָ����һ�������߶�Զ��������
//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;//��charָ���ڴ���ÿ��ֻ��һ���ֽڢ�intָ���ڴ���ÿ�����ĸ��ֽ�
//	}
//}



 //Ұָ��
//1.ָ��δ��ʼ��
//2.ָ��Խ�����
//3.ָ��ָ��Ŀռ��ͷ�

//��α���Ұָ��
//1.ָ���ʼ��        int* p= NULL;
//2.С��ָ��Խ��
//3.ָ��ָ��ռ��ͷż�ʹ��NULL
//4.ָ��ʹ��֮ǰ�����Ч�� : ����ʹ�ÿ�ָ��



//ָ������
//ָ��+-����
//ָ��-ָ��
//ָ��Ĺ�ϵ����

//int my_strlen(char* str)
//{
//	char* start = str;
//	while(*str!='\0') 
//		{
//		str++;
//		}
//	return str-start;
//}
//
//int main( )
//{
//	int len = my_strlen("abc");
//	printf("%d", len);
//	return 0;
//}


#define N_VALUES 5
float values[N_VALUES];
float* vp;
//ָ��Ӽ�������ָ��Ĺ�ϵ����
int main()
{
	for (vp = &values[0]; vp <&values[N_VALUES]; )
	{
		*vp++ = 0;
	}
}	



//������ָ��
//arr[2]==2[arr]==*(arr+2)
//p[2]==*(p+2)



//����ָ��
//int a =10;
//int *pa = &a;
//int **ppa = &pa; a�ĵ�ַ�����pa�У�pa�ĵ�ַ�����paa�С�pa��һ��ָ�룬��paa�Ƕ���ָ�롣