/*
** struct.h for my_printf in /Users/meurin_r/Desktop/my_printf
** 
** Made by MEURIN Remy
** Login   <meurin_r@etna-alternance.net>
** 
** Started on  Mon Apr  4 15:37:49 2016 MEURIN Remy
** Last update Mon Apr  4 15:37:53 2016 MEURIN Remy
*/

#ifndef STRUCT_H_
#define STRUCT_H_

struct s_flags
{
  char option;
  int  (*tab)(va_list ap);
};
typedef struct s_flags t_flags;

#endif
