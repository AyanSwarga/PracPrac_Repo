#include <stdio.h>

int main()
{
	printf("char size: %lu bytes\n", sizeof(char));
	printf("int size: %lu bytes\n", sizeof(int));
	printf("short size: %lu bytes\n", sizeof(short));
	printf("float size: %lu bytes\n", sizeof(float));
	printf("double size: %lu bytes\n", sizeof(double));
	printf("long size %lu bytes\n", sizeof(long));
	printf("long double %lu bytes\n", sizeof(long double));
}
