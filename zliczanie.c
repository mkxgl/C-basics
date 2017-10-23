#include <stdio.h>

/*kropka to umownie koniec pliku*/

int main()
{
	long nc;
	nc = 0;

	while (getchar() != '.') 
		++nc;
	printf("%ld\n", nc);

	return 0;
}
