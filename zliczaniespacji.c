#include <stdio.h>

/*kropka to umownie koniec pliku*/

int main()
{
	int c, nl;

	while ((c = getchar()) != '.')
		if (c == '\n')
			++ nl;
		printf("%d\n", nl);
	return 0;
}
