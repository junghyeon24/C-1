#include <stdio.h>

int main(void)

{
	for (int num1 = 0; num1 < 5; num1++)
	{
		for (int num2 = num1; num2 < 4; num2++)
			printf("%s", " ");
		for (int num3 = 0; num3 < (1 + num1 * 2); num3++)
			printf("%s", "*");
		printf("\n");
	}
	return 0;
}