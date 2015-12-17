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
  my_putstr("\033[0;32m\nOH !!!!! Une creature sauvage apparait : \033[1;35m");
  my_putstr(move->name);
  my_putstr("\033[0;32m\nIl est de niveau : \033[1;35m");
  my_put_nbr(move->lvl);
  my_putstr("\e[0;m\n\n");
  move = move;
}

char	my_round(char **choise, t_creature *crea, t_team *begin)
{
  crea = getCreature();
  aff_creature(crea);
  my_putstr("\033[0;36mQue souhaitez-vous faire ?\n");
  my_putstr("\033[0;33mm : magic catch : Essayer d'attraper la creature\n");
  my_putstr("h :help me !!! : Fuite\n");
  my_putstr("q : quitter le jeu\n\n\033[m");
  my_putstr("\033[01;34mVotre tour> \033[m");
  *choise = readLine();
  while ((my_strcmp(*choise, "m") != 0)
	 && (my_strcmp (*choise, "h") != 0)
	 && (my_strcmp(*choise, "q") != 0))
    {
      my_putstr("\033[0;31mCeci n'est pas une option valide\n\033[m");
      my_putstr("\033[01;34mVotre tour> \033[m");
      *choise = readLine();
    }
  if ((my_strcmp(*choise, "h") == 0))
    my_escape(begin);
  if ((my_strcmp(*choise, "m") == 0))
    my_capture(crea, begin);
  free(crea);
  free(begin);
  return (**choise);
}

void	my_capture(t_creature *crea, t_team *begin)
{
  int	rnd;
  char	*choise;
  t_creature	*move;
  t_team *myteam;

  myteam = NULL;
  choise = 0;
  move = crea;
  srand (time(NULL));
  rnd = rand() % 3 + 1;
  if (rnd == 3)
    {
      my_putstr("\033[01;37m\nFelicitation, creature capturé avec succes !!\n\033[m");
      myteam = catch(crea, begin);
      aff_catch(myteam);
      menu_battle(&choise, crea, myteam);
    }
  else
  {
    my_putstr("\033[01;37m\nLa creature s'est liberer; elle vous attaque ");
    my_putstr("et vous pousse a fuire \n\033[m");
    my_putstr("\n--------------------------------------------------------------\n\n");
  my_round(&choise, crea, begin);
  }
  move = move;
}

void	my_escape(t_team *begin)
{
  t_creature	*crea;
  char *choise;

  choise = 0;
  crea = NULL;
  my_putstr("\033[01;31m\nVous prenez lachement la fuite ...\n\033[m");
    my_putstr("\n--------------------------------------------------------------\n\n");
  my_round(&choise, crea, begin);
}
