#include <stdio.h>

/* Copy input to output */
int main() {
	int c;
	
	printf("EOF is %d.\n\n", EOF);
	
	while ((c = getchar()) != EOF) {
		putchar(c);
	}
}
