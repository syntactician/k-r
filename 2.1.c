#include <stdio.h>

/*
 *	determine the range of char, short, int, long
 */

int main(void)
{
	signed int i, min, max;
	min = max = i = 0;

	while(++i)
	{
		if(i > max)
			max = i;
		if(i < min)
			min = i;
	}

	printf("%d - %d", min, max);
}
