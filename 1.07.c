#include <stdio.h>

/*
 *	print value of EOF
 */

int main()
{
	int c;

	while((c = getchar()) != EOF)
		getchar();

	printf("EOF is %d\n", c);
}
