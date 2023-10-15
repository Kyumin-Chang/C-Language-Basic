#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int sec, hour, min, s;

	printf("��� �ð�(��) ?  ");

	scanf_s("%d", &sec);

	hour = sec / 3600;

	min = (sec-3600*hour) / 60;

	s = sec - ((3600 * hour) + (60 * min));


	printf("��� �ð��� %d�ð� %d�� %d���Դϴ�.", hour,min,s );

	return 0;

}