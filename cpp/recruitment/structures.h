/*
** structures.h for structures.h in /home/missonl/script/fdi-devc/battle_for_azeroth/misson_l/recruitment
** 
** Made by MISSON-SUDRE Lucas
** Login   <misson_l@etna-alternance.net>
** 
** Started on  Fri Oct  7 09:33:57 2016 MISSON-SUDRE Lucas
** Last update Fri Oct  7 21:07:15 2016 MISSON-SUDRE Lucas
*/

typedef struct		s_personnage
{
  char			*name;
  char			**army;
}			t_personnage;

typedef struct		s_ssize
{
  char			*name;
  
  struct s_list		*next;
}			t_ssize;

typedef struct		s_list
{
  char			*data;
  struct s_list		*next;
}			t_list;

typedef struct		 s_soldat
{
  char			*name;
  int			lvl;
  int			pv;
  int			pvmax;
  int			pm;
  int			pmmax;
  struct s_soldat	*next;
}			t_soldat;
