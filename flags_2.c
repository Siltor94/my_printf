/*
** flags_2.c for my_printf in /Users/meurin_r/Desktop/my_printf/meurin_r
** 
** Made by MEURIN Remy
** Login   <meurin_r@etna-alternance.net>
** 
** Started on  Tue Apr  5 10:35:48 2016 MEURIN Remy
** Last update Tue Apr  5 10:35:50 2016 MEURIN Remy
*/
#include "include.h"

void flag_u(va_list ap)
{
	my_put_nbr_unsigned(va_arg(ap, unsigned int));
}

void flag_x(va_list ap)
{
	int nb;
	nb = va_arg(ap, int);
	my_put_nbr_base_hexa(nb);
}

void flag_x_maj(va_list ap)
{
	int nb;
	nb = va_arg(ap, int);
	my_put_nbr_base_hexa_maj(nb);
}

