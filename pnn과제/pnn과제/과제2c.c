#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int  a;

	scanf("%d", &a);

	for (int i = 1; i <= a; i++)
	{
		for (int k = 1; k <= a - i; k++)
		{
			printf(" ");
		}
		for (int j = 1; j <= i * 2 - 1; j++)
		{
			printf("*");
		}

		printf("\n");
	}


	for (int i = a; i >= 1; i--)
	{
		for (int k = 1; k <= a - i; k++)
		{
			printf(" ");
		}
		for (int j = 1; j <= i * 2 - 1; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}