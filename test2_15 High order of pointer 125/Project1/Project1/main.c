#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0] + 1));//a[0]作为数组名并没有单独放在sizeof内部，
//													//也没有取地址，所以a[0]就是第一行第一个元素的地址
//													//a[0]+1就是第一行第二个元素的地址
//	printf("%d\n", sizeof(a + 1));//4 - 解释：a是二维数组的数组名，并没有取地址
//												//也没有单独放在sizeof内部，所以a就表示二维数组首元素的地址，即：第一行的地址
//												//a+1就是二维数组第二行的地址
// printf("%d\n", sizeof(a));//48 = 3*4*sizeof(int)
//	printf("%d\n", sizeof(a[3]));//16   解释：a[3] -- int [4]     sizeof()内部的表达式是不算的！
//											  //所以其实不存在，也能通过类型计算大小
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



////练习
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//(&a+1)指向数组最末端；将指向数组最末端的指针赋给ptr
//	printf("%d, %d", *(a + 1), *(ptr - 1));//2  5
//	return 0;
//}



////结构体大小为20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x1000000。如下表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//	//（int）x是将数据强制转换为int型。而（int *）是强制了指针类型转换
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