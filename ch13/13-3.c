#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main()
{
	struct student
	{
		int snum;
		char* dept;
		char name[12];
	};
	struct student hong = { 201800001, "컴푸터정보공학과", "홍길동" };
	struct student na = { 201800002 };
	struct student bae = { 201800003 };

	scanf("%s", na.name);
	na.dept = "컴퓨터정보공학과";
	bae.dept = "기계공학과";
	strcpy(bae.name, "배상문");

	printf("[%d, %s, %s]\n", hong.name, hong.dept, hong.name);
	printf("[%d, %s, %s]\n", na.name, na.dept, na.name);
	printf("[%d, %s, %s]\n", bae.snum, bae.dept, bae.name);

	struct student one;
	one = bae;
	if (one.snum == bae.snum)
		printf("학번이 %d으로 동일합니다.\n", one.snum);

	if (one.snum == bae.snum && !strcmp(one.name, bae.name) && !strcmp(one.dept, bae.dept))
		printf("내용이 같은 구조체 입니다.\n");
}
