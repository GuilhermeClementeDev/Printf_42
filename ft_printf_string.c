#include "lib_printf.h"

int	ft_printf_string(char *s)
{
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}
