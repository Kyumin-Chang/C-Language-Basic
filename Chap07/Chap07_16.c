#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int num[10] = { 23,45,62,12,99,83,23,50,72,37 };


int main(){

	int find,i;
	printf("ã����? ");
	scanf_s("%d", &find);
	for (i = 0; i < 10; i++)
	{
		if (find == num[i])
			printf("%d�� %d��° �����Դϴ�.", find, i);
		else
			continue; 
		
	}
	return 0;
}