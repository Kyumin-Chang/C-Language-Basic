#include <stdio.h>
#define _CRT_SECURE_WARNINGS

int main()
{

	float money, day, month,choice, all;

	printf("�ð��� �޿�?");
	scanf_s("%f", &money);
	printf("���� �ٹ� �ð�?");
	scanf_s("%f", &day);
	printf("�Ѵ� �ٹ� �ϼ�?");
	scanf_s("%f", &month);
	printf("���� ���� ���� 0:������ 1:4�뺸�����(8.41%%) 2:�ҵ漼����(3.3%%)?");
	scanf_s("%f", &choice);

	all = money * (day*month);

	if (choice == 0)
	{
		printf("���� ���޿� : %.0f ��", all);
	}

	else if (choice == 1)
	{
		printf("���� ���޿� : %.0f ��", all*0.9159);
	}

	else
	{
		printf("���� ���޿� : %.0f ��", all*0.967);
	}

	return 0;
}