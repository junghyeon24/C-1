#include <stdio.h>
#include <stdint.h>
#include <math.h>

double sv(int a[])
{
	int add1 = 0, add2 = 0;
	int average1, average2;
	double result;
	for (int i = 0; i < 5; i++)
	{
		add1 += a[i];
	}
	average1 = add1 / 5;
	for (int i = 0; i < 5; i++)
	{
		add2 += pow((a[i] - average1), 2);
	}
	average2 = add2 / 5;
	result = sqrt(average2);
	return result;
}

int main(void)
{
	int arr[5];
	double	StandardDeviation;

	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	StandardDeviation = sv(arr);
	printf("Standard Deviation = %f", StandardDeviation);
	return 0;
}