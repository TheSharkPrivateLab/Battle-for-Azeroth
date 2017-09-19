/*
** intro.c for intro in /home/missonl/script/fdi-devc/battle_for_azeroth/misson_l/recruitment
** 
** Made by MISSON-SUDRE Lucas
** Login   <misson_l@etna-alternance.net>
** 
** Started on  Thu Oct  6 20:43:34 2016 MISSON-SUDRE Lucas
** Last update Sat Oct  8 11:44:42 2016 MISSON-SUDRE Lucas
*/
/*
#include <stdlib.h>
#include "proto.h"

int	intro()
{
  int	a;
  int	input;

  fakeclear();
  txt_introintro();
  a = 0;
  while (a++ < 15)
    my_putchar('\n');
  
  input = intro_cmp(readline());
  while (input == 0)
    input = intro_cmp(readline());
  if (input == 1)
    {
      my_putstr("Let's go !");
      my_putchar('\n');
    }
  else if (input == 2)
    {
      my_putstr("Au revoir !");
      my_putchar('\n');
      return (0);
    }
  return (1);
}

int	intro_cmp(char *str)
{
  int	a;
  int	b;
  char	*str1;
  char	*str2;

  str1 = "1";
  str2 = "2";
  a = *str - *str1;
  b = *str - *str2;
  free(str);
  if (a == 0)
    {
      return (1);
    }
  else if (b == 0)
    {
      return (2);
    }
  else
    return (0);
}
*/