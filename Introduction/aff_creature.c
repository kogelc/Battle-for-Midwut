/*
** aff_creature.c for aff_creature in /home/sabathan/Etna1/DEVC/midwut/Introduction
**
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
**
** Started on  Wed Dec 16 11:35:04 2015 KOGEL Caroline
** Last update Wed Dec 16 17:54:13 2015 KOGEL Caroline
*/
#include "proto.h"
#include <stdlib.h>
#include <time.h>


void	aff_creature(t_creature *crea)
{
  t_creature	*move;

  move = crea;
  my_putstr("\033[0;32m\nOH !!!!! Un pokemon sauvage apparait : \033[1;35m");
  my_putstr(move->name);
  my_putstr("\033[0;32m\nIl est de level : \033[1;35m");
  my_put_nbr(move->lvl);
  my_putstr("\033[0;32m\nPV : \033[1;35m");
  my_put_nbr(move->pv);
  my_putstr("\e[0;m\n\n");
  move = move;
}

char	my_round(char **choise, t_creature *crea)
{
  my_putstr("\033[0;33mQue souhaitez-vous faire ?\n");
  my_putstr("magic catch : Essayer d'attraper le pokemon\n");
  my_putstr("help me !!! : Fuite\n");
  my_putstr("q : quitter le jeu\n\n\033[m");
  my_putstr("\033[01;34mVotre tour> \033[m");
  *choise = readLine();
  while ((my_strcmp(*choise, "magic catch") != 0)
	 && (my_strcmp(*choise, "help me !!!") != 0)
	 && (my_strcmp(*choise, "q") != 0))
    {
      my_putstr("\033[0;31mCeci n'est pas une option valide\n\033[m");
      my_putstr("\033[01;34mVotre tour> \033[m");
      *choise = readLine();
    }
  if ((my_strcmp(*choise, "help me !!!") != 1))
    my_escape(*choise);
  if ((my_strcmp(*choise, "magic catch") != 1))
    my_capture(crea);
  return (**choise);
}

void	my_capture(t_creature *crea)
{
  int	rnd;
  char	*choise;
  t_creature	*move;

  choise = 0;
  move = crea;
  srand (time(NULL));
  rnd = rand() % 3 + 1;
  if (rnd == 3)
    {
      my_putstr("Felicitation, pokemon capture avec succes !!\n");
      my_putstr(move->name);
    }
  else
    my_putstr("Le pokemon s'est liberer; il vous attaque ");
    my_putstr("et vous pousse a fuire \n");
  crea = getCreature();
  aff_creature(crea);
  move = move;
  my_round(&choise, crea);
}

void	my_escape(char *choise)
{
  t_creature	*crea;

  crea = NULL;
  crea = getCreature();
  my_putstr("\033[01;31m\nVous prenez lachement la fuite ...\n\033[m");
  aff_creature(crea);
  my_round(&choise, crea);
}
