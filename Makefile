SRC = $(wildcard ft_*.c)

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all :	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean :	clean
	rm -rf $(NAME)

re : fclean re
