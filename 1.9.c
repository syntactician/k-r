#include <stdio.h>

int main()
{
	int c, lc;

	for(c = getchar(); c != EOF; lc = c, c = getchar())
		if(c != lc || c != ' ')
			putchar(c);
}
