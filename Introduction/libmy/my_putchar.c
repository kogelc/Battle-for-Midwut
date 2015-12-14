/*
** my_putchar.c for my_putchar in /home/sabathan/Etna1/picsine/c/jour01
** 
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
** 
** Started on  Mon Oct 19 11:21:08 2015 KOGEL Caroline
** Last update Mon Oct 19 17:33:06 2015 KOGEL Caroline
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
