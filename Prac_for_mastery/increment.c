#include <stdio.h>
void main()
{
	int i = 6;
	int j = 2;
	int c, x;
	{
	j = i+6;
		 printf("%d", j);
	j = ++i;
	printf("%d", i);
	};

	{
		j = i++;
			printf("%d", j);
		j = 3+i;
		printf("%d", i);

	}; // this is to output j == 12, i == 7 and j == 7, i == 8
	{
		i = 8, j = 5;
		c = j + (-i);
				printf("%d", c);
				i = -c;
				printf("%d", i);
	};
	
	{
		i = 9, j = 3;
		x = (i > j) ? i : j; 
		/*if the condition is true, the value of the first argument is assigned and printed, but if false, 
		  the value of the next argument is assighed and printed */ 

		printf("%d", x);
	}


}
