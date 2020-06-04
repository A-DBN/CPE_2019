/*
** EPITECH PROJECT, 2020
** dante
** File description:
** solver.c
*/

#include "solver.h"

void print_map(solver_t solver)
{
    for (int k = 0; k < solver.w; k++) {
        for (int c = 0; c < solver.v; c++) {
            putchar(solver.tab[k][c]);
        }
        putchar('\n');
    }
}

char **my_strtotab(solver_t solver)
{
    int i = 0;
    int x = 0;
    int y = 0;

    while (solver.map[i] != '\0') {
	    if (solver.map[i] == '\n') {
            x++;
            y = 0;
        }
        else {
            solver.tab[x][y] = solver.map[i];
            y++;
        }
        i++;
    }
    return (solver.tab);
}

void my_create_tab(solver_t solver)
{
    int i = 0;

    solver.tab = malloc(sizeof(char *) * (solver.v + 1));
    if (solver.tab == NULL)
        exit(84);
    while (i < solver.v) {
        solver.tab[i] = malloc(sizeof(char) * (solver.w + 1));
        if (solver.tab[i] == NULL)
            exit(84);
        i++;
    }
    solver.tab = my_strtotab(solver);
    print_map(solver);
}

int main(int ac, char **av)
{
    struct stat sb;
    solver_t solver;

    if (ac != 2)
        return 84;
    solver.fd = open(av[1], O_RDONLY);
    if (solver.fd == -1)
        exit (84);
    if (stat(av[1], &sb) != 0)
        exit (84);
    solver.map = malloc(sizeof(char) * (sb.st_size + 2));
    if (read(solver.fd, solver.map, sb.st_size) < 0)
        return 84;
    solver.map[sb.st_size] = '\0';
    solver.v = my_strlenbn(solver);
    solver.w = my_strnbline(solver);
    my_create_tab(solver);
    road(solver, ac, av);
    print_map(solver);
    free(solver.map);
    return 0;
}
