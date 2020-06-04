/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    if (ac == 2) {
        if (my_strcmp(av[1], "-h") == 0){
            help();
            return (0);
        }
    }
    char *buffer = malloc(sizeof(char) * 20000);
    read(0, buffer, 20000);
    if (error_check(ac) != 0){
        free(buffer);
        return (84);
    }
    //lemin(my_str_to_word_array(buffer, '\n'););
    my_putstr(buffer);
    free(buffer);
    return (0);
}
