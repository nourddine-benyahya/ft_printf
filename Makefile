SRC = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_puthexa.c

OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

NAME = libftprintf.a

all :	$(NAME)

$(NAME) :	$(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o :	%.c	ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean :	clean
	$(RM) $(NAME)

re :	fclean all

.PHONY :	all clean fclean re