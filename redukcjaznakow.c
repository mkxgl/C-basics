#include <stdio.h>

/*kropka to umownie koniec pliku*/

int main()
{
	int c;
	int was_space;
	was_space = 0;

	while ((c = getchar()) != '.')
	{	
		if (c == ' ')
		{
			if (was_space == 1)
				continue;
			else 
				was_space = 1;
		}
		else 
			was_space = 0;

		putchar(c);	
	
	}
	putchar('\n');
	return 0;
}
