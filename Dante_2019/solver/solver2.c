/*
** EPITECH PROJECT, 2020
** solver2.c
** File description:
** solver2
*/

#include "solver.h"

int my_strlenbn(solver_t solver)
{
    int i = 0;
    int a = 0;
    int y = 0;

    while (solver.map[i] != '\n') {
        i++;
        y++;
    }
    i++;
    y++;
    while (solver.map[i] != '\n' && solver.map[i] != '\0')
        i++;
    a = i - y;
    return (a);
}

int my_strnbline(solver_t solver)
{
    int i = 0;
    int y = 0;

    while (solver.map[i] != '\0')
    {
        if (solver.map[i] == '\n')
            y++;
        i++;
    }
    return (y);
}
