#define _CRT_SECURE_NO_WARNINGS 1
//����n�Ľ׳�
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
////��.����n�Ľ׳�
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
//��.����1��+2��+3��+.....+10!
//����һ
//int main() {
//
//	int n = 0;
//	scanf("%d", &n);
//	int rec = 1;
//	int sum = 0;
//	int i = 0;
//	int j = 0;
//	for (i= 1 ; i <= n;i++) {
//		rec = 1;//����n�Ľ׳�֮�䣬��rec��ʼΪ1
//		for (j = 1; j <= i;j++) {
//			rec *= j;
//		}
//		sum += rec; 
//	}
//	printf("%d", sum);
//	return 0;
//}


//������
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
//��.��һ�����������в��Ҿ����ĳ������n����дint binsearch(int x, int v[], int n);���ܣ���v[0]<=v[1]<=v[2].....<=v[n-1]�������в���x.

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
			printf("k���±����ҵ���Ϊ:%d\n", mid);
			break;
		}
	}
	if (left > right) {
		printf("����������");
	}
	return 0;
}

6.
//��.��д���룬��ʾ����ַ��������ƶ������м�㼯
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
		Sleep(1000);//����1��
		system("cls");//�����Ļ
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
		printf("����������:<\n");
		scanf("%s", password);

		if (strcmp(password, "123456") == 0) {
			printf("����������ȷ\n");
			break;
		}
		else
			printf("�������������������������\n");

	}
	if (i == 3) {
		printf("��������������󣬳����˳�\n");
	}
	return 0;
}
