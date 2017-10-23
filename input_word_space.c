#include <stdio.h>

# define TRUE 1
# define FALSE 0

int main()

{
	int c, inword;
	inword = FALSE; /*pierwszy znak jest false, bo to moze byc spacja, przecinek itp*/

	while ((c = getchar()) != '.')
	{
		if (c == ' ' || c == '\n' || c == '\t' || c == ',')
			inword = FALSE;
		else
			if (inword == FALSE)
			{
				inword = TRUE;
				putchar('\n');
			}
		putchar(c);
	}
	putchar('\n');
	return 0;
}