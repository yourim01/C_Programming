#include<stdio.h>
#include<string.h>

#define SIZE 3

struct student {
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student s = { 24, "Kim", 4.3 };
	struct student* p;

	p = &s;

	printf("�й�=%d, �̸�=%s,  ����=%f \n", s.number, s.name, s.grade);
	printf("�й�=%d, �̸�=%s,  ����=%f \n", (*p).number, (*p).name, (*p).grade);

	return 0;
}