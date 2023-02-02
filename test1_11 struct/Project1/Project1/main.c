#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//创建一个学生类型
struct Stu{
	char name[20];//成员变量
	int age;
	double score;

};
//创建一个书类型
struct Book {

	char name[20];
	float price;
	char id[20];
};

int main() {
	struct Stu s = { "张三", 34, 34.4 };//结构体的创建和初始化
	struct Stu* ps = &s;
	printf("1:%s %d %lf\n", s.name, s.age, s.score); //结构体变量.成员变量; %lf打印双精度浮点型
	printf("2:%s %d %lf\n", (*ps).name, (*ps).age,  (*ps).score);
	printf("3:%s %d %lf\n", ps -> name, ps -> age, ps -> score);

	return 0;
}