/*
** EPITECH PROJECT, 2020
** game
** File description:
** game
*/

#include <stdio.h>
#include "matchstick.h"
#include "my.h"
#include "struct.h"

void display_map(stick *stick)
{
    for (int z = 0; z != stick->nb_cols; z++) {
        my_putstr(stick->map[z]);
        my_putchar('\n');
    }
    my_putchar('\n');
}

int change_line(stick *stick, char *buffer, size_t size)
{
    stick->lp = 1;
    int k = 1;
    int nb_match_rm = 0;

    while (stick->map[stick->line][k] == ' ' ||
     stick->map[stick->line][k] == '|') {
        if (stick->map[stick->line][k] == '|')
            stick->lp = k;
        k++;
    }
    while (nb_match_rm < stick->matches) {
        stick->map[stick->line][stick->lp] = ' ';
        nb_match_rm++;
        stick->lp--;
    }
    display_map(stick);
    return (0);
}

void change_ai_line(stick *stick, int nbr_line)
{
    int last_p = 0;

    for (int i = 1; stick->map[nbr_line][i]; i++) {
        if (stick->map[nbr_line][i] == '|')
            last_p = i;
    }
    stick->map[nbr_line][last_p] = ' ';
}

int check_lines(char *str)
{
    int stick = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '|')
            stick++;
    }
    return (stick);
}

int checkmap(stick *stick)
{
    int count_stick = 0;

    for (int i = 0; stick->map[i] != NULL; i++)
        count_stick += check_lines(stick->map[i]);
    return (count_stick);
}

int game(stick *stick, char **av)
{
    char *buffer = NULL;
    size_t size = 32;

    while (checkmap(stick) != 0) {
        stick->player_turn = 1;
        if (stick->player_turn == 1) {
            my_putstr("Your turn: \n");
            player_turn(stick, buffer, size, av);
        }
        stick->player_turn = 1;
        stick->ai_turn = 0;
        if (stick->ai_turn == 1)
            ai_turn(stick, buffer, size);
    }
    return (0);
}
