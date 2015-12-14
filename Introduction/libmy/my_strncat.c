/*
** my_strncat.c for my_strncat in /home/sabathan/Etna1/picsine/c/jour04/my_strncat
** 
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
** 
** Started on  Thu Oct 22 23:17:23 2015 KOGEL Caroline
** Last update Wed Oct 28 20:45:19 2015 KOGEL Caroline
*/

char *my_strncat(char *str1, char *str2, int n);
void	my_putchar(char c);

char *my_strncat(char *str1, char *str2, int n)
{
  int	j;
  int	i;

  i = 0;
  j = 0;
  while (str1[i] != '\0')
    {
      i = i + 1;
    }
  while (str2[j] != '\0' && j < n)
    {
      str1[i] = str2[j];
      i = i + 1;
      j = j + 1;
    }
  i = i + 1;
  str1[i] = '\0';
  return (str1);
}
