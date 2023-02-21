#include <stdio.h>

void main()
{
	int a, b, c, d;
	{
		a = 5 , 4;
		printf("%d\n", a);
		a =  (5 , 4);
		printf("%d\n", a);
	}
	{
		a = 8;
		
		b = (a++, ++a);
		printf("%d\n", b);
		
		a = 8;
		
		b = a++, ++a;
		printf("%d\n", b);
		
		b = (a++, ++a, a >> 2);
		printf("%d\n", b);
		printf("%d\n", a);
	}
	{
		a = 0, b = 1, c = -1;
		d = --a * (5 + b) / 2 - c++ * b;
	       printf("%d\n", d);
	}
}
