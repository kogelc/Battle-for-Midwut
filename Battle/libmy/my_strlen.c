/*
** my_strlen.c for my_strlen in /home/sabathan/Etna1/picsine/c/jour03/my_strlen
**
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
**
** Started on  Wed Oct 21 09:50:04 2015 KOGEL Caroline
** Last update Wed Oct 21 11:08:10 2015 KOGEL Caroline
*/

void	my_putchar(char c);
int	my_strlen(char *str);

int     my_strlen(char *str)
{
  int	res;

  res = 0;
  while (*str != '\0')
    {
      str = str + 1;
      res = res + 1;
    }
  return (res);
}
