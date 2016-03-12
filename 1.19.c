#include <stdio.h>

#define MAXLINE 1000

int getLine(char s[], int lim)
{
	int c, i;

	for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if(c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void reverseStr(char s[])
{
	int i, n;
	char c;

	i = 0;
	while(s[i] != '\0')
		++i;

	--i;

	for(n = 0; n < i; ++n, --i)
	{
		c = s[n];
		s[n] = s[i];
		s[i] = c;
	}
}

int main()
{
	int len;
	char line[MAXLINE];

	while((len = getLine(line, MAXLINE)) > 0)
	{
		reverseStr(line);
		printf("%s\n", line);
	}
}
