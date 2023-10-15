#include <stdio.h>
#include <string.h>
#include <ctype.h>
#pragma warning (disable:4996)

int count_space(const char* s);
int main()
{
	char str[100] = "Certain ward in a C program have special meaning, they are keywords.";
	puts(str);
	printf("���� ������ ����:%d", count_space(str));
	return 0;
}

int count_space(const char* s)
{
	int count = 0;
	while (s[0] != '\0') {
		if (isspace(s[0]))
			count++;
		s++;
	}
	return count;
}