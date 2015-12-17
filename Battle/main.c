/*
** main.c for main in /home/sabathan/Etna1/DEVC/midwut/Introduction
**
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
**
** Started on  Mon Dec 14 14:50:30 2015 KOGEL Caroline
** Last update Wed Dec 16 15:16:00 2015 KOGEL Caroline
*/

#include <stdlib.h>
#include "proto.h"

int	main(int argc, char **argv)
{
  int	verif;
  t_team *begin;
  t_creature	*crea;
  char	*choise;

  choise = 0;
  begin = NULL;
  crea = NULL;
  verif = arguments(argc, argv);
  if (verif == 0)
    return (0);
  window(argv);
  my_round(&choise, crea, begin);
  free(choise);
  free(crea);
  free(begin);
  if (*choise == 'q')
    return(0);
  return(0);
}
