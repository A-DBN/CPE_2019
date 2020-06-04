##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## my_runner
##

SRC     =      	generator.c	\
				perfect.c	\
				my_putchar.c	\
				do_map.c

OBJ	=	$(SRC:.c=.o)

NAME    =       generator

CFLAGS	=	-W -Wall -Wextra -g

all:    $(NAME)

$(NAME)	:	$(NAME)
			gcc -o $(NAME) $(CFLAGS) $(SRC)

clean:
	rm -f *.o
	rm -f *~
	rm -f vgcore.*

fclean:	clean
		rm -f $(NAME)

re:     fclean all
