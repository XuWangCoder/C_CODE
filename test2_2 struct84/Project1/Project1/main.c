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
	//成员变量
	struct B sb;
	char name[20];//名字
	int age;//年龄
	char id[20];
}s1,s2;//s1和s2也是结构体变量
//s1,s2是全局变量

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
	//s是局部变量
	struct Stu s = { {'w',  20, 3.14}, "张三", 30, "202009393" };//对象
	//.   ->
	//printf("%c\n", s.sb.c);
	//printf("%s\n", s.id);
	struct Stu* ps = &s;
	//printf("%c\n", (*ps).sb.c);
	//printf("%c\n", ps->sb.c);
	print1(s);//传值调用
	print2(ps);//传址调用 首选 空间占用少，效率高。函数传参的时候，参数是需要压栈的。如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降
	return 0;
}



//函数调用的参数压栈
//栈，是一种数据结构，先进的后出，后进的先出
//压栈 出栈

