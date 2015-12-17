/*
** my_putstr.c for my_putstr in /home/sabathan/Etna1/picsine/c/jour03/my_putstr
** 
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
** 
** Started on  Wed Oct 21 09:23:18 2015 KOGEL Caroline
** Last update Sat Oct 24 23:35:34 2015 KOGEL Caroline
*/

void	my_putchar(char c);
void	my_putstr(char *str);

void    my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
}
