#include <stdio.h>
#include <stdint.h>

int main(void)
{
	int num;
	int result = 0;
	printf("Please enter a number :");
	scanf("%d", &num);

	for (int n = 2; n < num; n++)
	{
		if (num % n == 0)
		{
			result += 1;
		}
	}

	if (result > 0)
		printf("It is not a prime number.");
	else
		printf("It is a prime number.");
	return 0;
}