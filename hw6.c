#include <stdio.h>
#include <stdint.h>

int main(void)
{
	int arr[5], odd[100], even[100];
	int i, j = 0, k = 0;

	printf("Please input five integers: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even[j] = arr[i];
			j += 1;
		}
		else
		{
			odd[k] = arr[i];
			k += 1;
		}
	}

	
	printf("Odd numbers: ");
	for (i = 0; i < k; i++)
	{
		printf("%d ", odd[i]);
	}
	printf("\n");
	printf("Even numbers: ");
	for (i = 0; i < j; i++)
	{
		printf("%d ", even[i]);
	}
	return 0;
}