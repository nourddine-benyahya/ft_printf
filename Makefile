SRC = $(wildcard ft_*.c)

SRCB = $(wildcard ft_*_bonus.c)

OBJ = $(SRC:.c=.o)

OBJB = $(SRCB:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

$(NAME) :	$(OBJ)
	ar rc $(NAME) $(OBJ)

all :	$(NAME)

bonus :	$(OBJB)
	ar rc $(NAME) $(OBJB)

clean :
	rm -rf $(OBJ)

fclean :	clean
	rm -rf $(NAME)

re : fclean re
