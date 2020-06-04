##
## EPITECH PROJECT, 2019
## makefile
## File description:
## sdf
##

SRC	=	my_putchar.c	\
		my_getnbr.c	\
		my_putstr.c	\
		my_put_nbr.c	\
		my_strlen.c	\
		my_printchar.c	\
		my_printstr.c	\
		my_print_nbr.c	\
		my_putnbr_base.c	\
		deci_to_hexa_xmaj.c	\
		deci_to_hexax.c	\
		deci_to_bin.c	\
		my_printf.c	\
		deci_to_oct.c	\
		unsigned_deci.c	\
		my_strdup.c	\
		my_strcpy.c	\
		my_strcmp.c	\
		my_str_to_word_array.c	\
		my_strcat.c	\
		my_str_to_array.c

OBJ     =       $(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS	=	-Wextra -Wall

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	rm $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean

re:	fclean all
