/*
** my_printf.c for my_printf in /Users/meurin_r/Desktop/my_printf
** 
** Made by MEURIN Remy
** Login   <meurin_r@etna-alternance.net>
** 
** Started on  Mon Apr  4 10:54:16 2016 MEURIN Remy
** Last update Mon Apr  4 10:54:48 2016 MEURIN Remy
*/

#include "include.h"
#include "struct.h"

t_flags flags[] = {
		{'s',flag_s},
		{'d',flag_d},
		{'i',flag_i},
		{'c',flag_c},
		{'o',flag_o},
		{'u',flag_u},
		{'x',flag_x},
		{'X',flag_x_maj},
	};	

int my_printf(char * str, ...)
{
	va_list ap;
	int i;
	int cpt;

	cpt = 0;
	va_start(ap, str);
	for (i = 0; str[i]; i++)
	{
		if (str[i] == '%')
		{
			while (cpt < 8)
			{
				if (str[i + 1] == flags[cpt].option)
					flags[cpt].tab(ap);
			cpt++;
			}
			if (str[i + 1] == '%')
				my_putchar('%');
		i++;
		cpt = 0;	
		}
		else
			my_putchar(str[i+1]);
	}
	return (i);
	va_end(ap);
}
