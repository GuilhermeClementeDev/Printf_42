#include "lib_printf.h"

static void	ft_rprint(char *s)
{
	int	i;
	i = ft_strlen(s);
	while (i >= 0)
	{
		write(1, &s[i], 1);
		i--;
	}
}

static int	ft_printf_bighex(size_t nb)
{
	unsigned int	num;
	char			*base = "0123456789abcdef";
	char			arr[16];
	int				i;

	i = 0;
	if (nb == 0)
	{
		ft_putnbr_fd(nb, 1);
		return (1);
	}
	else
	{
		while (nb)
		{
			num = nb % 16;
			arr[i] = base[num];
			nb = nb / 16;
			i++;
		}
		arr[i] = '\0';
		ft_rprint(arr);
	}
	return (ft_strlen(arr));
}

int	ft_printf_pointer(size_t nb)
{
	int	size;

	size = 2;
	ft_putstr_fd("0x",1);
	size += ft_printf_bighex(nb);
	return (size);
}
