#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef struct city
{
	char name[100];
	char country[100];
	char population[100];
}City;

int main(void)
{
	int i;
	City arr[3];
	printf("Input three cities: \n");
	
	for (i = 0; i < 3; i++)
	{
		printf("Name> "); fgets(arr[i].name, sizeof(arr[i].name), stdin);
		printf("Country> "); fgets(arr[i].country, sizeof(arr[i].country), stdin);
		printf("Population> "); fgets(arr[i].population, sizeof(arr[i].population), stdin);
		(arr[i].name)[strlen(arr[i].name) - 1] = 0;
		(arr[i].country)[strlen(arr[i].country) - 1] = 0;
		(arr[i].population)[strlen(arr[i].population) - 1] = 0;

	}

	for (i = 0; i < 3; i++)
		printf("%d. %s in %s with a population of %s people\n", i+1, arr[i].name, arr[i].country, arr[i].population);
	return 0;
}