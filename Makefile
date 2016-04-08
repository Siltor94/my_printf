##
## makefile for my_printf in /Users/meurin_r/Desktop/my_printf
## 
## Made by MEURIN Remy
## Login   <meurin_r@etna-alternance.net>
## 
## Started on  Mon Apr  4 11:01:09 2016 MEURIN Remy
## Last update Mon Apr  4 11:01:10 2016 MEURIN Remy
##

CC 		= gcc
CFLAGS 	= -W -Wall -Werror
LDFLAGS = -shared
SRC 	=	flags_1.c \
			flags_2.c \
			my_printf.c \
			my_putnbr.c \
			my_putnbr_base.c \
			my_putnbr_base_unsigned.c \
			my_putnbr_base_hexa.c \
			functions.c

OBJS = $(SRC:.c=.o)
OBJ = $(SRC:-fPIC .c=.o)

STATIC = libmy_printf_`uname -m`-`uname -s`.a

DYNAMIC = libmy_printf_`uname -m`-`uname -s`.so

all: my_printf_static my_printf_dynamic

clean:
		rm -f *.o *~ 

fclean: clean
		rm -f $(NAME) $(STATIC) $(DYNAMIC)

re: fclean all

my_printf_static:	$(OBJS)
					ar rcs $(STATIC) $(OBJS)
					ranlib $(STATIC)

my_printf_dynamic:	$(OBJ)
					$(CC) $(LDFLAGS) -fPIC -L. $(OBJ) -o $(DYNAMIC)							

.PHONY: all clean fclean re my_printf_static
