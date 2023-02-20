#include <stdio.h>
void main()
{
	int a = 8, b = 3, c;

	c = a == b && b < a;
	printf("%d\n", c);

	 c = a == b || b < a;
	printf("%d\n", c);
	
	c =! a > b && a < b || a == b && b < a || a >= b && b < a;
	printf("%d\n", c);
	
	c = a++ && ++b || a > b && a < b;
	printf("%d\n", c);
	
	c = a <= b || a >= b && a == b && b >= a || !2;
	printf("%d\n", c);
	
	c = a && ! 0;
	printf("%d\n", c);

	c = b && ! 1;
		printf("%d\n", c);
	
		c = ! (b == a);
	printf("%d\n", c);

	c = a < b || !1;
	printf("%d\n", c);
	
	c = ! b;
		printf("%d\n", c);

		/*&&---> when 0 is encountered, the logic is false (0)
		||---> when 1 is encountered, the logic is true (1)
		!----> turns true false, and turns false true */
}
