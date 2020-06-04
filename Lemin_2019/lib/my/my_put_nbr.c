/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** Displays the number
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    long int count = 10000000000000000;

    if (nb < 0){
        my_putchar('-');
        nb = -nb;
    }

    while (count != 0){
        if (nb > count){
            my_putchar((nb / count) + 48);
            nb = nb % count;
        }
        count = count / 10;
    }
    return (0);
}
