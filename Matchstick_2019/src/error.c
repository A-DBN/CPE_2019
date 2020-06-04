/*
** EPITECH PROJECT, 2020
** error.c
** File description:
** error.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "matchstick.h"
#include "struct.h"

int error(int ac, char **av)
{
    int z = 1;

    if (ac != 3)
        return (84);
    if (my_getnbr(av[1]) < 2 || my_getnbr(av[1]) > 99)
        return (84);
    if (my_getnbr(av[2]) < 1)
        return (84);
    while (av[z] != NULL) {
        if (my_str_isnum(av[z]) == 0)
            return (84);
        z++;
    }
    return (0);
}

int get_error(stick *stick, char **av, char *buffer, size_t size)
{
    if (my_str_isnum(buffer) == 1 || my_str_isnum(buffer) == 1) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return 0;
    }
    if (stick->line > my_getnbr(av[1])) {
        my_putstr("Error: this line is out of range\n");
        return 0;
    }
    return (1);
}

int error_matches(stick *stick , char *buffer, size_t size, char **av)
{
    if (stick->matches > my_getnbr(av[2])) {
        my_putstr("Error; you cannot remove more than ");
        my_put_nbr(my_getnbr(av[2]));
        my_putstr(" matches per turn\n");
        return (0);
    }
    if (stick->matches == 0) {
        my_putstr("Error: you have to remove at least one match\n");
        return 0;
    }
    if (stick->matches > check_lines(stick->map[stick->line])) {
        my_putstr("not enough matches on this line\n");
        return 0;
    }
    return (1);
}
