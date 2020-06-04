/*
** EPITECH PROJECT, 2020
** game of life
** File description:
** arr.c
*/

#include "my.h"

int len_arr(char **arr)
{
    int count = 0;

    for (int i = 0; arr[i]; i++)
        count++;
    return count;
}

char **cp_arr(char **arr)
{
    int len = len_arr(arr);
    char **new_arr = malloc(sizeof(char *) * (len + 1));

    for (int i = 0; arr[i]; i++) {
        new_arr[i] = strdup(arr[i]);
    }
    new_arr[len] = NULL;
    return new_arr;
}
