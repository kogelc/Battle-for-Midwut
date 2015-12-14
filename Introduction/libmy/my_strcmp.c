/*
** my_strcmp.c for my_strcmp in /home/sabathan/Etna1/picsine/c/jour04/my_strcmp
** 
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
** 
** Started on  Thu Oct 22 20:21:35 2015 KOGEL Caroline
** Last update Sat Oct 24 22:59:47 2015 KOGEL Caroline
*/
int my_strcmp(char *s1, char *s2);

int my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != '\0' || s2[i] != '\0')
    {
      if (s1[i] > s2[i])
	return (1);
      if (s1[i] < s2[i])
	return (-1);
      i = i + 1;
    }
   return (0);
}
