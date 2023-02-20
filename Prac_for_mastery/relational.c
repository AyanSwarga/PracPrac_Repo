#include <stdio.h>
void main()
{
	int a = 18, b = 9, c, d, e = 10, f;
	printf("%d\n", c = b++);
	printf("%d\n", d = b);
	printf("%d\n", a < b < c > d);
	printf("%d\n", b == c);
	printf("%d\n", c + 1 > e);
	printf("%d\n", a + c == b > e < c + d);
	
	f = a > b > d < c;
		printf("%d\n", f != 1);

	printf("%d\n", a + c == b >= e < c + d != 1);
	printf("%d\n", '+' == '+');
	printf("%d\n", '<' > '>');

}
