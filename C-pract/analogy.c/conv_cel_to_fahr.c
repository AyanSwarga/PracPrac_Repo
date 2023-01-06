#include <stdio.h>

/**
 * C program to convert temperature from degree celsius to fahrenheit
*/

int main()
{
	float celsius, fahrenheit;
	/* Input temperature in celsius */
	printf("temperature in Celsius = 100: ");
	scanf("%f", &celsius);

	/* celsius to fahrenheit conversion formula */
	fahrenheit = (celsius * 9 / 5) + 32;
	
	printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
	
	return 0;
}
