/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include "my.h"

void print_dat_lemin(lemin_t *lemin_s)
{
    my_putstr("#number_of_ants\n");
    my_put_nbr(lemin_s->number_of_ants);
    my_putstr("\n#rooms\n");
    my_putstr(lemin_s->list_t.rooms);
    my_putstr("\n#tunnels\n");
    my_putstr(lemin_s->list_t.tunnels);
    my_putstr("\n#moves\n");
    ants_got_da_mooves(lemin_s);
}

void lemin(char **tab)
{
    lemin_t lemin_s;
    struct_da_lemin_struct(&lemin_s, tab);

    print_dat_lemin(&lemin_s);
}
