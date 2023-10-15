#include<stdio.h>

int main() 
{
	int x[3][3] = { {10, 20, 30},{40, 50, 60}, {70, 80, 90} }; 
	int y[3][3] = { {9,8,7},{6,5,4}, {3,2,1} }; 
	int c[3][3];
	int i, j;
	int sum = 0;

	printf("x ���: \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf(" %d ", x[i][j]);
		}
		printf("\n");
	}

	printf("y ���: \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf(" %d ", y[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			sum = 0;
				sum = x[i][j] + y[i][j];
			c[i][j] = sum;
		}
	}

	printf("\nX + Y ���: \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf(" %d ", c[i][j]);
		}
		printf("\n");
	}

	return (0);
}