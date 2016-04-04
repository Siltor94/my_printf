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
NAME 	=	a.out
SRC 	=	flags_1.c \
			my_printf.c \
			functions.c

OBJ = $(SRC:.c=.o)

$(NAME):	$(OBJ)
			$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

all: $(NAME)

clean:
		rm -f $(OBJ) *~

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re		

