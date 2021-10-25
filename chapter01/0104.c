#include <stdio.h>

#define	LOWER	0	/* Lower limit of table */
#define	UPPER	300	/* Upper limit */
#define	STEP	20	/* Step size */

/* Print Fahrenheit-Celsius table */
int main() {
	int fahrenheit;
	
	for (fahrenheit = LOWER; fahrenheit <= UPPER; fahrenheit = fahrenheit + STEP)
		printf("%3d %6.1f\n", fahrenheit, (5.0/9.0)*(fahrenheit-32));
}
