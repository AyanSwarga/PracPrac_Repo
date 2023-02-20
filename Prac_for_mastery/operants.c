#include <stdio.h>
void main()
{
	//float a =8, b = 7;
	int a = 8, b = 7;
	printf("a+b = %d\n", a+b);
	printf("a-b = %d\n", a-b);
	printf("a*b = %d\n", a*b);
	printf("a/b = %d\n", a/b);
	printf("a%%b = %d\n",a%b);

	a = -8, b = 7;
	printf("a/b = %d\n", a/b);
	printf("a%%b = %d\n", a%b);
	printf("b%%a = %d\n", b%a);


	/*printf("a+b = %f\n", a+b);
	printf("a-b = %f\n", a-b);
	printf("a*b = %f\n", a*b);
	printf("a/b = %f\n", a/b);*/
	//printf("a%%b =%f\n", a%b); modulo does not work with float
}
