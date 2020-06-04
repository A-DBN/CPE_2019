/*
** EPITECH PROJECT, 2020
** generator
** File description:
** perfect.c
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void print_tab(char **tab, char **av)
{
    int i = 0;
    int y = 0;

    while (y < atoi(av[2])) {
        i = 0;
        while (i < atoi(av[1])) {
            tab[y][i] = '*';
            i++;
        }
        y++;
    }
    do_map(tab, atoi(av[1]), atoi(av[2]), av);
    free(tab);
}

void my_create_tab(char **av)
{
    char **tab;
    int i = 0;

    tab = malloc(sizeof(char *) * atoi(av[2]));
    if (tab == NULL)
        exit (84);
    while (i < atoi(av[2])) {
        tab[i] = malloc(sizeof(char) * atoi(av[1]));
        if (tab[i] == NULL)
             exit (84);
        i++;
    }
    print_tab(tab, av);
}

void perfect(int ac, char **av)
{
    my_create_tab(av);
}
