/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include "my.h"

int get_nb_ants(char **tab)
{
    int nb_ants = my_getnbr(tab[0]);
    return (nb_ants);
}

char *get_start_cell(char **tab)
{
    return ("start_cell");
}

char *get_end_cell(char **tab)
{
    return ("end_cell");
}

void struct_da_lemin_struct(lemin_t *lemin_s, char **tab)
{
    lemin_s->number_of_ants = get_nb_ants(tab);
    lemin_s->room_t.start_room = get_start_cell(tab);
    lemin_s->room_t.end_room = get_end_cell(tab);
    lemin_s->list_t.rooms = get_list_rooms(tab);
    lemin_s->list_t.tunnels = get_list_tunnels(tab);
}
