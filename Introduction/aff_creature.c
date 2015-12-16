/*
** aff_creature.c for aff_creature in /home/sabathan/Etna1/DEVC/midwut/Introduction
**
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
**
** Started on  Wed Dec 16 11:35:04 2015 KOGEL Caroline
** Last update Wed Dec 16 11:37:21 2015 KOGEL Caroline
*/
#include "proto.h"
#include <stdlib.h>


void    aff_creature(t_creature *crea)
{
  t_creature	*move;

  move = crea;
  my_putstr("\nOH !!!!! Un pokemon sauvage aparait : ");
  my_putstr(move->name);
  my_putstr("\nIl est de level : ");
  my_put_nbr(move->lvl);
  my_putstr("\n PV : ");
  my_put_nbr(move->pv);
  my_putstr("\n");
  move = move;
 }
