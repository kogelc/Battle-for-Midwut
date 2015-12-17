/*
** catch.c for catch in /home/sabathan/Etna1/DEVC/midwut/Introduction
**
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
**
** Started on  Wed Dec 16 18:59:24 2015 KOGEL Caroline
** Last update Wed Dec 16 20:08:23 2015 KOGEL Caroline
*/
#include <stdlib.h>
#include "proto.h"
#include "base.h"
#include <stdio.h>


/*
t_team	*catch(t_team *begin, t_creature *crea)
{
  t_team *team;
  t_team *next;
  t_creature *move;

  team = malloc(sizeof(t_team));
  if (team == NULL)
    return (NULL);
  team->name = my_putstr(crea.name);
  team->next = begin;
  return(team);
}
*/

t_team	*catch(t_creature *crea, t_team *begin)
{
  t_team	*def;

  def = malloc(sizeof(*def));
  if (def == 0)
    return 0;
  def->creature = crea;
  def->next = begin;
  return(def);
}


void	aff_catch(t_team *myteam)
{
  t_team	*move;

  move = myteam;
  my_putstr("Resumé de la creature\n Nom:");
  my_putstr(move->creature->name);
  my_putstr("Niveau ");
  my_put_nbr(move->creature->lvl);
  move = move;
}
