#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����һ��ѧ������
struct Stu{
	char name[20];//��Ա����
	int age;
	double score;

};
//����һ��������
struct Book {

	char name[20];
	float price;
	char id[20];
};

int main() {
	struct Stu s = { "����", 34, 34.4 };//�ṹ��Ĵ����ͳ�ʼ��
	struct Stu* ps = &s;
	printf("1:%s %d %lf\n", s.name, s.age, s.score); //�ṹ�����.��Ա����; %lf��ӡ˫���ȸ�����
	printf("2:%s %d %lf\n", (*ps).name, (*ps).age,  (*ps).score);
	printf("3:%s %d %lf\n", ps -> name, ps -> age, ps -> score);

	return 0;
}