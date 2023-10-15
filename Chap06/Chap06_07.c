#include <stdio.h> 

int is_prime(int n)
{
	int i = 0;
	int last = n / 2;
	if (n <= 1)
	{
		return 0;
	}
	for (i = 2; i <= last; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int N, a = 0;
	printf("1 ~ N������ �Ҽ��� ���մϴ�. N��?");
	scanf_s("%d", &N);
	int i = 0;
	for (i = 1; i <= N; i++)
	{
		if (is_prime(i))
		{
			printf("%4d", i);
			a++;
		}
	}
	printf("\n�Ҽ��� ��� %d�� �Դϴ�.", a);
	return 0;
}
