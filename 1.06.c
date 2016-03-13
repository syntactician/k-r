#include <stdio.h>

int main()
{
	int c;

	for(c = getchar(); c != EOF; c = getchar())
		printf("%d", (c != EOF));

	printf("%d\n", (c != EOF));
}
