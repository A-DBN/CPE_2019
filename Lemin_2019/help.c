/*
** EPITECH PROJECT, 2019
** sokoban_h
** File description:
** sokoban_h
*/

#include "my.h"

int help(void)
{
    my_putstr("USAGE:\n    ./lem_in < file\n\nDESCRIPTION\n");
    my_putstr("    file    contain the number of ants and the different room");
    my_putstr("\n\nEXEMPLE\n3\t\t--> giving info about nb of ants/rooms");
    my_putstr("/links\n##start\n0 1 0\n##end\n1 13 0 #bedroom                ");
    my_putstr("--> [0] - - - [2] - - - [3] - - - [1]\n2 5 0\n");
    my_putstr("##The next room is the kitchen\n3 9 0\n0-2\n2-3\n3-1\n");
    return (0);
}
