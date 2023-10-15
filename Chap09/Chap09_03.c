#include <stdio.h>
#pragma warning (disable:4996)
int main(void)
{
	char str[100] = "Lowercase letters will be changed into UPPERCASE LETTERS";
	int i;

	printf("���ڿ�? %s\n", str);
	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] - 'a' + 'A';
		}
		else
		{
			if ((str[i] >= 'A') && (str[i] <= 'Z'))
			{
				str[i] = str[i] - 'A' + 'a';
			}
		}
	}
	printf("��ȯ ��: %s\n", str);
	return 0;
}
