#include <stdio.h> 
double discount_price(double price, double rate) 
{
	return (price * (1 - rate / 100));
}

int main() 
{
	double rate;
	double price = 1;

	printf("������(%%)? ");
	scanf_s("%lf", &rate);

	for ( ; ; )
	{
		printf("��ǰ�� ����? ");
		scanf_s("%lf", &price);
		printf("���ΰ�: %0.0lf \n", discount_price(price, rate));

		if (price == 0)
			break;
	}
			
	return 0;
}