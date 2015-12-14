/*
** main.c for main in /home/sabathan/Etna1/DEVC/midwut/Introduction
**
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
**
** Started on  Mon Dec 14 14:50:30 2015 KOGEL Caroline
** Last update Mon Dec 14 15:17:03 2015 KOGEL Caroline
*/
#include "proto.h"

char	arguments(int argnum, char **arg);
char	window(char **arg);


int	main(int argc, char **argv)
{
  int	verif;

  verif = arguments(argc, argv);
  if (verif == 0)
    return (0);
  window(argv);
}
