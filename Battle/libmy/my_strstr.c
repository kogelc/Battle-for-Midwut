/*
** my_strstr.c for my_strstr.c in /home/sabathan/Etna1/picsine/c/jour04/my_strstr
** 
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
** 
** Started on  Fri Oct 23 20:27:33 2015 KOGEL Caroline
** Last update Thu Oct 29 16:19:24 2015 KOGEL Caroline
*/
#include <stdlib.h>
#include <stdio.h>


char	*my_strstr(char *str, char *to_find);
void	my_putchar(char c);
int     my_strlen(char *str);


char    *my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;
  int	compt;

  i = 0;
  j = 0;
  compt = my_strlen(to_find);
  while (str[i] != '\0')
    {
      if (to_find[j] == str[i])
	{
	  j = j + 1;
	  compt = compt - 1;
	}
      else
	{
	  j = 0;
	  compt = my_strlen(to_find);
	}
      if (compt == 0)
	{
	  i = i - (j - 1);
	  return (str + i);
	}
      i = i + 1;
    }
  return ("null");
}
