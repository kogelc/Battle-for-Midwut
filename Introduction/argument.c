/*
** chifumi.c for chifumi in /home/sabathan/Etna1/picsine/c/chifumi/chifumi
**
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
**
** Started on  Fri Oct 30 09:40:05 2015 KOGEL Caroline
** Last update Wed Dec 16 10:57:11 2015 KOGEL Caroline
*/

#include "proto.h"

char	arguments(int argnum, char **arg)
{
  if (argnum != 3)
    {
      my_putstr("1/ USAGE: ./sta -n YOUR_NAME\n");
      return (0);
    }
  if (my_strcmp(arg[1], "-n") != 0)
    {
      my_putstr("2/ USAGE: ./sta -n YOUR_NAME\n");
      return (0);
    }
  if (!my_is_alpha(arg[2]))
    {
      my_putstr("USAGE: Alphanumeric only\n");
      return (0);
    }
  return (1);
}
