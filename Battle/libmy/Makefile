##
## Makefile for Makefile in /home/sabathan/Etna1/picsine/c/colle/colle1/step_one
## 
## Made by KOGEL Caroline
## Login   <kogel_c@etna-alternance.net>
## 
## Started on  Fri Oct 23 09:50:33 2015 KOGEL Caroline
## Last update Wed Oct 28 20:24:03 2015 KOGEL Caroline
##
CC = gcc
NAME = libmy.a
SRC = my_putchar.c \
      my_isneg.c \
      my_put_nbr.c \
      my_swap.c \
      my_putstr.c \
      my_strlen.c \
      my_getnbr.c \
      my_strcpy.c \
      my_strncpy.c \
      my_strcmp.c \
      my_strncmp.c \
      my_strcat.c \
      my_strncat.c \
      my_strstr.c \
      my_strdup.c \
      my_str_to_wordtab.c
OBJ = $(SRC:%.c=%.o)
RM =	rm -rf

$(NAME):$(OBJ)
		$(CC) -W -Werror -Wall -c $(SRC)
		ar r $(NAME) $(OBJ)
		ranlib $(NAME)
all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all
