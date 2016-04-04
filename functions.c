/*
** functions.c for my_printf in /Users/meurin_r/Desktop/my_printf
** 
** Made by MEURIN Remy
** Login   <meurin_r@etna-alternance.net>
** 
** Started on  Mon Apr  4 15:42:27 2016 MEURIN Remy
** Last update Mon Apr  4 15:42:28 2016 MEURIN Remy
*/

#include "include.h"


void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  while (*str != '\0')
  {
    my_putchar(*str);
    str++;
  }
}

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