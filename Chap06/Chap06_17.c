#include <stdio.h>
int x, y, k;
int i = 0;
int get_quadrant(int x, int y)
{
	if (x > 0 && y > 0)
		k = 1;
	if (x > 0 && y < 0)
		k = 4;
	if (x < 0 && y > 0)
		k = 2;
	if (x < 0 && y < 0)
		k = 3;

	return k;
}

int main()
{
	while (1) {

		printf("���� ��ǥ (x ,y)?");
		scanf_s("%d %d", &x, &y);
		if (x == 0 && y == 0)
			break;
		printf("%d ��и���  ���Դϴ�.\n", get_quadrant(x, y));
	}

		

		

}