#include <stdio.h>

/* Print Fahrenheit-Celsius table for fahrenheit = 0, 20, ..., 300 */

int main() {
	double fahrenheit, celsius;
	int lower, upper, step;
	
	lower = 0;	/* Lower limit of temperature table */
	upper = 300;	/* Upper limit */
	step = 20;	/* Step size */
	
	printf(" °F     °C\n");
	printf("––––––––––\n");
	
	fahrenheit = lower;
	while (fahrenheit <= upper) {
		celsius = (5.0/9.0) * (fahrenheit-32.0);
		printf("%3.0f %6.1f\n", fahrenheit, celsius);
		fahrenheit = fahrenheit + step;
	}
}
