/*
** readline.c for readline in /home/missonl/script/fdi-devc/battle_for_azeroth/misson_l/recruitment
** 
** Made by MISSON-SUDRE Lucas
** Login   <misson_l@etna-alternance.net>
** 
** Started on  Thu Oct  6 19:52:32 2016 MISSON-SUDRE Lucas
** Last update Sat Oct  8 09:50:13 2016 MISSON-SUDRE Lucas
*/
/*
#include "structures.h"
#include <stdlib.h>
#include <stdio.h>
#include "proto.h"


char	*readline()
{
  ssize_t	ret;
  char		*buff;

  my_putstr("Command > ");
  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
*/