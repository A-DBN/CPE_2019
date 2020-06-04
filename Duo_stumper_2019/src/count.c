/*
** EPITECH PROJECT, 2020
** game of life
** File description:
** count.c
*/

#include "my.h"

int count_normal_case_suit(char **arr, int i, int j)
{
    int count = 0;

    if (arr[i + 1][j + 1] == 'X')
        count++;
    if (arr[i + 1][j] == 'X')
        count++;
    if (arr[i + 1][j - 1] == 'X')
        count++;
    if (arr[i][j - 1] == 'X')
        count++;
    return count;
}
