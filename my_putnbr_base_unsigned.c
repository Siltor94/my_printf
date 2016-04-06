/*
** my_putnbr_base_unsigned.c for my_printf in /Users/meurin_r/Desktop/my_printf/my_printf
** 
** Made by MEURIN Remy
** Login   <meurin_r@etna-alternance.net>
** 
** Started on  Wed Apr  6 14:07:27 2016 MEURIN Remy
** Last update Wed Apr  6 14:08:36 2016 MEURIN Remy
*/

#include "include.h"

void  my_put_nbr_unsigned(unsigned int nb)
{
  int neg;

  neg = 0;

  if (nb >= 10)
    my_put_nbr(nb / 10);
  if (neg == 1)
    {
      neg = 0;
      my_putchar(nb % 10 + '1');
    }
  else
    my_putchar(nb % 10 + '0');
}
