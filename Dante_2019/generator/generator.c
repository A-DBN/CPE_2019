/*
** EPITECH PROJECT, 2020
** dante
** File description:
** generator.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int ac, char **av)
{
    if (ac != 3 && ac != 4)
        return 84;
    for (int i = 0; av[1][i] != '\0'; i++) {
        if (isdigit(av[1][i]) == 0)
            return 84;
    }
    for (int i = 0; av[2][i] != '\0'; i++) {
        if (isdigit(av[2][i]) == 0)
            return 84;
    }
    if (ac == 3)
        //inperfect(ac, av);
        return 0;
    else if (ac == 4) {
        if (strcmp(av[3], "perfect") != 0)
            return 84;
        perfect(ac, av);
    }
}
