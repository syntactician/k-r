#include <stdio.h>

/*
 *	print histogram of character frequency in iput
 *
 *	TODO:
 *		- print vertically
 *		- print for individual characters?
 */

int main()
{
	int c, i;
	int lengths[4];
	char types[4][6] = {"white", "digit", "alpha", "other"};
	float n, longest;

	for(i = 0; i < 4; ++i)
		lengths[i] = 0;

	while((c = getchar()) != EOF)
		if(c == ' ' || c == '\n' || c == '\t')
			lengths[0]++;
		else if(c >= '0' && c <= '9')
			lengths[1]++;
		else if(c >= 'A' && c <= 'z')
			lengths[2]++;
		else
			lengths[3]++;

	for(i = 1, longest = 0; i < 4;  ++i)
		if(lengths[i] > longest)
			longest = lengths[i];

	for(i = 0; i < 4; ++i)
	{
		printf("%s ", types[i]);
		for(n = 0; n < lengths[i]; n = n + (longest*longest) / (25*lengths[i]))
			printf("-");
		printf("\n");
	}
}
