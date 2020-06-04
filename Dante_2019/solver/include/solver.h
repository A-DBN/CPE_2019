/*
** EPITECH PROJECT, 2020
** solver
** File description:
** solver
*/

#ifndef SOLVER_H_
#define SOLVER_H_

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

typedef struct solver {
    char **tab;
    int v;
    int w;
    int fd;
    char *map;
} solver_t;

int my_strlenbn(solver_t solver);
int my_strnbline(solver_t solver);
int road(solver_t solver, int ac , char **av);
void print_map(solver_t solver);

#endif /* !SOLVER_H_ */
