##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile to compile my lib
##

SRC	=	src/main.c	\
		src/check_error.c	\
		src/check_map.c	\
		src/arr.c	\
		src/game_of_life.c	\
		src/corner.c	\
		src/border.c	\
		src/count.c	\
		src/case.c	\
		src/loop.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	gameoflife

CFLAGS  =       -Wextra -Wall -I include -g

LDFLAGS	=	-lmy -L./lib/my

all:	$(NAME)

$(NAME): $(OBJ)
	make re -C lib/my
	gcc -o $(NAME) $(OBJ) $(LDFLAGS) $(CFLAGS)
	rm $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
