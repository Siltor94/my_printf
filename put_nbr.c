/*
** put_nbr.c for my_printf in /Users/meurin_r/Desktop/my_printf/meurin_r
** 
** Made by MEURIN Remy
** Login   <meurin_r@etna-alternance.net>
** 
** Started on  Tue Apr  5 11:01:55 2016 MEURIN Remy
** Last update Tue Apr  5 11:01:56 2016 MEURIN Remy
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

void  my_putnbr_base(int nb, char *base)
{
  int     len_base;
  int     i;
  int     power;

  if (nb < 0)
    {
    	my_putnbr_base(nb / my_strlen(base), base);
    }
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

void  my_put_nbr_base_hexa(int nb)
{
		long int quotient;
		int i;
		int j;
		int temp;
		char hexadecimalNumber[100];

		i = 1;
		quotient = nb;

		while (quotient != 0)
		{
			temp = quotient % 16;
			if (temp < 10)
				temp = temp + 48;
			else
				temp = temp + (55 + 32);
			hexadecimalNumber[i++] = temp;
			quotient = quotient / 16;
		}
		for (j = i-1; j > 0; j--)
		{
			my_printf("%c", hexadecimalNumber[j]);
		}
}

void  my_put_nbr_base_hexa_maj(int nb)
{
		long int quotient;
		int i;
		int j;
		int temp;
		char hexadecimalNumber[100];

		i = 1;
		quotient = nb;

		while (quotient != 0)
		{
			temp = quotient % 16;
			if (temp < 10)
				temp = temp + 48;
			else
				temp = temp + 55;
			hexadecimalNumber[i++] = temp;
			quotient = quotient / 16;
		}
		for (j = i-1; j > 0; j--)
		{
			my_printf("%c", hexadecimalNumber[j]);
		}
}
