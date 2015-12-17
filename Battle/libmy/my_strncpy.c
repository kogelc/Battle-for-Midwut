/*
** my_strncpy.c for my_strncpy in /home/sabathan/Etna1/picsine/c/jour04/my_strncpy
** 
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
** 
** Started on  Thu Oct 22 16:01:03 2015 KOGEL Caroline
** Last update Sat Oct 24 23:25:43 2015 KOGEL Caroline
*/

char	*my_strncpy(char *dest, char *src, int n);
void	my_putstr(char *str);
void    my_putchar(char c);

char *my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (i < n && src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  while (i < n)
    {
      dest[i] = '0';
      i = i + 1;
    }
  return (dest);
}
