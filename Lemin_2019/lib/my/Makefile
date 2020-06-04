##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

NAME	=	libmy.a

SRC	 =	my_putchar.c			\
		my_putstr.c				\
		my_strlen.c				\
		my_put_nbr.c 			\
		my_str_to_word_array.c	\
		my_strcmp.c	\
		my_getnbr.c

OBJ	 =	$(SRC:.c=.o)

CFLAGS	=	-I../../include

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a $(NAME) $(OBJ)

clean:
	rm -f *.o
	rm -f *~

fclean:	clean
	rm -f $(NAME)

re:		fclean all
