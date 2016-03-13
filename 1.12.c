#include <stdio.h>

/*
 *	cat, with one word per line
 */

#define IN  1
#define OUT 0

int main()
{
	int c, state;

	state = OUT;
	while ((c = getchar()) != EOF)
		if(c == ' ' || c == '\n' || c == '\t') {
			if(state == IN)
				printf("\n");
			state = OUT;
		} else {
			putchar(c);
			if (state == OUT)
				state = IN;
		}
}
