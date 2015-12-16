/*
** widow.c for window in /home/sabathan/Etna1/picsine/c/chifumi/chifumi
**
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
**
** Started on  Fri Oct 30 22:57:10 2015 KOGEL Caroline
** Last update Sat Oct 31 14:15:00 2015 KOGEL Caroline
*/
#include "proto.h"

char    window(char **arg)
    {
  my_putstr("\033[0;33m\n--------------------------------------------------------------\n\n");
  my_putstr("Welcome Battle for Midwut \n");
  my_putstr("Your name => ");
  my_putstr(arg[2]);
  my_putstr("\n\n--------------------------------------------------------------\n\n\033[m");
  return (0);
}
