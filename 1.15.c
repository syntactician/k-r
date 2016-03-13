#include <stdio.h>

/*
 *	rewrite of temperature conversion using functions
 */

#define LOWER 0
#define UPPER 300
#define STEP  20

float toCels(int fahr);
float toFahr(int cels);

int main()
{
	int fahr;

	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, toCels(fahr));
}

float toCels(int fahr)
{
	return ((5.0/9.0)*(fahr-32));
}

float toFahr(int cels)
{
	return ((5.0/9.0)*(cels+32));
}
