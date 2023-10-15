#include <stdio.h>
int a, b;
int electric_charge(int a)
{
	if (a <= 200)
		b = 910 + 93.3 * a;

	if (a >= 201 && a <= 400)
		b = 1600 + (93.3 * 200 + 187.9 * (a - 200));
	if (a > 400)
		b = 7300 + (93.3 * 200 + 187.9 * 200 + 280.6 * (a - 400));

	return b;

}

int main()
{
	while (1)
	{
		printf("�� ��뷮 (kwh)?");
		scanf_s("%d", &a);

		if (a == -1)
			break;
		printf("���� ���: %d ��\n", electric_charge(a));
	}
	return 0;
}