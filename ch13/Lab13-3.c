#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


void main()
{
	//��ȭ ���� ����ü
	typedef struct movie
	{
		char* title;		//��ȭ����
		int attendance;		//������
		char director[20];	//����
	}movie;

	movie box[] = {
		{"����", 17613000, "���ѹ�"},
		{"��������", 14257000, "������"},
		{"���׶�", 133833000}
	};

	//��ȭ ���׶��� ������ ���¿����� ����
	strcpy(box[2].director, "���¿�");
	
	printf("   ����     ����   ������\n");
	printf("==============================\n");
	for (int i = 0; i < 3; i++)
		printf("[%8s] %6s %d\n", box[i].title, box[i].director, box[i].attendance);



}