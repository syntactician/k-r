#include <stdio.h>

#define MAXLINE 1000

int getLine(char s[], int lim);
void copyLine(char to[], char from[]);

int main()
{
	int len, max;
	char line[MAXLINE];
	char longest[MAXLINE];

	while((len = getLine(line, MAXLINE)) > 0)
	{
		if(len > max)
		{
			max = len;
			copyLine(longest, line);
		}
	}
	printf("longest line is %d long:\n%s\n", max, longest);
}

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

	--i;
	if(s[i] == '\n')
		while((c = getchar()) != EOF && c != '\n')
			++i;

	return i;
}

void copyLine(char to[], char from[])
{
	int i;

	for(i = 0; (to[i] = from[i]) != '\0'; ++i);
}
