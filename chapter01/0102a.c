#include <stdio.h>

/* Print Celsius-Fahrenheit table for celsius = -20 ... 150 */

int main() {
	double fahrenheit, celsius;
	int lower, upper, step;
	
	lower = -20;	/* Lower limit of temperature table */
	upper = 150;	/* Upper limit */
	step = 10;	/* Step size */
	
	printf(" °C     °F\n");
	printf("––––––––––\n");
	
	celsius = lower;
	while (celsius <= upper) {
		fahrenheit = (9.0 / 5.0 * celsius) + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahrenheit);
		celsius = celsius + step;
	}
}
