/*
** EPITECH PROJECT, 2020
** game of life
** File description:
** game_of_life.c
*/

#include "my.h"

int count_normal_case(char **arr, int i, int j)
{
    int count = 0;

    if (arr[i - 1][j - 1] == 'X')
        count++;
    if (arr[i - 1][j] == 'X')
        count++;
    if (arr[i - 1][j + 1] == 'X')
        count++;
    if (arr[i][j + 1] == 'X')
        count++;
    count += count_normal_case_suit(arr, i, j);
    return count;
}

int count_border_line(char **arr, int i, int j)
{
    int len_col = strlen(arr[i]) - 1;
    int len_rows = len_arr(arr) - 1;

    if (i == 0)
        return border_top(arr, i, j);
    if (j == len_col)
        return border_right(arr, i, j);
    if (i == len_rows)
        return border_bot(arr, i, j);
    if (j == 0)
        return border_left(arr, i, j);
    return -1;
}

int count_special_cases(char **arr, int i , int j)
{
    int len_col = strlen(arr[i]) - 1;
    int len_rows = len_arr(arr) - 1;

    if (i == 0 && j == 0)
        return corner_top_left(arr, i, j);
    if (i == 0 && j == len_col)
        return corner_top_right(arr, i, j);
    if (i == len_rows && j == 0)
        return corner_bot_left(arr, i, j);
    if (i == len_rows && j == len_col)
        return corner_bot_right(arr, i, j);
    return count_border_line(arr, i , j);
}

int count_cross(char **arr, int i, int j)
{
    int len_col = strlen(arr[i]) - 1;
    int len_rows = len_arr(arr) - 1;

    if (i == 0 || j == 0 || j == len_col || i == len_rows)
        return count_special_cases(arr, i, j);
   else
        return count_normal_case(arr, i, j);
}

char **game_of_life(char **arr, char **new_arr)
{
    int cross = 0;

    for (int i = 0; arr[i]; i++) {
        for (int j = 0; arr[i][j]; j++) {
            cross = count_cross(arr, i, j);
            new_arr[i][j] = which_case(arr[i][j], cross);
        }
    }
    return new_arr;
}
