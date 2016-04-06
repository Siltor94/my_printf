/*
** my_putnbr_base_hexa.c for my_printf in /Users/meurin_r/Desktop/my_printf/my_printf
** 
** Made by MEURIN Remy
** Login   <meurin_r@etna-alternance.net>
** 
** Started on  Wed Apr  6 14:07:43 2016 MEURIN Remy
** Last update Wed Apr  6 14:08:03 2016 MEURIN Remy
*/

#include "include.h"

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
