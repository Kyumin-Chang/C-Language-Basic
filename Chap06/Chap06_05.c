#include <stdio.h>

int num;
int a = 0, b = 0;

void is_even(int num)
{

	if (num % 2 == 0)
		a = a++;
}
void is_odd(int num)
{

	if (num % 2 == 1)
		b = b++;
		
}
int main()
{
	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���. (�������� 0 �Է�)");
	
	while (1)

	{
		scanf_s("%d", &num);	

		if (num == 0)
			break;
		is_even(num);
		is_odd(num);	
	}
	printf("�Է¹��� ���� �� ¦���� %d ��, Ȧ���� %d�� �Դϴ�.", a, b);
	return 0;
}
