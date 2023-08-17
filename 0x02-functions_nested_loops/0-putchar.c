#include "main.h"

/**
 * main - prints "_putchar"
 *
 * return: 0
 */

int main(void)
{
	int x;
	int y;
	int z;

	x = 89;
	y = 7;
	z = x % y;

	if (z < 10)
	{
		printf("_putchar\n");
	}
	else
	{
		printf("%d", z);
	}

	return (0);
}
