##
## EPITECH PROJECT, 2021
## Math
## File description:
## 201
##

CFLAGS	=	-Wall -Wextra -Werror -I./include -lm

SRC	=	srcs/main.c		\
		srcs/help.c		\
		srcs/205iq.c		\
		srcs/error_handling.c	\

CC	=	gcc -o

OBJ	=	$(SRC:.c=.o)

NAME	=	205IQ

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
