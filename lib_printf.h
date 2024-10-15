#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
#include "libft/libft.h"

int	ft_printf(const char *s, ...);

int	ft_printf_char(char c);

int	ft_printf_string(char *s);

#endif
