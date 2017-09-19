/*
** recruitment.c for recruitment in /home/missonl/script/fdi-devc/battle_for_azeroth/misson_l/recruitment
** 
** Made by MISSON-SUDRE Lucas
** Login   <misson_l@etna-alternance.net>
** 
** Started on  Thu Oct  6 23:09:56 2016 MISSON-SUDRE Lucas
** Last update Sat Oct  8 11:52:46 2016 MISSON-SUDRE Lucas
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include "proto.h"
#include "structures.h"

int		display_soldat(t_soldat *soldat, int nb_soldat);

int             my_random();

char		*my_strdup(char *dest, char *src);

t_soldat        *recruit();

int	recruitment()
{
  int		res_recr_cmp;
  int		amount_recr;
  t_soldat	*soldat;
  int		random;
  char		**array;
  int		doublon;

  amount_recr = 0;
  fakeclear();
  txt_intro();
  wait_for_enter();
  fakeclear();
  while (amount_recr < 5)
    {
      if (amount_recr == 0)
    txt_firstrecruitment();
      else
    txt_nextrecruitment();
      my_putstr("                        [Enter 'recruitment' or 'leave']\n\n\n");
      res_recr_cmp = recr_cmp(readline());
      while (res_recr_cmp == 0)
    res_recr_cmp = recr_cmp(readline());
      array = malloc(sizeof(char *)* 6);
      soldat = malloc(sizeof(char)* 15);
      if (res_recr_cmp == 1)
    {
      fakeclear();
      txt_recruit_attempt();
      wait_for_enter();
      fakeclear();
      random = my_random();
      if (random == 1)
        {
          soldat = recruit();
          array[amount_recr] = soldat->name;
          amount_recr++;
          wait_for_enter();
          fakeclear();
        }
      else
        {
          fail_recruit();
          fakeclear();
        }
    }
      if (res_recr_cmp == 2)
    {
      fakeclear();
      txt_leave();
      wait_for_enter();
      fakeclear();
    }
      if (res_recr_cmp == 3)
    {
      my_putstr("quit\n");
      return (0);
    }
      if (res_recr_cmp == 4)
    {
      doublon = amount_recr;
      while (doublon > 0)
        {
          array[doublon] = malloc(sizeof(char *)* 6);
          my_putstr(array[amount_recr]);
          amount_recr = amount_recr - 1;
        }
      amount_recr = doublon;
    }
    }
  return (0);
}

int     recr_cmp(char *str)
{
  int   a;
  int   b;
  int	c;
  int	d;
  char  *str1;
  char  *str2;
  char	*str3;
  char	*str4;
  
  str1 = "recruitment";
  str2 = "leave";
  str3 = "quit";
  str4 = "army";

  a = my_strcmp(str, str1);
  b = my_strcmp(str, str2);
  c = my_strcmp(str, str3);
  d = my_strcmp(str, str4);
  free(str);
  if (a == 0)
    return (1);
  else if (b == 0)
    return (2);
  else if (c == 0)
    return (3);
  else if (d == 0)
    return (4);
  return (0);
}
*/