/*
** my_strcat.c for my_strcat in /home/sabathan/Etna1/picsine/c/jour04/my_strcat
** 
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
** 
** Started on  Thu Oct 22 21:53:48 2015 KOGEL Caroline
** Last update Thu Oct 22 23:41:56 2015 KOGEL Caroline
*/

char	*my_strcat(char *str1, char *str2);
void	my_putchar(char c);

char	*my_strcat(char *str1, char *str2)
{
  int	j;
  int	i;

  i = 0;
  j = 0;
  while (str1[i] != '\0')
    {
      i = i + 1;
    }
  while (str2[j] != '\0')
    {
      str1[i] = str2[j];
      i = i + 1;
      j = j + 1;
    }
  str1[i] = '\0';
  return (str1);
}
