#include "main.h"

/**
 * main -Entry point
 * Description-prints_putschar
 * return 0
 */
int main (void)
{
	char str[] = "_putchar";
	int i = 0;
	while (str[i] != '\0')
	{
		char c = str[i];
		putchar(c);
		i++;
	}
	putchar('\n');
return (0);
}
