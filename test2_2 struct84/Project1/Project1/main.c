#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct B
{
	char c;
	short s;
	double d;
};

struct Stu
{
	//��Ա����
	struct B sb;
	char name[20];//����
	int age;//����
	char id[20];
}s1,s2;//s1��s2Ҳ�ǽṹ�����
//s1,s2��ȫ�ֱ���

void print1(struct Stu s)
{
	printf("%c %d %lf %s %d %s\n", s.sb.c, s.sb.s, s.sb.d, s.name, s.age, s.id);
}

void print2(struct Stu* ps)
{
	printf("%c %d %lf %s %d %s", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
}

int main()
{
	//s�Ǿֲ�����
	struct Stu s = { {'w',  20, 3.14}, "����", 30, "202009393" };//����
	//.   ->
	//printf("%c\n", s.sb.c);
	//printf("%s\n", s.id);
	struct Stu* ps = &s;
	//printf("%c\n", (*ps).sb.c);
	//printf("%c\n", ps->sb.c);
	print1(s);//��ֵ����
	print2(ps);//��ַ���� ��ѡ �ռ�ռ���٣�Ч�ʸߡ��������ε�ʱ�򣬲�������Ҫѹջ�ġ��������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½�
	return 0;
}



//�������õĲ���ѹջ
//ջ����һ�����ݽṹ���Ƚ��ĺ����������ȳ�
//ѹջ ��ջ

