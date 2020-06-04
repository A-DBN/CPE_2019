/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "my.h"
#include "matchstick.h"
#include <stdlib.h>
#include <struct.h>
#include <stdio.h>

void print_map(stick *stick)
{
    for (int i = 0; stick->map[i]; i++) {
        my_putstr(stick->map[i]);
        my_putchar('\n');
    }
    my_putchar('\n');
}

void map2(stick *stick)
{
    int j;
    int i;

    for (i = 1; i < stick->nb_lines + 1; i++) {
        stick->map[i][0] = '*';
        for (j = 1; j < ((stick->nb_cols) - (i * 2 - 1)) / 2 + 1; j++)
            stick->map[i][j] = ' ';
        for (int y = 0; y < (i * 2 - 1); y++, j++)
            stick->map[i][j] = '|';
        for (; j <= stick->nb_cols; j++)
            stick->map[i][j] = ' ';
        stick->map[i][j] = '*';
        stick->map[i][j + 1] = '\0';
    }
    stick->map[i + 1] = NULL;
}

void map1(stick *stick)
{
    for (int i = 0; i < stick->nb_cols + 2; i++)
        stick->map[0][i] = '*';
    stick->map[0][stick->nb_cols + 2] = '\0';
    for (int i = 0; i < stick->nb_cols + 2; i++)
        stick->map[stick->nb_lines + 1][i] = '*';
    stick->map[stick->nb_lines + 1][stick->nb_cols + 2] = '\0';
    map2(stick);
}

int main(int ac, char **av)
{
    stick stick;
    stick.player_turn = 1;
    stick.ai_turn = 0;

    if (error(ac, av) == 84)
        return (84);
    else {
        stick.nb_cols = my_getnbr(av[1]) * 2 - 1;
        stick.nb_lines = my_getnbr(av[1]);
        stick.map = malloc(sizeof(char *) * (stick.nb_lines + 3));

        for (int loc = 0; loc < stick.nb_lines + 2; loc++)
            stick.map[loc] = malloc(sizeof(char) * (stick.nb_cols + 4));
        map1(&stick);
        print_map(&stick);
        if(game(&stick, av) == 84)
            return (84);
    }
    free(stick.map);
    return (0);
}
