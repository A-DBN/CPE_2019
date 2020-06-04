##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## my_runner
##

NAME    =       dante

all:    $(NAME)

$(NAME):
	make -C generator
	make -C solver

clean:

	make -C generator clean
	make -C solver clean

fclean:
	make -C generator fclean
	make -C solver fclean

re:     fclean all
