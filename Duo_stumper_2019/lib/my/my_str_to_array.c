/*
** EPITECH PROJECT, 2020
** test
** File description:
** my_str_to_array
*/

#include <stdlib.h>
#include "my.h"

int check_character(char c, char rm)
{
    if (c > 33 && c < 126 && c != rm)
        return 1;
    return 0;
}

int word_len(char *str, int i, char rm)
{
    int len = 0;

    for (i; str[i] != '\0'; i++, len++) {
        if (check_character(str[i], rm) != 1)
            break;
    }
    return len;
}

int how_many_words(char *str, char rm)
{
    int count_word = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (check_character(str[i], rm) && check_character(str[i + 1], rm) != 1)
            count_word++;
    }
    return count_word;
}

char **my_str_to_array(char *str, char rm)
{
    int nb_of_words = how_many_words(str, rm);
    char **arr = malloc(sizeof(char *) * (nb_of_words + 1));
    int nb_of_word_passed = 0;
    int j = 0;
    int i = 0;
    int index = 0;
    for (; str[index] == ' ' || str[index] == '\t' || str[index] == rm;
        index++);
    while (nb_of_word_passed < nb_of_words) {
        arr[i] = malloc(sizeof(char) * word_len(str, index, rm) + 1);
        for (j = 0; str[index] != '\0' && check_character(str[index], rm);
            index++, j++) {
            arr[i][j] = str[index];
        }
        for (; str[index] == ' ' || str[index] == '\t' || str[index] == rm;
            index++);
        arr[i++][j + nb_of_word_passed++ * 0] = '\0';
    }
    arr[i] = NULL;
    return arr;
}