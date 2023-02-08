#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>

/*�ⷨһ�������棬ʹ�������ȥ��֪ʶ��*/

int remove_repeat(int* list, int size)
{
    int i, j, k;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (list[i] == list[j])//�ҵ��ظ�������֮�󣬽����������������ǰŲ��
            {
                for (k = j; k < size - 1; k++)
                {
                    list[k] = list[k + 1];
                }
                j--;//�����������������ǰŲ֮��jָ���ֵҲӦ����ǰŲ1��λ�ã�������޷�����ԭ��j+1λ�õĶԱȣ�����������1,0,1,1����ô���һ��1�ͻᱻ���ԡ�
                size--;//�ܴ�С��1
                list[k] = 0;//���油0
            }
        }
    }
    return size;
}

void quick_sort(int* list, int left, int right)
{
    if (left >= right)
        return;
    int i = left, j = right, key = list[left];//ȡ��������ߵ�Ԫ��ֵΪkey�����齫����keyֵ����Ϊ�����֣���߱�keyС���ұ߱�key��
    while (i < j)
    {
        while (list[j] >= key && i < j)//�ȴ��������ƶ�j�ҵ���keyС��ֵ����j����ֵ��ֵ��i��
            j--;
        list[i] = list[j];

        while (list[i] <= key && i < j)//�������ң��ƶ�i�ҵ���key���ֵ����i����ֵ��ֵ��j��
            i++;
        list[j] = list[i];

    }
    list[i] = key;//key��λ��Ϊi���Ѿ�ȷ���ˣ�������Ҫ��0 ~ i-1�� i+1 ~ n��������
    quick_sort(list, left, i - 1);//�� 0 ~ i-1 ��������
    quick_sort(list, i + 1, right);//�� i+1 ~ n ��������
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