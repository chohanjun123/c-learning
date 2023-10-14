#include <stdio.h>
# pragma warning(disable:4996)

int main()
{

	int a;

	scanf("%d", &a);
		printf("%d¥‹¿∫\n" , a);

	for (int i = 1; i <= 9; i++)
	{
		printf("%d X %d = %d\n", a, i, a*i);
	}

	return 0;
}