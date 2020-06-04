##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## my_runner
##

SRC     =      	solver.c	\
				road.c	\
				solver2.c

OBJ	=	$(SRC:.c=.o)

NAME    =       solver

CFLAGS	=	-W -Wall -Wextra -g

all:    $(NAME)

$(NAME)	:	$(NAME)
			gcc -o $(NAME) $(CFLAGS) $(SRC) -I./include/

clean:
	rm -f *.o
	rm -f *~
	rm -f vgcore.*

fclean:	clean
		rm -f $(NAME)

re:     fclean all
