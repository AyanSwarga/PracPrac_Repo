#include <stdio.h>

/**
 * conv - convert naira to dollar and multipy
 */
int main()
{
	int naira, dollar;
	/* Input amount in naira */
	printf("Dollar = 1: ");
	scanf("%i", &dollar);

	/* naira to dollar vonversion formula */
	naira = (dollar * 550/1);
	printf("%i Dollar = %i Nairia\n", dollar, naira);
	{
		for(dollar = 1; dollar <= 10; ++dollar)
		printf("%i Dollar = %i Naira\n", dollar, naira);
	}
	return 0;
}

