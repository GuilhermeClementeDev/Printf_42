#include "lib_printf.h"

static int	get_size(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
		return (11);
	if (nb < 0)
	{
		count++;
		nb *= -1;
	}
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}
int	ft_printf_number(int nb)
{
	ft_putnbr_fd(nb, 1);
	return(get_size(nb));
}
