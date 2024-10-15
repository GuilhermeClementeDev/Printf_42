#include "lib_printf.h"
#include <stdio.h>

int main()
{
	int years = 22;
	int i = 2002;
	char *s = "VASCO";
	int money = -2147483648;
	ft_printf("\nMY size :%d\n", ft_printf("I have %d years so i was born in %i\nMy team is %s\nAnd i have %d on my bank.", years, i, s, money));
	printf("\nORI size :%d\n", printf("I have %d years so i was born in %i\nMy team is %s\nAnd i have %d on my bank.", years, i, s, money));
}
