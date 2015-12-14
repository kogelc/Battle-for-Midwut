/*
** widow.c for window in /home/sabathan/Etna1/picsine/c/chifumi/chifumi
**
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
**
** Started on  Fri Oct 30 22:57:10 2015 KOGEL Caroline
** Last update Sat Oct 31 14:15:00 2015 KOGEL Caroline
*/
char	window(char **arg);
void	my_putchar(char c);
void	my_putstr(char *str);
int     my_strcmp(char *s1, char *s2);

char    window(char **arg)
    {
  my_putstr("\n---------------------------------------------------------\n\n");
  if (my_strcmp(arg[2], "classic") == 0)
    my_putstr("Version : ROCK - PAPER - SCISSORS \n");
  if (my_strcmp(arg[2], "spock") == 0)
    {
       my_putstr("Version : ROCK - PAPER - SCISSORS - LIZARD - SPOCK\n");
       my_putstr("Dif tor heh smusma\n");
    }
  my_putstr("BEST OF : ");
  my_putstr(arg[4]);
  my_putstr("\n\n-------------------------------------------------------\n\n");
  return (0);
}
