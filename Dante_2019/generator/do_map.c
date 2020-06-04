/*
** EPITECH PROJECT, 2020
** do_map.c
** File description:
** do_map
*/

void print_map(char **tab, char **av)
{
    for (int k = 0; k < atoi(av[2]); k++) {
        for (int w = 0; w < atoi(av[1]); w++) {
            putchar(tab[k][w]);
        }
        putchar('\n');
    }
}

char **do_map(char **tab, int x, int y, char **av)
{
    if (x == 2 && y == 2)
        tab[0][1] = 'X';
    if (x == 2 && y > 2) {
        for (int j = 0; j < y - 1; j++)
            tab[j][1] = 'X';
    }
    if (x > 2 && y == 2) {
        for (int j = 0; j < x - 1; j++)
            tab[1][j] = 'X';
    }
    print_map(tab, av);
    return (tab);
}
