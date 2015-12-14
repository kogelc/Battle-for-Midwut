/*
** my_swap.c for my_swap in /home/sabathan/Etna1/picsine/c/jour03/my_swap
** 
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
** 
** Started on  Wed Oct 21 15:03:18 2015 KOGEL Caroline
** Last update Wed Oct 21 15:31:51 2015 KOGEL Caroline
*/
void	my_swap(int *a, int *b);

void	my_swap(int *a, int *b)
{
  int temp;

  temp = *b;
  *b   = *a;
  *a   = temp;
}
