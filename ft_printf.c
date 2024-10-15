#include "lib_printf.h"

static int	ft_verify(char c,va_list args)
{
	int	size;

	if (c == 'c')
		size = ft_printf_char(va_arg(args, int));
	if (c == 's')
		size = ft_printf_string(va_arg(args, char *));
	if (c == 'd' || c == 'i')
		size = ft_printf_number(va_arg(args, int));

	return (size);
}

static int	ft_write(const char *s, va_list args)
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			size += ft_verify(s[i+1], args);
			i += 2;
		}
		if (s[i])
		{
			ft_putchar_fd(s[i],1);
			size++;
			i++;
		}
	}
	return (size);
}

int	ft_printf(const char *s, ...)
{
	int	size;
	if (!ft_strchr(s, '%'))
		return (ft_printf_string((char *)s));
	va_list	args;
	va_start(args, s);
	size = ft_write(s, args);
	return (size);
}
