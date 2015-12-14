##
## Makefile for Makefile in /home/sabathan/Etna1/picsine/c/colle/colle1/step_one
##
## Made by KOGEL Caroline
## Login   <kogel_c@etna-alternance.net>
##
## Started on  Fri Oct 23 09:50:33 2015 KOGEL Caroline
## Last update Mon Dec 14 17:38:13 2015 KOGEL Caroline
##

CC = gcc
NAME = sta
SRC = $(wildcard *.c) \
      libmy/my_putchar.c \
      libmy/my_isneg.c \
      libmy/my_put_nbr.c \
      libmy/my_swap.c \
      libmy/my_putstr.c \
      libmy/my_strlen.c \
      libmy/my_getnbr.c \
      libmy/my_strcpy.c \
      libmy/my_strncpy.c \
      my_strcmp.c \
      my_strncmp.c \
      my_strcat.c \
      my_strncat.c \
      my_strstr.c \
      my_strdup.c \
      my_str_to_wordtab.c



INC = $(wildcard *.h)
OBJ = $(SRC:.c=.o)
RM = rm -f
CFLAGS = -W -Wall -Wextra -Werror

$(NAME):	$(OBJ) $(INC)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@echo "Compilation complete!"

all:	$(NAME)
clean:
	$(RM) $(OBJ)
	@echo "Cleanup complete!"

fclean:		clean
	$(RM) $(NAME)
	@echo "FCleanup complete!"

re:	fclean all
