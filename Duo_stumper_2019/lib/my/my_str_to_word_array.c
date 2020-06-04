/*
** EPITECH PROJECT, 2020
** library
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int check_charac(char c)
{
    if (c > 33 && c < 126)
        return 1;
    return 0;
}

int len_of_words(char *str, int i)
{
    int len = 0;

    for (i; str[i] != '\0'; i++, len++) {
        if (check_charac(str[i]) != 1)
            break;
    }
    return len;
}

int count_words(char *str)
{
    int count_words = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (check_charac(str[i]) && check_charac(str[i + 1]) != 1)
            count_words++;
    }
    return count_words;
}

char **my_str_to_word_array(char *str)
{
    int nb_of_words = count_words(str);
    char **arr = malloc(sizeof(char *) * (nb_of_words + 1));
    int nb_of_word_passed = 0;
    int j = 0;
    int i = 0;
    int index = 0;

    for (; str[index] == ' ' || str[index] == '\t'; index++);
    while (nb_of_word_passed < nb_of_words) {
        arr[i] = malloc(sizeof(char) * len_of_words(str, index) + 1);
        for (j = 0; str[index] != '\0' && check_charac(str[index]);
            index++, j++) {
            arr[i][j] = str[index];
        }
        for (; str[index] == ' ' || str[index] == '\t'; index++);
        arr[i++][j] = '\0';
        nb_of_word_passed++;
    }
    arr[i] = NULL;
    return arr;
}

