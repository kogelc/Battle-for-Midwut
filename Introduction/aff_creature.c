/*
** aff_creature.c for aff_creature in /home/sabathan/Etna1/DEVC/midwut/Introduction
**
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
**
** Started on  Wed Dec 16 11:35:04 2015 KOGEL Caroline
** Last update Wed Dec 16 14:28:31 2015 KOGEL Caroline
*/
#include "proto.h"
#include <stdlib.h>


void	aff_creature(t_creature *crea)
{
  t_creature	*move;

  move = crea;
  my_putstr("\nOH !!!!! Un pokemon sauvage apparait : ");
  my_putstr(move->name);
  my_putstr("\nIl est de level : ");
  my_put_nbr(move->lvl);
  my_putstr("\n PV : ");
  my_put_nbr(move->pv);
  my_putstr("\n");
  move = move;
}

char	my_round(char **choise)
{
  my_putstr("Votre tour>");
  *choise = readLine();
  while ((my_strcmp(*choise, "magic catch") != 0)
	 && (my_strcmp(*choise, "help me !!!") != 0))
    {
      my_putstr("Ceci n'est pas une option valide\n");
      my_putstr("Votre tour>");
      *choise = readLine();
    }
  return (**choise);
}
