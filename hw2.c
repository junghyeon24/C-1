#include <stdio.h>

int main(void)
{
	double km, mile;
	printf("Plese enter kilometers:");
	scanf("%lf", &km);
	mile = km * 1.609;
	printf("%.1f km is equal to %.1f miles.", km, mile);
	return 0;
}