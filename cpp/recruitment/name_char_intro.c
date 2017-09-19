/*
** name_char_intro.c for name_char_intro in /home/missonl/script/fdi-devc/battle_for_azeroth/misson_l/recruitment
** 
** Made by MISSON-SUDRE Lucas
** Login   <misson_l@etna-alternance.net>
** 
** Started on  Fri Oct  7 15:20:21 2016 MISSON-SUDRE Lucas
** Last update Fri Oct  7 19:07:52 2016 MISSON-SUDRE Lucas
*/
/*
#include <stdlib.h>
#include "proto.h"
#include "structures.h"

int	my_strlen(char *str);
char    *my_strcpy(char *dest, char *src);

int			name_char_intro(int ac, char **av)
{
  char			*str;
  t_personnage		player;
  str = "-n";
  if (ac != 3)
    {
      my_putstr("\n\n\n\n\nPlease pick a character name with '-n [NAME]'.\n\n\n\n\n");
      return (0);
    }
  if (my_strcmp(str, av[1]) != 0)
    return (0);
  fakeclear();
  my_putstr("                                You are now playing as ");
  player.name = malloc(sizeof(char *)* my_strlen(av[2]));
  my_strcpy(player.name, av[2]);
  my_putstr(av[2]);
  my_putstr("\n\n\n\n\n");
  wait_for_enter();
  my_putstr("\n\n\n\n\n");
  return (1);
}
*/