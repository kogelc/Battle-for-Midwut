/*
** my_isneg.c for my_isneg in /home/sabathan/Etna1/picsine/c/jour01/my_isneg
** 
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
** 
** Started on  Mon Oct 19 21:43:40 2015 KOGEL Caroline
** Last update Fri Oct 23 16:29:03 2015 KOGEL Caroline
*/
void    my_putchar(char c);
int	my_isneg(int n);

int	my_isneg(int n)
{
  if (n < 0)
    {
      return (0);
    }
  else
    {
      return (1);
    }
}
