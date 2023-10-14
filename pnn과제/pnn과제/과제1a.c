#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	

	for (int i = 2; i <= 9; i++)

	{
		printf("%d´ÜÀº\n", i);

		for (int j = 1; j <= 9; j++)
		{
			printf("%d X %d  = %d\n", i, j, i*j);
		}
		printf("\n\n");
	}

	

}