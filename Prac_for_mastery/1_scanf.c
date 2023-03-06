#include <stdio.h>

void main()
{
	int a;
	float b, mul;
	char c;
	printf("enter value\n");
	scanf("%d  %f %c \n", &a, &b, &c);
	mul = a * b * c;
	printf("%f\n", mul);
}
