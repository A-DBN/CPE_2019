/*
** EPITECH PROJECT, 2020
** game of life
** File description:
** border.c
*/

int border_top(char **arr, int i, int j)
{
    int count = 0;

    if (arr[i][j - 1] == 'X')
        count++;
    if (arr[i + 1][j - 1] == 'X')
        count++;
    if (arr[i + 1][j] == 'X')
        count++;
    if (arr[i + 1][j + 1] == 'X')
        count++;
    if (arr[i][j + 1] == 'X')
        count++;
    return count;
}

int border_right(char **arr, int i, int j)
{
    int count = 0;

    if (arr[i - 1][j] == 'X')
        count++;
    if (arr[i - 1][j - 1] == 'X')
        count++;
    if (arr[i][j - 1] == 'X')
        count++;
    if (arr[i + 1][j - 1] == 'X')
        count++;
    if (arr[i + 1][j] == 'X')
        count++;
    return count;
}

int border_bot(char **arr, int i, int j)
{
    int count = 0;

    if (arr[i][j + 1] == 'X')
        count++;
    if (arr[i - 1][j + 1] == 'X')
        count++;
    if (arr[i - 1][j] == 'X')
        count++;
    if (arr[i - 1][j - 1] == 'X')
        count++;
    if (arr[i][j - 1] == 'X')
        count++;
    return count;
}

int border_left(char **arr, int i, int j)
{
    int count = 0;

    if (arr[i - 1][j] == 'X')
        count++;
    if (arr[i - 1][j + 1] == 'X')
        count++;
    if (arr[i][j + 1] == 'X')
        count++;
    if (arr[i + 1][j + 1] == 'X')
        count++;
    if (arr[i + 1][j] == 'X')
        count++;
    return count;
}
