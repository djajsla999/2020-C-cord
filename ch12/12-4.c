#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() 
{
	//�������� �������� ����
	register int sum = 0;

	//�޸𸮿� ����Ǵ� �Ϲ� �������� ����
	int max;
	printf("���� ���� �Է� >> ");
	scanf("%d", &max);

	//�������� ���� �������� ����
	for (register int count = 1; count <= max; count++)
		sum += count;

	printf("�� : %d\n", sum);

	
}
