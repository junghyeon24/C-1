#include <stdio.h>
#include <stdint.h>

int change(int num)
{
	if (num == 1)
		return 1;
	else if (num == 0)
		return;
	else
		return (num % 2) + 10 * change(num / 2);
}

int main(void)
{
	int num, result;
	printf("Please enter a number:");
	scanf("%d", &num);
	result = change(num);
	printf("%d", result);
	return 0;
}