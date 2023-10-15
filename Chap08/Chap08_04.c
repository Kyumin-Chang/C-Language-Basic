#include <stdio.h>
int main(void)
{	
	int i = 0;
	double arr[10] = { 0.10, 2.00, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };
	double sum = 0;

	for ( i = 0; i < 10; i++)
		sum += *(arr + i);

	printf("��� : %lf\n", sum / 10);

	return 0;

}