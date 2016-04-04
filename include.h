/*
** include.h for my_printf in /Users/meurin_r/Desktop/my_printf
** 
** Made by MEURIN Remy
** Login   <meurin_r@etna-alternance.net>
** 
** Started on  Mon Apr  4 15:38:33 2016 MEURIN Remy
** Last update Mon Apr  4 15:38:34 2016 MEURIN Remy
*/

#ifndef INCLUDE_H_
#define INCLUDE_H_

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int 	flag_s(va_list ap);
int 	flag_d(va_list ap);
int 	flag_i(va_list ap);
int 	flag_c(va_list ap);
void	my_putchar(char c);
void	my_putstr(char *str);
void	my_put_nbr(int nb);
int		my_printf(char * str, ...);

#endif
