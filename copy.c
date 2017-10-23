#include <stdio.h>

/*kropka to umownie koniec pliku*/

int main()
{
	int c;
	c = getchar();

	while (c != '.')
	{
		putchar(c);
		c = getchar();
	}
	return 0;
}
