#include <stdio.h>

/*
 *	replace the following loop without AND or OR
 *		for(i = 0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
 *			s[i] = c;
 */

#define MAXLINE 1000

int main(void)
{
	int i, c, lim;
	i = 0;
	lim = MAXLINE;

	for(i = 0; i < lim-1; ++i)
	{
		c = getchar();

		if(c == '\0')
		{
			printf("\n");
			return 0;
		}
		if(c == '\n')
		{
			printf("\n");
			return 0;
		}

		putchar(c);
	}
	return 0;
}
