#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int main()
{
	char sentence[100] = "";
	char Ȯ����[100] = "";
	char name[20];
	char form[20];

	printf("���ϸ�?");
	scanf("%s", name);

	printf("Ȯ����?");
	scanf("%s", form);

	strcat(sentence, name);
	strcat(Ȯ����, form);
	

	printf("%s.%s\n", sentence,Ȯ����);
	return 0;

}