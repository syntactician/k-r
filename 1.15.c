#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

float toCels(int fahr)
{
	return ((5.0/9.0)*(fahr-32));
}

float toFahr(int cels)
{
	return ((5.0/9.0)*(cels+32));
}

int main()
{
	int fahr;

	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, toCels(fahr));
}
