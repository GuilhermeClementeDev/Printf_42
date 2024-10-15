#include "lib_printf.h"

static void	ft_verify(char c,va_list args)
{
	if (c == 'c')
		ft_printf_char(va_arg(args, int));
	if (c == 's')
		ft_printf_string(va_arg(args, char *));

}

static void	ft_write(const char *s, va_list args)
{
	unsigned int	i;
	//unsigned int	size;

	i = 0;
	//size = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			ft_verify(s[i+1], args);
			i += 2;
		}
		if (s[i])
		{
			ft_putchar_fd(s[i],1);
			i++;
		}
	}
}



int	ft_printf(const char *s, ...)
{
	if (!ft_strchr(s, '%'))
		return (ft_printf_string((char *)s));
	va_list	args;
	va_start(args, s);
	ft_write(s, args);
	return (0);
}
