/*
** my_strcpy.c for my_strcpy in /home/sabathan/Etna1/picsine/c/jour04/my_strcpy
** 
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
** 
** Started on  Thu Oct 22 19:51:26 2015 KOGEL Caroline
** Last update Sat Oct 24 23:24:48 2015 KOGEL Caroline
*/

char	*my_strcpy(char *dest, char *src);
void    my_putchar(char c);
void	my_putstr(char *str);

char    *my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}
