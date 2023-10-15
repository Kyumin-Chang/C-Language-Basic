#include <stdio.h>
#define _CRT_SECURE_WARNINGS


int main() {
	double monthrate, rate;
	int standard;
	printf("�� ��뷮 (kwh) ? ");
	scanf_s("%lf", &monthrate);

	if (monthrate <= 200) {
	
		standard = 910; rate = (93.3*monthrate);
	}
	else if (monthrate >= 201 && monthrate <= 400) {
	
		standard = 1600; rate = (200 * 93.3 + (monthrate - 200)*187.9);
	}
	else if (monthrate > 400) {
	
		standard = 7300; rate = (56240 + (monthrate - 400)*280.6);
	}

	printf("������ �հ� : %7.0lf��\n", standard + rate);
	printf("   - �⺻ ���:%7d��\n", standard);
	printf("   - ���·����:%7.0lf��\n", rate);

	return 0;
}

