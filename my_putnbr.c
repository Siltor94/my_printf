/*
** put_nbr.c for my_printf in /Users/meurin_r/Desktop/my_printf/meurin_r
** 
** Made by MEURIN Remy
** Login   <meurin_r@etna-alternance.net>
** 
** Started on  Tue Apr  5 11:01:55 2016 MEURIN Remy
** Last update Wed Apr  6 16:12:55 2016 MEURIN Remy
*/
#include "include.h"

void	my_put_nbr(int nb)
{
  int	neg;

  neg = 0;
  if (nb < 0)
    {
      my_putchar('-');
      if (nb == -2147483648)
	{
    	  neg = 1;
    	  nb++;
	}
      nb = nb * -1;
    }
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
