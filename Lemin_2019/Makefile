##
## EPITECH PROJECT, 2019
## CPool_rush3_2019
## File description:
## Makefile
##

NAME	=	lem_in

SRC		=	main.c				\
			help.c				\
			error_engine.c		\
			lemin.c				\
			struct_da_struct.c	\
			list_da_struct.c    \
			ants_got_da_mooves.c\

LIB		=	-L lib/my/ -lmy

CFLAGS	=	-I./include/ -W -Wall -Wextra -g

all:	$(NAME)

$(NAME):
	make -C lib/my
	gcc -o $(NAME) $(SRC) $(LIB) $(CFLAGS)

clean:
	make -C lib/my clean
	rm -f lib/my/libmy.a
	rm -f *.o
	rm -f vgcore*
	rm -f *~

fclean:	clean
	rm -f $(NAME)

re:		fclean all
