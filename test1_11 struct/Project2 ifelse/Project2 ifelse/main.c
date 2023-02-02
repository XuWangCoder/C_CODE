#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = 140;
//	if (i < 18)
//		printf("少年\n");
//	else if (i >= 18 && i < 26)
//		printf("青年\n");
//	else if (i >= 26 && i < 45)
//		printf("中年\n");
//	else if (i >= 45 && i < 100)
//		printf("老年\n");
//	else
//	{printf("老太爷\n");}
//
//	return 0;
//}


//
//int main()
//{
//	int i = 100;
//	while ( i--)
//	{
//		if ( i%2==1)
//			printf("%d\n", i); 
//		
//	
//}
//	return 0;
//}


int main()
{
	int i = 0;
	for ( i = 1; i < 101; i++)
	{
		if (i % 2 == 1)
			printf("%d ", i);


	}
	return 0;
}