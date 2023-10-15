#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

int num[10] = { 0 };

void add_to_multiset(int j,  int i, int k);


int main() {

	int i = 0, j=0 , k=1 ;

	while (i < k) {

		printf("�迭�� �߰��� ����?");
		scanf_s("%d", &num[i]);


		add_to_multiset(j,i, k);
		i++; 
		k ++;
	}
	return 0;
}

void add_to_multiset(int j,int i, int k)
{
	for (j = 0; j <= i; j++)
		printf("%d ", num[j]);
	printf("\n");
	
}