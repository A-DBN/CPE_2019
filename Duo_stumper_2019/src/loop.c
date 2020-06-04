/*
** EPITECH PROJECT, 2020
** game of life
** File description:
** loop.c
*/

#include "my.h"

void loop_main(char **arr, int nb_of_occ)
{
    char **new_arr = cp_arr(arr);

    for (int i = 0; i < nb_of_occ; i++) {
        new_arr = game_of_life(arr, new_arr);
        arr = cp_arr(new_arr);
    }
    for (int i = 0; new_arr[i]; i++) {
        printf("%s\n", arr[i]);
    }
}
