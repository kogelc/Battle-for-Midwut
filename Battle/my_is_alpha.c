/*
** is_aplha.c for is_alpha in /home/sabathan/Etna1/DEVC/midwut/Introduction
**
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
**
** Started on  Mon Dec 14 15:47:46 2015 KOGEL Caroline
** Last update Mon Dec 14 15:52:50 2015 KOGEL Caroline
*/

int	my_is_alpha(char *c)
{
   if ((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z') || (*c >= '0' && *c <= '9'))
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
