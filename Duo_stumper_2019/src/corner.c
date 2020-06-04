/*
** EPITECH PROJECT, 2020
** game of life
** File description:
** corner.c
*/

#include "my.h"

int corner_top_left(char **arr, int i, int j)
{
    int count = 0;

    if (arr[i][j + 1] == 'X')
        count++;
    if (arr[i + 1][j + 1] == 'X')
        count++;
    if (arr[i + 1][j] == 'X')
        count++;
    return count;
}

int corner_top_right(char **arr, int i, int j)
{
    int count = 0;

    if (arr[i][j - 1] == 'X')
        count++;
    if (arr[i + 1][j - 1] == 'X')
        count++;
    if (arr[i + 1][j] == 'X')
        count++;        
    return count;
}

int corner_bot_left(char **arr, int i, int j)
{
    int count = 0;

    if (arr[i - 1][j] == 'X')
        count++;
    if (arr[i - 1][j + 1] == 'X')
        count++;
    if (arr[i][j + 1] == 'X')
        count++;
    return count;
}

int corner_bot_right(char **arr, int i, int j)
{
    int count = 0;

    if (arr[i][j - 1] == 'X')
        count++;
    if (arr[i - 1][j - 1] == 'X')
        count++;
    if (arr[i - 1][j] == 'X')
        count++;
    return count;
}
