/*
** my_putnbr_base_hexa.c for my_printf in /Users/meurin_r/Desktop/my_printf/my_printf
** 
** Made by MEURIN Remy
** Login   <meurin_r@etna-alternance.net>
** 
** Started on  Wed Apr  6 14:07:43 2016 MEURIN Remy
** Last update Wed Apr  6 16:15:47 2016 MEURIN Remy
*/

#include "include.h"

void  my_put_nbr_base_hexa(int nb)
{
  int quotient;
  int i;
  int j;
  int temp;
  char hexa[100];

  i = 1;
  quotient = nb;

  while (quotient != 0)
    {
      temp = quotient % 16;
      if (temp < 10)
	temp = temp + 48;
      else
	temp = temp + 87;
      hexa[i++] = temp;
      quotient = quotient / 16;
    }
  for (j = i-1; j > 0; j--)
      my_printf("%c", hexa[j]);
}

void  my_put_nbr_base_hexa_maj(int nb)
{
  int quotient;
  int i;
  int j;
  int temp;
  char hexa[100];

  i = 1;
  quotient = nb;

  while (quotient != 0)
    {
      temp = quotient % 16;
      if (temp < 10)
	temp = temp + 48;
      else
	temp = temp + 55;
      hexa[i++] = temp;
      quotient = quotient / 16;
    }
  for (j = i-1; j > 0; j--)
      my_printf("%c", hexa[j]);
}
