#include "ft_printf.h"

int	ft_printf_string(char *s)
{
	if (!s)
		return (ft_printf_string("(null)"));
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}
