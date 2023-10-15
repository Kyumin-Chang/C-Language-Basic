#include <stdio.h>
int main()
{
	float a, b, c, d;
	printf("�� ���� ��ǥ (x1, y1)?");
	scanf_s("%f %f", &a, &b);
	printf("�� �ٸ� ���� ��ǥ (x2, y2)");
	scanf_s("%f %f", &c, &d);
	printf("������ ����: %f", (d - b) / (c - a));
	return 0;

}