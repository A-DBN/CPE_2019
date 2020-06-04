/*
** EPITECH PROJECT, 2020
** solver
** File description:
** road.c
*/

#include "solver.h"

int road(solver_t solver, int ac, char **av)
{
    int o = 0;
    int t = 0;

    while (1) {
        if (solver.tab[o][t + 1] == '*') {
            solver.tab[o][t] = 'o';
            t++;
        }
        if (solver.tab[o + 1][t] == '*') {
            solver.tab[o][t] = 'o';
            o++;
        }
        if (solver.tab[o][t - 1] == '*') {
            solver.tab[o][t] = 'o';
            t--;
        }
        if (solver.tab[o - 1][t] == '*') {
            solver.tab[o][t] = 'o';
            o--;
        }
        if (o == atoi(av[1]) && t == atoi(av[2])) {
            break;
        }
    }
    return (0);
}
