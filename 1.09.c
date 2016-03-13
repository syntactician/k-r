#include <stdio.h>

/*
 *	cat, reducing multiple consecutive blanks to single blanks
 */

int main()
{
	int c, lc;
	lc = -1;

	for(c = getchar(); c != EOF; lc = c, c = getchar())
		if(c != lc || c != ' ')
			putchar(c);
}
