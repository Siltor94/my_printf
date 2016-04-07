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
NAME 	=	a.out
SRC 	=	flags_1.c \
			flags_2.c \
			my_printf.c \
			my_putnbr.c \
			my_putnbr_base.c \
			my_putnbr_base_unsigned.c \
			my_putnbr_base_hexa.c \
			functions.c

OBJ = $(SRC:.c=.o)

STATIC = libmy_printf_`uname -m`-`uname -s`.a

DYNAMIC = libmy_printf_`uname -m`-`uname -s`.so

$(NAME):	$(OBJ)
			$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

all: my_printf_static my_printf_dynamic

clean:
		rm -f $(OBJ) *~

fclean: clean
		rm -f $(NAME) $(STATIC) $(DYNAMIC)

re: fclean all

my_printf_static:	$(OBJ)
					ar rcs $(STATIC) $(OBJ)
					ranlib $(STATIC)

my_printf_dynamic:	$(OBJ)
					$(CC) $(LDFLAGS) -fPIC -L. $(OBJ) -o $(DYNAMIC)							

.PHONY: all clean fclean re my_printf_static my_printf_dynamic
