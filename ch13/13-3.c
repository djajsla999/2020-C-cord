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
	struct student hong = { 201800001, "��Ǫ���������а�", "ȫ�浿" };
	struct student na = { 201800002 };
	struct student bae = { 201800003 };

	scanf("%s", na.name);
	na.dept = "��ǻ���������а�";
	bae.dept = "�����а�";
	strcpy(bae.name, "���");

	printf("[%d, %s, %s]\n", hong.name, hong.dept, hong.name);
	printf("[%d, %s, %s]\n", na.name, na.dept, na.name);
	printf("[%d, %s, %s]\n", bae.snum, bae.dept, bae.name);

	struct student one;
	one = bae;
	if (one.snum == bae.snum)
		printf("�й��� %d���� �����մϴ�.\n", one.snum);

	if (one.snum == bae.snum && !strcmp(one.name, bae.name) && !strcmp(one.dept, bae.dept))
		printf("������ ���� ����ü �Դϴ�.\n");
}
