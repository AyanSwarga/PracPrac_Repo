#include <stdio.h>
/*
 * convfloat - convert naira to dollar in float
 */
float main()
{
	float naira, dollar;
	
	printf("Naira = 1: ");
	scanf("%f", &dollar);
	naira = (dollar * 1 / 550);
	printf("%.3f Naira = %.3f Dollar\n", dollar, naira);
	return 0;
}
