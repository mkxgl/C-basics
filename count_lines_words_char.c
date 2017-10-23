#include <stdio.h>

/* word - ciag nieprzerwany spacja, enterem, tabulatorem, przecinkiem, kropka */

#define TRUE 1
#define FALSE 0

int main()
{
	int c, nenter, nword, nc, inword;
	nc = nword = 0;
	nenter = 1;
	inword = FALSE;

	while ((c = getchar()) != '.')
	{
		++nc;
		if (c == '\n')
			++nenter;
		if (c == ' ' || c == '\n' || c == '\t' || c == ',')
			inword = FALSE;
		else
			if (inword == FALSE)
			{
				inword = TRUE;
				++nword;
			}
	}
	printf("lines %d words %d characters %d\n", nenter, nword, nc);
	return 0;
}