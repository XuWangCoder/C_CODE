#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>

/*解法一：基础版，使用排序和去重知识。*/

int remove_repeat(int* list, int size)
{
    int i, j, k;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (list[i] == list[j])//找到重复的数字之后，将后面的数字依次向前挪。
            {
                for (k = j; k < size - 1; k++)
                {
                    list[k] = list[k + 1];
                }
                j--;//当后面的数字依次向前挪之后，j指向的值也应该向前挪1个位置，否则会无法进行原本j+1位置的对比，比如有序列1,0,1,1，那么最后一个1就会被忽略。
                size--;//总大小减1
                list[k] = 0;//后面补0
            }
        }
    }
    return size;
}

void quick_sort(int* list, int left, int right)
{
    if (left >= right)
        return;
    int i = left, j = right, key = list[left];//取数组坐左边的元素值为key，数组将按照key值划分为两部分，左边比key小，右边比key大；
    while (i < j)
    {
        while (list[j] >= key && i < j)//先从右往左，移动j找到比key小的值，将j的数值赋值至i；
            j--;
        list[i] = list[j];

        while (list[i] <= key && i < j)//从左往右，移动i找到比key大的值，将i的数值赋值至j；
            i++;
        list[j] = list[i];

    }
    list[i] = key;//key的位置为i，已经确定了，所以需要将0 ~ i-1和 i+1 ~ n继续排序
    quick_sort(list, left, i - 1);//将 0 ~ i-1 继续排序
    quick_sort(list, i + 1, right);//将 i+1 ~ n 继续排序
}
int main(void)
{
    int sum = 0;
    int num = 0;
    while (scanf("%d", &sum) != EOF)
    {
        int* numList = (int*)malloc(sizeof(int) * sum);
        int i = sum;
        while (i--)
        {
            scanf("%d", &num);
            numList[i] = num;
        }
        int size = remove_repeat(numList, sum);
        quick_sort(numList, 0, size - 1);
        for (int i = 0; i < size; i++)
            printf("%d\r\n", numList[i]);
    }
}