#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	float wide;

	printf("����Ʈ�� ����(��������)? ");

	scanf("%f", &wide);

	printf("%.2f �������� = %.2f ��", wide, wide*0.3025);

	return 0;

}