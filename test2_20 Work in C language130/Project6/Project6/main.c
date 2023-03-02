#define _CRT_SECURE_NO_WARNINGS 1
//计算n的阶乘
int main() {
	int i = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {

		ret *= i;

	}
	printf("%d", ret);
	return 0;
}

3.
////①.计算n的阶乘
//int main() {
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//
//	for (i= 1; i <=n;i++) {
//		
//		ret *= i;
//
//	}
//	printf("%d", ret);
//	return 0;
//}


4.
//②.计算1！+2！+3！+.....+10!
//方法一
//int main() {
//
//	int n = 0;
//	scanf("%d", &n);
//	int rec = 1;
//	int sum = 0;
//	int i = 0;
//	int j = 0;
//	for (i= 1 ; i <= n;i++) {
//		rec = 1;//计算n的阶乘之间，把rec初始为1
//		for (j = 1; j <= i;j++) {
//			rec *= j;
//		}
//		sum += rec; 
//	}
//	printf("%d", sum);
//	return 0;
//}


//方法二
//int main() {
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++) {
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

5.
//③.在一个有序数组中查找具体的某个数字n。编写int binsearch(int x, int v[], int n);功能：在v[0]<=v[1]<=v[2].....<=v[n-1]的数组中查找x.

int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	int left = 0;

	while (left <= right) {
		int mid = (right + left) / 2;
		if (arr[mid] < k) {
			left = mid + 1;
		}
		else if (arr[mid] > k) {
			right = mid - 1;
		}
		else
		{
			printf("k的下标已找到，为:%d\n", mid);
			break;
		}
	}
	if (left > right) {
		printf("此数不存在");
	}
	return 0;
}

6.
//④.编写代码，演示多个字符从两端移动，向中间汇集
#include <String.h>
#include <windows.h>
int main() {

	char arr1[] = "welcome to bit...";
	char arr2[] = "#################";
	int left = 0;
	int right = strlen(arr2) - 1;
	while (left <= right) {
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//休眠1秒
		system("cls");//清空屏幕
		left++;
		right--;
	}

	return 0;
}

7.
#include <string.h>
int main() {
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++) {
		printf("请输入密码:<\n");
		scanf("%s", password);

		if (strcmp(password, "123456") == 0) {
			printf("密码输入正确\n");
			break;
		}
		else
			printf("密码输入错误，请重新输入密码\n");

	}
	if (i == 3) {
		printf("三次密码输入错误，程序退出\n");
	}
	return 0;
}
