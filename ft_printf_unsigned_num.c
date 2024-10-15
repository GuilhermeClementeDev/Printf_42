#include "lib_printf.h"

static int	get_num(unsigned int nb)
{
	int	count;

	count = 0;
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

static void	ft_positive_putnbr(unsigned int n)
{
	if (n <= 9)
	{
		n = n + '0';
		ft_putchar_fd(n, 1);
	}
	else
	{
		ft_positive_putnbr(n / 10);
		ft_positive_putnbr(n % 10);
	}
}

int	ft_printf_unsigned_num(unsigned int nb)
{
	ft_positive_putnbr(nb);
	return (get_num(nb));
}
