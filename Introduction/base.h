/*
** base.h for base in /home/sabathan/Etna1/DEVC/midwut/Introduction
**
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
**
** Started on  Wed Dec 16 11:58:56 2015 KOGEL Caroline
** Last update Wed Dec 16 12:00:23 2015 KOGEL Caroline
*/

#ifndef BASE_H_
# define BASE_H_

typedef struct	s_creature
{
  char	*name;
  int	lvl;
  int	pv;
  int	pvmax;
  int	pm;
  int	pmmax;
}	t_creature;

typedef struct	s_team
{
  char	*name;
  int	lvl;
  int	pv;
  int	pvmax;
  int	pm;
  int	pmmax;
}	t_team;

#endif /* !BASE_H_ */
