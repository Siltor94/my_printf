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

int my_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  return (i);
}

int     is_num(char str)
{
  if (str == '-')
    {
      return (0);
    }
  else if (str == '+')
    return (42);
  if (str >= '0' && str <= '9')
    {
      return (1);
    }
  return (-1);
}