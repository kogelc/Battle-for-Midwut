/*
** main.c for main in /home/sabathan/Etna1/DEVC/midwut/Introduction
**
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
**
** Started on  Mon Dec 14 14:50:30 2015 KOGEL Caroline
** Last update Mon Dec 14 17:29:51 2015 KOGEL Caroline
*/

#include <stdlib.h>
#include "proto.h"

int	main(int argc, char **argv)
{
  int	verif;
  t_creature *crea;
  char *choise;

  choise = 0;
  crea = NULL;
  crea = getCreature();
  verif = arguments(argc, argv);
  if (verif == 0)
    return (0);
  window(argv);
  aff_creature(crea);
  my_round(&choise);
  return(0);
}
