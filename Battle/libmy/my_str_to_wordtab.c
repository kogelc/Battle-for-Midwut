/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/sabathan/Etna1/picsine/c/jour07/my_str_to_wordtab
** 
** Made by KOGEL Caroline
** Login   <kogel_c@etna-alternance.net>
** 
** Started on  Mon Oct 26 18:13:22 2015 KOGEL Caroline
** Last update Wed Oct 28 18:01:35 2015 KOGEL Caroline
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	my_putchar(char c);
char    **my_str_to_wordtab(char *str);
char    *my_strdup(char *str);
char	*my_strncpy(char *dest, char *src, int n);
void	my_putstr(char *str);

int	is_alpha(char c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
    {
      return (1);
    }
  else
    {
      return (0);
    }
}

int     word_num(char *str)
{
  int	word;
  int	i;

  word = 0;
  i = 0;
  while (str[i] != '\0')
    {
      while (is_alpha(str[i]))
	{
	  i = i + 1;
	}
      while (!is_alpha(str[i]) && (str[i] != '\0'))
	{
	  i = i + 1;
	}
      word = word + 1;
    }
  return (word);
}

char	*replace_str(char *src)
{
  int	i;
  int	compt;

  i = 0;
  compt = 0;
  while (src[i] != '\0')
   {
      i = i + 1;
      compt = compt + 1;
    }
  i = 0;
  while (i < compt)
    {
      while (!is_alpha(src[i]))
	{
	  src[i] = ' ';
	  i = i + 1;
	}
      i = i + 1;
    }
  return (src);
}

char	**split_src(char *src, char **dest, int word)
{
  int	i;
  int	j;
  int	compt;

  i = 0;
  j = 0;
  while (word > 0)
    {
      compt = 0;
      while (is_alpha(src[i]))
	{
	  compt = compt + 1;
	  i = i + 1;
	}
      if ((dest[j] = malloc(compt * sizeof(char) + 1)) == NULL)
	return (NULL);
      dest[j] = my_strncpy(dest[j], (&src[i] - compt), compt);
      while (!is_alpha(src[i]) && src[i] != '\0')
	i = i + 1;
      word = word - 1;
      j = j + 1;
    }
  dest[j] = "\0";
  return(dest);
}

char    **my_str_to_wordtab(char *str)
{
  int	word;
  char	**dest;
  char	*src;

  src = 0;
  word = word_num(str);
  dest = malloc((word * sizeof(char*)) + 1);
  src = my_strdup(str);
  src = replace_str(src);
  if (dest == NULL)
    return (NULL);

  dest = split_src(src, dest, word);
  return (dest);
}
