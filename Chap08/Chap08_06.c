#include <stdio.h>

void get_min_max(int *max ,int *min);
int arr[10] = { 23,45,62,12,99,83,23,50,72,37 };
int main()
{
	printf("�迭:");
	for (int i = 0; i < 10; i++)
		printf("%3d", arr[i]);
	printf("\n");

	int �ִ밪, �ּҰ�;

	get_min_max(&�ִ밪, &�ּҰ�);
	printf("�ִ밪:%d \n�ּҰ�:%d", �ִ밪, �ּҰ�);

	return 0;
}

void get_min_max(int *max, int *min)
{
	*min = arr[0];
	*max = arr[0];

	for (int i = 0; i < 10; i++)
	{
		if (*max < arr[i])
			*max = arr[i];
		if (*min > arr[i])
			*min = arr[i];
	}
}