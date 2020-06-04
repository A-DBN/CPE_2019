/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** my_strdup
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *str)
{
    char *array = malloc (sizeof(char) * (my_strlen(str) + 1));
    my_strcpy(array, str);

    return (array);
}
