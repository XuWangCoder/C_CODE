#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0] + 1));//a[0]��Ϊ��������û�е�������sizeof�ڲ���
//													//Ҳû��ȡ��ַ������a[0]���ǵ�һ�е�һ��Ԫ�صĵ�ַ
//													//a[0]+1���ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(a + 1));//4 - ���ͣ�a�Ƕ�ά���������������û��ȡ��ַ
//												//Ҳû�е�������sizeof�ڲ�������a�ͱ�ʾ��ά������Ԫ�صĵ�ַ��������һ�еĵ�ַ
//												//a+1���Ƕ�ά����ڶ��еĵ�ַ
// printf("%d\n", sizeof(a));//48 = 3*4*sizeof(int)
//	printf("%d\n", sizeof(a[3]));//16   ���ͣ�a[3] -- int [4]     sizeof()�ڲ��ı��ʽ�ǲ���ģ�
//											  //������ʵ�����ڣ�Ҳ��ͨ�����ͼ����С
//	return 0;
//}



//int main()
//{
//	short s = 5;
//	int a = 4;
//	printf("%d\n", sizeof(s = a + 6));//2
//	printf("%d\n", s);//5
//	return 0;
//}



////��ϰ
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//(&a+1)ָ��������ĩ�ˣ���ָ��������ĩ�˵�ָ�븳��ptr
//	printf("%d, %d", *(a + 1), *(ptr - 1));//2  5
//	return 0;
//}



////�ṹ���СΪ20���ֽ�
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x1000000�����±��ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//	//��int��x�ǽ�����ǿ��ת��Ϊint�͡�����int *����ǿ����ָ������ת��
//	return 0;
//}



int main()
{
	int a[4] = { 1,2,3,4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);

	printf("%x, %x", ptr1[-1], *ptr2);// 4  2000000
	return 0;
}