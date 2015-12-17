/*
** battle.c for battle in /home/sabathan/Etna1/DEVC/midwut/Battle
**
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
**
** Started on  Thu Dec 17 12:21:16 2015 KOGEL Caroline
** Last update Thu Dec 17 16:58:26 2015 KOGEL Caroline
*/
#include "proto.h"
#include <stdlib.h>

char	menu_battle(char **choise, t_creature *crea, t_team *myteam)
{
  my_putstr("\033[0;36m\nQue souhaitez-vous faire ?\n");
  my_putstr("\033[0;33mt: Voir votre team\n");
  my_putstr("o: définir laquelle de vos créatures se battra au combat\n");
  my_putstr("f: Fight !!\n");
  my_putstr("q: quitter le jeu\n\033[m");
  my_putstr("\033[01;34mVotre tour> \033[m");
  *choise = readLine();
  while ((my_strcmp(*choise, "t") != 0) && (my_strcmp (*choise, "o") != 0)
	 && (my_strcmp(*choise, "f") != 0) && (my_strcmp(*choise, "q") != 0))
    {
      my_putstr("\033[0;31mCeci n'est pas une option valide\n\033[m");
      my_putstr("\033[01;34mVotre tour> \033[m");
      *choise = readLine();
    }
  if (my_strcmp(*choise, "t") == 0)
    aff_myteam(myteam, choise, crea);
  if (my_strcmp(*choise, "o") == 0)
    my_putstr("Fonction non-implementé");
  if (my_strcmp(*choise, "f") == 0)
    menu_attack(choise, crea, myteam);
   return (**choise);
}

char	menu_attack(char **choise, t_creature *crea, t_team *myteam)
{
  my_putstr("\033[0;36m\nQuelle attaque voulez-vous lancer\n");
  my_putstr("s: Slash\nf: Fire\ng: Gamble\nr: Rest\nm: Magic catch\n");
  my_putstr("q: Quitter le combat\n\033[m");
  my_putstr("\033[01;34mVotre tour> \033[m");
  *choise = readLine();
  while ((my_strcmp(*choise, "s") != 0) && (my_strcmp (*choise, "f") != 0)
	 && (my_strcmp(*choise, "g") != 0) && (my_strcmp(*choise, "r") != 0)
	 && (my_strcmp(*choise, "m") != 0) && (my_strcmp(*choise, "q") != 0))
    {
      my_putstr("\033[0;31mCeci n'est pas une option valide\n\033[m");
      my_putstr("\033[01;34mVotre tour> \033[m");
      *choise = readLine();
    }
 if ((my_strcmp(*choise, "s") == 0) || (my_strcmp (*choise, "f") == 0)
      || (my_strcmp(*choise, "g") == 0) || (my_strcmp(*choise, "r") == 0))
 {
   my_putstr("Fonction non-implementer");
   menu_attack(choise, crea, myteam);
 }
   if (my_strcmp(*choise, "m") == 0)
    my_capture(crea, myteam);
  if (my_strcmp(*choise, "q") == 0)
    menu_battle(choise, crea, myteam);
  return (**choise);
}





void aff_myteam (t_team *myteam, char **choise, t_creature *crea)
{
  t_team *move;

  move = myteam;
  my_putstr("\nMa team de creature :\n");
  while (move != NULL)
    {
      my_putstr("\nCreature: ");
      my_putstr(move->creature->name);
      my_putstr("\nPV: ");
      my_put_nbr(move->creature->lvl);
      my_putstr("\nLvl: ");
      my_put_nbr(move->creature->pv);
      my_putstr("\nPV: ");
      my_put_nbr(move->creature->pvmax);
      my_putstr("\nPV max: ");
      my_put_nbr(move->creature->pm);
      my_putstr("\nPm max: ");
      my_put_nbr(move->creature->pmmax);
      my_putstr("\n\n#########\n\n");
      move = move -> next;
    }
menu_battle(choise, crea, myteam);
}
