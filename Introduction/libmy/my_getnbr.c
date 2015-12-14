/*
** my_getnbr.c for my_getnbr in /home/sabathan/Etna1/picsine/c/jour05/my_getnbr
** 
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
** 
** Started on  Sat Oct 24 18:00:10 2015 KOGEL Caroline
** Last update Sat Oct 24 22:45:24 2015 KOGEL Caroline
*/
#include <stdio.h>

int	my_getnbr(char *str);
void    my_putchar(char c);
int	my_nb_len(int n);
void    my_put_nbr(int n);


int     my_getnbr(char *str)
{
  int	res;
  int	i;
  char	sign;

  sign = 1;
  i = 0;
  res = 0;
  while (str[i] == '+' || str[i] == '-')
    {
      if ( str[i] == '-')
	sign = sign  * -1;
      i = i + 1;
    }
  while	((str[i] >= 48 && str[i] <= 57) && str[i] != '\0')
    {
      res = res * 10;
      res = (str[i] - 48) + res;
      i = i + 1;
    }
  return (res * sign);
}
