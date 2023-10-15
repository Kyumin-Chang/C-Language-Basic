#include <stdio.h>
int main()
{
	int arr[10] = { 23,45,62,12,99,83,23,50,72,37 };
	int i;
	int max, min;


	max = min = arr[0];
	printf("�迭:");


	for (i = 0; i < 10; i++)
	{
		printf("%3d", arr[i]);
	}

	printf("\n");
	for (i = 0; i < 10; i++)
	{
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];

	}
	for (i = 0; i < 10; i++) {

		if (arr[i] == max)
			printf("�ִ밪: �ε��� = %d, �� = %d\n", i, max);
		if (arr[i] == min)
			printf("�ּҰ�: �ε��� = %d, �� = %d\n", i, min);
	}

	return 0;
}
