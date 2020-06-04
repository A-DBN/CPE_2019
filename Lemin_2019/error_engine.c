/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include "my.h"

int char_error_check(char *buffer)
{
    int error = 0;
    int i = 0;

    while (buffer[i] != '\n'){
        if (buffer[i] < 48 || buffer[i] > 57)
            error++;
        i++;
    }
    i++;
    while (buffer[i] != '\0'){
        if ((buffer[i] != 'o' && buffer[i] != '.') && buffer[i] != '\n')
            error++;
        i++;
    }
    return (error);
}

int form_error_check(char *buffer)
{
    int first_ligne = 0;
    int len_count = 0;
    int max_len = 0;
    int error = 0;
    int i = 0;
    while (buffer[i] != '\0'){
        if (first_ligne == 0 && buffer[i] == '\n'){
            first_ligne++;
            len_count = 0;
        }
        if (first_ligne != 0 && buffer[i] == '\n'){
            if (max_len != 0 && max_len != len_count)
                error++;
            max_len = len_count;
            len_count = 0;
        }
        len_count++;
        i++;
    }
    return (error);
}

int error_check(int ac)
{
    int error_nb = 0;

    if (ac != 1)
        error_nb = 1;
    return (error_nb);
}
