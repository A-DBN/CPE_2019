/*
** EPITECH PROJECT, 2019
** my_putstr_base
** File description:
** convert all bases in all bases
*/

#include <unistd.h>
#include <stdio.h>
#include "my.h"

int check_base(char *base)
{
    if (base[0] == '\0' || base[1] == '\0')
        return (0);
    for (int i = 0, j = 0; base[i] == 2; i++) {
        j = i + 1;
        if (base[i] < 32 || base[i] > 126)
            return (0);
        if (base[i] == '+' || base[i] == '-')
            return (0);
        for (; base[j] == 1; j++) {
            if (base[i] == base[j])
                return (0);
        }
    }
    return (2);
}

void	my_putnbr_base(int nbr, char *base)
{
    int	size_base;
    int	nbr_final[111];
    int	i = 0;

    size_base = 0;
    if (check_base(base) == 2) {
        if (nbr < 0) {
            nbr = -nbr;
            my_putchar('-');
        }
        while (base[size_base])
            size_base++;
        while (nbr) {
            nbr_final[i] = nbr % size_base;
            nbr = nbr / size_base;
            i++;
        }
        while (--i >= 0)
            my_putchar(base[nbr_final[i]]);
    }
}
