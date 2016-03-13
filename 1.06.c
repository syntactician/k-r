#include <stdio.h>

/*
 *	ensure that (getchar() != EOF) is always 0 or 1
 */

int main()
{
	int c;

	for(c = getchar(); c != EOF; c = getchar())
		printf("%d", (c != EOF));

	printf("%d\n", (c != EOF));
}
