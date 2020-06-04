##
## EPITECH PROJECT, 2019
## my_printf
## File description:
## printf function
##

SRC =	src/error.c	\
		src/game.c	\
		src/display_game.c	\
		src/matchstick.c

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

CFLAGS	=	-I./lib/my/include -I./src/include -W -Wall -Wextra -L./lib/my -lmy -g

all:	$(NAME)

$(NAME):
		make -C ./lib/my
		gcc -o $(NAME) $(SRC) $(CFLAGS)

clean:
	make -C lib/my clean
	rm -f *.o
	rm -f *~

fclean: fclean
	rm -f $(NAME)
	rm -f vgcore*

re:	fclean all
