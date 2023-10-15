#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 
#include <string.h>


typedef struct ACCOUNT
{
	char id[10];
	char pass[10];
} admin;


void main()
{
	admin dab1 = { "admin1", "12341" };
	admin dab2 = { "admin2", "12342"};
	admin dab3 = { "admin3", "12343" };
	admin dab4 = { "admin4", "12344" };
	admin dab5 = { "admin5", "123455" };
	admin in;
	int k = 0;
	while (k < 3)
	{
		printf("ID : ");
		scanf("%s", in.id);
		printf("PW : ");
		scanf("%s", in.pass);

		if ((strcmp(in.id, dab1.id) == 0 && strcmp(in.pass, dab1.pass) == 0) || (strcmp(in.id, dab2.id) == 0 && strcmp(in.pass, dab2.pass) == 0) || (strcmp(in.id, dab3.id) == 0 && strcmp(in.pass, dab3.pass) == 0) ||
			(strcmp(in.id, dab4.id) == 0 && strcmp(in.pass, dab4.pass) == 0) || (strcmp(in.id, dab5.id) == 0 && strcmp(in.pass, dab5.pass) == 0))
		{
			printf("�α��� ����!\n"); break;
		}

		if ((strcmp(in.id, dab1.id) != 0) && (strcmp(in.id, dab2.id) != 0) && (strcmp(in.id, dab3.id) != 0) && (strcmp(in.id, dab4.id) != 0) && (strcmp(in.id, dab5.id) != 0))
			printf("�ش� ���̵� �����ϴ�.\n");
		else if ((strcmp(in.pass, dab1.pass) != 0) || (strcmp(in.pass, dab2.pass) != 0) || (strcmp(in.pass, dab3.pass) != 0) || (strcmp(in.pass, dab4.pass) != 0) || (strcmp(in.pass, dab5.pass) != 0))
			printf("�н����尡 Ʋ�Ƚ��ϴ�..\n");

		k++;
	}
	if (k == 3)
		printf("�α��� ���� !\n");

}