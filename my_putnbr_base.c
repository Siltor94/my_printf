/*
** my_putnbr_base.c for my_printf in /Users/meurin_r/Desktop/my_printf/my_printf
** 
** Made by MEURIN Remy
** Login   <meurin_r@etna-alternance.net>
** 
** Started on  Wed Apr  6 14:07:09 2016 MEURIN Remy
** Last update Wed Apr  6 16:14:42 2016 MEURIN Remy
*/

#include "include.h"

void  my_putnbr_base(int nb, char *base)
{
  int     len_base;
  int     i;
  int     power;

  if (nb < 0)
    nb = nb * -1;
  power = 1;
  len_base = my_strlen(base);
  while (nb / power != 0)
    power *= len_base;
  power /= len_base;
  while (power != 0){
    i = 0;
    while ((i < len_base) && (power * i <= nb))
      ++i;
    --i;
    my_putchar(base[i]);
    nb %= power;
    power /= len_base;
  }
}
