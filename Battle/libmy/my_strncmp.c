/*
** my_strncmp.c for my_strncmp in /home/sabathan/Etna1/picsine/c/jour04/my_strncmp
** 
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
** 
** Started on  Thu Oct 22 21:30:48 2015 KOGEL Caroline
** Last update Sat Oct 24 23:03:19 2015 KOGEL Caroline
*/
int my_strncmp(char *s1, char *s2, int n);

int my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
    {
      if (s1[i] > s2[i])
	return (1);
      if (s1[i] < s2[i])
	return (-1);
      i = i + 1;
    }
  return (0);
}
