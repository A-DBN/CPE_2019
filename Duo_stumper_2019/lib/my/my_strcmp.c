/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_strcmp
*/

#include "my.h"

int my_strcmp(char *str, char *cmp)
{
    int count = my_strlen(str);

    if (my_strlen(str) != my_strlen(cmp))
        return 1;
    for (int i = 0; str[i] != '\0' && cmp[i] != '\0'; i++) {
        if (str[i] == cmp[i])
            count--;
    }
    return count;
}