#include <stdio.h>
#define _CRT_SECURE_WARNINGS

int main() {

	int m,fman,man,fchun,chun,fbag,bag,ship;

	printf("�Ž�����?");
	scanf_s("%d", &m);

	fman = m / 50000;
	man = (m - (fman * 50000)) / 10000;
	fchun = (m - (fman * 50000 + man * 10000)) / 5000;
	chun = (m - (fman * 50000 + man * 10000 + fchun * 5000))/1000;
	bag = (m - (fman * 50000 + man * 10000 + fchun * 5000 + chun * 1000)) / 100;
	ship = (m - (fman * 50000 + man * 10000 + fchun * 5000 + chun * 1000+bag*100)) / 10;
	printf("�Ž����� (10�� �̸� ����) : %d\n", m/10*10);
	printf("50000��\t%d��\n", fman);
	printf("10000��\t%d��\n", man);
	printf("5000��\t%d��\n", fchun);
	printf("1000��\t%d��\n", chun);
	printf("100��\t%d��\n", bag);
	printf("10��\t%d��\n", ship);

}