/*
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NBCREA 5

typedef struct  s_soldat
{
  char		*name;
  int           lvl;
  int           pv;
  int           pvmax;
  int           pm;
  int           pmmax;
}               t_soldat;

static t_soldat g_soldats[] =
  {
    {"Koopa", 1, 10, 10, 20, 20},
    {"Bob bomb", 1, 10, 10, 20, 20},
    {"Yoshi", 1, 10, 10, 20, 20},
    {"Maskas", 1, 10, 10, 20, 20},
    {"Kucco", 1, 10, 10, 20, 20},
    {NULL, 0, 0, 0, 0, 0}
  };

t_soldat	*get_soldat()
{
  int		rnd;
  t_soldat	*soldat;

  rnd = rand() % NBCREA;
  if ((soldat = malloc(sizeof(t_soldat))) == NULL)
    return (NULL);
  soldat->name = strdup(g_soldats[rnd].name);
  if (!soldat->name)
    return (NULL);
  soldat->lvl = g_soldats[rnd].lvl;
  soldat->pv = g_soldats[rnd].pv;
  soldat->pvmax = g_soldats[rnd].pvmax;
  soldat->pm = g_soldats[rnd].pm;
  soldat->pmmax = g_soldats[rnd].pmmax;
  return (soldat);
}
*/