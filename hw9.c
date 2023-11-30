#include <stdio.h>
#include <stdint.h>
#include <string.h>

int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return ch;
}

int main(void)
{
	char ch[50];
	printf("Input> ");
	fgets(ch, strlen(ch),stdin);

	for (int i = 0; i < strlen(ch); i++)
	{
		ch[i] = convCase(ch[i]);
	}

	printf("Output> %s", ch);
	return 0;
}