#include <stdio.h>

int find_all_in_array(int* arr, int size, int key, int* index) 
{
	int result = 0, i, k = 0;
	for (i = 0; i < size; ++i) {
		if (arr[i] == key) 
		{
			index[k] = i;
			++result;
			++k;
		}
	}
	return result;
}

int main() 
{
	int arr[] = { 12, 45, 62, 12, 99, 83, 23, 12, 72, 37 };
	int i, size = 10, key, num;
	int index[10];

	for (i = 0; i < size; ++i) 
	{
		printf("%d ", arr[i]);
	}
	printf("\nã����? ");
	scanf_s("%d", &key);

	num = find_all_in_array(arr, size, key, index);
	printf("ã�� �׸��� ��� %d�� �Դϴ�.\n", num);
	printf("ã�� �׸��� �ε���: ");
	for (i = 0; i < num; ++i) 
	{
		printf("%d ", index[i]);
	}
	return 0;
}