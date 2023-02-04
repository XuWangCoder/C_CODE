#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//strlen 是求字符串长度
//my_strlen
//1.const
//2.assert
//#include <assert.h>
//int my_strlen( const char* arr)
//{
//	assert(arr != NULL);
//	while(*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "erwerewr";
//	printf("%d", 	my_strlen(arr));
//	return 0;
//}



// size_t 是unsigned int 的返回值
//__cdec1  -函数调用约定