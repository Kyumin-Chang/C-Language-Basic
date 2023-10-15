#include <stdio.h>
int main()
{
	int arr[10] = { 23,45,62,12,99,83,23,50,12,37 };
	int i;
	int k;
	printf("�迭:");

	for (i = 0; i < 10; i++)
		printf("%3d", arr[i]);
	printf("\n");
	printf("ã����?");
	scanf_s("%d", &k);

	for (i = 0; i < 10; i++)
	{
		if (k == arr[i])
			k == arr[i];
	}

	for (i = 0; i < 10; i++)
		if (arr[i] == k)
			printf("%d�� %d��° �����Դϴ�.", k, i);
	return 0;
}