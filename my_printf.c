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
	};

int my_printf(char * str, ...)
{
	va_list ap;
	int i;
	int cpt;

	i = 0;
	cpt = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			while (cpt < 4)
			{
				if (str[i + 1] == flags[cpt].option)
					flags[cpt].tab(ap);
			cpt++;
			}	
		}
		else
			my_putchar(str[i+1]);	
	i++;
	}
	va_end(ap);
	return i;
}

int main(void)
{
	my_printf("%s", "Bonjour, ceci est un test\n" );
	my_printf("%d", 65);
	my_printf("%i", 42);
	my_printf("%c", 'c');

	my_printf("%s%s", "Bonjour, ceci est un test\n", "iuhgfd" );

	return (0);
}
