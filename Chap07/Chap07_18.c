#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

int num[10]= {0};


int main() {

	int i=0,j,k;

	while (i<10) {

		printf("�迭�� �߰��� ����?");
		scanf_s("%d", &num[i]);
		for (k = 0; k < i; k++)
			if (num[k] == num[i])
			{
				printf("�ش� ���Ұ� �̹� [%d]�� �����մϴ�.\n", k);
				for (int l = k; k < i; l++)
					num[l] = num[l + 1];
			}
				

		for (j = 0; j <= i; j++)
			printf("%d ", num[j]);
		printf("\n");
		i++;
	}
	return 0;
}