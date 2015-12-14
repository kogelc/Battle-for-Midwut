/*
** my_strdup.c for my_strdup in /home/sabathan/Etna1/picsine/c/jour07/my_strdup
** 
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
** 
** Started on  Mon Oct 26 15:09:44 2015 KOGEL Caroline
** Last update Wed Oct 28 22:39:39 2015 KOGEL Caroline
*/
#include <stdlib.h>

void	my_putchar(char c);
int	my_strlen(char *str);

char    *my_strdup(char *str)
{
  int	i;
  int	res;
  char	*dest;

  i = 0;
  dest = 0;
  res = my_strlen(str);
  dest = malloc(res * sizeof(str));
  if (dest == 0)
    {
      return (0);
    }
  while (str[i] != '\0')
    {
      dest[i] = str[i];
      i = i + 1;
    }
  i = i + 1;
  dest[i] = '\0';
  return (dest);
}
