#include <stdio.h>

#define IN  1
#define OUT 0

int main()
{
	int c, i, length, state;
	int lengths[10];
	float n, longest;

	state = OUT;
	length = 0;
	for(i = 0; i < 10; ++i)
		lengths[i] = 0;

	while ((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\n' || c == '\t') {
			if(state == IN) {
				if(length < 10) {
					lengths[length]++;
				} else {
					lengths[9]++;
				}
				length = 0;
			}
			state = OUT;
		} else {
			++length;
			if (state == OUT)
				state = IN;
		}
	}

	for(i = 1, longest = 0; i < 10; ++i)
		if(lengths[i] > longest)
			longest = lengths[i];


	for(i = 1; i < 10; ++i)
	{
		if(i < 9) {
			printf("%d  ", i);
		} else {
			printf("%d+ ", i);
		}

		for(n = 0; n < lengths[i]; n = n + (longest*longest / (25*lengths[i])))
		{
			printf("-");
		}
		printf("\n");
	}
}
