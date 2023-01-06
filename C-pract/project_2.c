#include <stdio.h>

int main()
{
	int WAT;
	int CAT;
	CAT = 0;
	WAT = 0;
	// calculate west africa time 'WAT' from central africa time 'CAT'
	printf("this is the wat calculated from the cat\n");
	scanf("%i", &CAT );
	
	WAT = (CAT + 2);
		printf("showing that wat is two hours ahead of cat %i CAT: %i WAT\n", CAT, WAT);
		return 0;
}
