/*
** EPITECH PROJECT, 2020
** struct.h
** File description:
** struct.h
*/

typedef struct stick
{
    int nb_cols;
    int nb_lines;
    char **map;
    int line;
    int matches;
    int lp;
    int player_turn;
    int ai_turn;
}stick;
