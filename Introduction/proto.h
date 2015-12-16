/*
** proto.h for prototype in /home/sabathan/Etna1/picsine/algo/dicowesh/DicoWESH
**
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
**
** Started on  Thu Nov  5 11:11:10 2015 KOGEL Caroline
** Last update Mon Dec 14 17:15:19 2015 KOGEL Caroline
*/

#ifndef PROTO_H_
# define PROTO_H_

#include "base.h"

/* Libmy */
void	my_putchar(char c);
void	my_putstr(char *str);
int	my_strcmp(char *s1, char *s2);
char	*my_strdup(char *str);
void    my_put_nbr(int n);

/* Other */
t_creature *getCreature();
char        *readLine();
int	my_is_alpha(char *c);
char	arguments(int argnum, char **arg);
char	window(char **arg);
void    aff_creature(t_creature *crea);
char  my_round(char **choise, t_creature *crea);
void     my_escape(char *choise);
void my_capture  (t_creature *crea);

#endif /* !PROTO_H_ */
