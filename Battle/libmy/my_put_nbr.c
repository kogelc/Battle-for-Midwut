/*
** my_put_nbr.c for my_put_nbr in /home/sabathan/Etna1/picsine/c/jour05/my_put_nbr
**
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
**
** Started on  Fri Oct 23 16:11:16 2015 KOGEL Caroline
** Last update Wed Oct 28 21:34:22 2015 KOGEL Caroline
*/
void    my_putchar(char c);
int	my_nb_len(int n);
void    my_put_nbr(int n);
void	my_putstr(char *str);

int	my_nb_len(int n)
{
  int div;
  int res;
  res = 1;
  if (n < 0)
    {
      n = n * -1;
    }
  for (div = 1; n / div > 9; div = div * 10)
    {
      res = res + 1;
    }
  return (res);
}

void my_put_nbr(int n)
{
  int	mult;
  int mult2;
  int	res;

  mult = 1;
  mult2 =0;
  res = my_nb_len(n);
  if (n == -2147483648)
    {
      my_putstr("-2147483648");
    }
  while (res > 1)
    {
      mult = mult *10;
      res = res - 1;
    }
  while (mult != 0 && n != -2147483648)
    {
      if (n < 0)
	{
	  n = (n * (-1));
	  my_putchar('-');
	}
      mult2 = (n / mult) % 10;
      res = res - 1;
      mult = mult / 10;
      my_putchar(mult2 + 48);
    }
}
