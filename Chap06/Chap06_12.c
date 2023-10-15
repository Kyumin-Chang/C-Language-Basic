#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void calculator(float a, char op, float b) {

	switch (op) {
	case '+':
		printf("%f + %f = %f\n", a, b, a + b);
		break;
	case '-':
		printf("%f - %f = %f\n", a, b, a - b);
		break;
	case '*':
		printf("%f * %f = %f\n", a, b, a *b);
		break;
	case '/':
		if (b != 0)
			printf("%f / %f = %f\n", a, b, a / b);
		else
			printf("0���� ���� �� �����ϴ�.\n");
		break;
	default:
		printf("�߸��� �����Դϴ�.\n");
		break;
	}
}


int main()
{
	float a, b;
	char op;

	while (1)
	{
		printf("���� (0 0 0 �Է� �� ����) ?");
		scanf_s("%f %c %f", &a, &op, 1, &b);

		if (a == 0 && op == '0' && b == 0)
			break;

		calculator(a, op, b);
	}
	return 0;

}

