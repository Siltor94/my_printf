/*
** flags_1.c for my_printf in /Users/meurin_r/Desktop/my_printf
** 
** Made by MEURIN Remy
** Login   <meurin_r@etna-alternance.net>
** 
** Started on  Mon Apr  4 15:37:25 2016 MEURIN Remy
** Last update Mon Apr  4 15:37:27 2016 MEURIN Remy
*/
#include "include.h"

void flag_s(va_list ap)
{
	my_putstr(va_arg(ap, char *));
}

void flag_d(va_list ap)
{
	my_put_nbr(va_arg(ap, int));
}

void flag_i(va_list ap)
{
	my_put_nbr(va_arg(ap, int));
}

void flag_c(va_list ap)
{
	my_putchar(va_arg(ap, int));
}

void flag_o(va_list ap)
{
	int nb;

	nb = va_arg(ap, int);
	my_putnbr_base(nb, "01234567");
}
