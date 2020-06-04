/*
** EPITECH PROJECT, 2020
** test
** File description:
** my_strcat
*/

#include <stdlib.h>
#include "my.h"

char *my_strcat(char *str, char *to_add)
{
    int maloc = my_strlen(str) + my_strlen(to_add) + 1;
    char *new_str = malloc(sizeof(char) * maloc);
    int i;
    int j;

    for (i = 0; str[i] != '\0'; i++) {
        new_str[i] = str[i];
    }
    for (j = 0; to_add[j] != '\0'; j++, i++) {
        new_str[i] = to_add[j];
    }
    new_str[i] = '\0';
    return new_str;
}