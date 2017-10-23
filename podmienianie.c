#include <stdio.h>

/*kropka to umownie koniec pliku*/

int main()
{
	int c;

	while ((c = getchar()) != '.')
	{	
		if (c == '\t')
			putchar('-'); /*powinien byc to znak ->, ale nie wiem jak zrobic z 2 symboli znak jako int, jezeli probuje go dac w podwojnych "" to wychodzi mi, ze zly format (ma byc int). Jezeli daje jeden pod drugim putchary osobno z - i osobno z > to wyskakuje mi error, ze else potrzebuje ifa (nie kumam czemu go wowczas nie widzi). w pythonie bym to ogarnela na luzie a tu nie wiem*/
		if (c == ' ') 
			putchar('<'); /*to samo*/
		else
			putchar(c);	
	}
	putchar('\n');
	return 0;
}
