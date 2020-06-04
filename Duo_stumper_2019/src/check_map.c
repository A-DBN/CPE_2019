/*
** EPITECH PROJECT, 2019
** duo stumper 2
** File description:
** error
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"

int check_map(char const *filepath, char *buffer)
{
    if (buffer == "\0" || buffer == "\n")
        return (84);
    if (check_open(filepath) == 0)
        return (84);
    if (check_lines_len(buffer) == 0)
        return (84);
    if (check_caracters(buffer) == 0)
        return (84);
    return (0);
}

int check_lines_len(char *buffer)
{
    int i = 0;
    int line_len = 0;
    int j = 0;
    for (i; buffer[i] != '\n'; i++);
    i++;
    for (i; buffer[i] != '\n'; i++, line_len++);
    i++;
    for (i; buffer[i] != '\0'; i = i + (line_len + 2)) {
        for (j = 0; buffer[i] != '\n'; j++, i++);
        if (j != line_len)
            return (0);
    }
    return (1);
}

int check_caracters(char *buffer)
{
    int i = 0;

    for (i; buffer[i] != '\n'; i++);
    i++;
    for (i; buffer[i] != '\0'; i++) {
        if ((buffer[i] != 'X' && buffer[i] != '.') && buffer[i] != '\n')
            return (0);
    }
    return (1);
}
