/*
** EPITECH PROJECT, 2019
** QS
** File description:
** JJJH
*/

#include <unistd.h>
#include "my.h"

void my_putchar(char c)
{
    write(1 , &c, 1);
}
