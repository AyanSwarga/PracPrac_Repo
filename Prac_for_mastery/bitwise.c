#include <stdio.h>
void main()
{
	int a =10, c;
	
	c = (a + 1) << 2; //left operand * (2 raised to power n); n = right operand
	printf("%d\n", c);
	
	c = (a +2) >> 1; //left opereand / (2raised to power n); n = right operand
	printf("%d\n", c);
	
	c = ~(a + 3);	// -(n+1); n = defined variable	
	printf("%d\n", c);

}

/* bit is the smallest unit to store data in memory;
  bitwise operators
##### & - and
##### | - or
##### ^ - xor
##### ~ - not
##### << - left shift
##### >> - right shift */
