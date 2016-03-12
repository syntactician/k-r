#include <stdio.h>

int main()
{
	int c, lc;
	lc = -1;

	for(c = getchar(); c != EOF; lc = c, c = getchar())
		if(c != lc || c != ' ')
			putchar(c);
}
