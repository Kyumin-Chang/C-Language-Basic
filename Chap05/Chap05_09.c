#include <stdio.h>
#define _CRT_SECURE_WARNINGS

int main()
{
	int h, p, c, min;
	printf("[�ܹ��� 4000��, ����Ƣ�� 2000��, �ݶ� 1500��, ��Ʈ 6500��]\n");
	printf("�ܹ��� ����?");
	scanf_s("%d", &h);
	printf("����Ƣ�� ����?");
	scanf_s("%d", &p);
	printf("�ݶ� ����?");
	scanf_s("%d", &c);

	min = h < p ? (h < c ? h : c) : (p < c ? p : c);

	printf("��ǰ��        �ܰ�   ����   �ݾ�\n");
	printf("��Ʈ		6500   %d  %d\n", min, min*6500);

	if (min == h)
		printf("����Ƣ��	2000   %d   %d\n�ݶ�		1500   %d   %d\n", p - min, (p - min) * 2000, c - min, (c - min) * 1500);
	else if (min == p)
		printf("�ܹ���		4000   %d   %d\n�ݶ�		1500   %d   %d\n", h - min, (h - min) * 4000, c - min, (c - min) * 1500);
	else
		printf("�ܹ���		4000   %d   %d\n����Ƣ��	2000   %d   %d\n", h - min, 4000*(h - min), p - min, 2000*(p - min));

	printf("----------------------------------------\n");
	
	if (min == h)
		printf("�հ�                       %d",((p - min) * 2000) + ((c - min) * 1500))+min*6500;
	else if (min == p)
		printf("�հ�                       %d", ((h - min) * 4000) + ((c - min) * 1500)+min*6500);
	else
		printf("�հ�                       %d", ((h - min) * 4000) + ((p - min) * 2000)+min*6500);

	return 0;
}