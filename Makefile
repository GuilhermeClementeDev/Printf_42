# -*- MakeFile -*-
CC = cc

NAME = libftprintf.a

LIBFTNAME = libft.a

MY_SOURCES = ft_printf.c ft_printf_char.c ft_printf_string.c \
ft_printf_number.c ft_printf_unsigned_num.c ft_printf_hex.c \
ft_printf_pointer.c

CFLAGS = -Wall -Wextra -Werror

OBJ = $(MY_SOURCES:.c=.o)

OBJ_BONUS = $(BONUS_SRC:.c=.o)

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

makelib:
	make -C ./libft
	@cp ./libft/$(LIBFTNAME) .
	@mv $(LIBFTNAME) $(NAME)

$(NAME): $(OBJ) makelib
	ar -rcs $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ) $(OBJ_BONUS)
	cd ./libft && make clean

fclean: clean
	@rm -f $(NAME)
	cd ./libft && make fclean

re: fclean all

