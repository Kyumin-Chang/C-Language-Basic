#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

int num[10] = { 0 };

void add_to_set(int j, int i, int k, int r);


int main() {

	int i = 0, j = 0, k = 1, r=0;

	while (i < k) {

		printf("�迭�� �߰��� ����?");
		scanf_s("%d", &num[i]);


		add_to_set(j, i, k,r);
		i++;
		k++;
	}
	return 0;
}

void add_to_set(int j, int i, int k, int r)
{	
	for (r = 0; r < i; r++)
		if (num[r] == num[i])
		{
			printf("�ش� ���Ұ� �̹� [%d]�� �����մϴ�.\n", k);
			for (int l = r; r < i; l++)
				num[l] = num[l + 1];
			continue;
		}
	for (j = 0; j <= i; j++)
		printf("%d ", num[j]);
	printf("\n");


	

}