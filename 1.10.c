#include <stdio.h>

/*
 *	cat, showing escape codes
 */

int main()
{
	int c;

	for(c = getchar(); c != EOF; c = getchar())
		if(c == '\t')
			printf("\\t");
		else if(c == '\b')
			printf("\\b");
		else if(c == '\\')
			printf("\\\\");
		else
			putchar(c);
}
