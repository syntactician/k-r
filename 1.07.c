#include <stdio.h>

int main()
{
	int c;

	while((c = getchar()) != EOF)
	{
		getchar();
	}

	printf("EOF is %d\n", c);
}
