/*
** proto.h for proto.h in /home/missonl/script/fdi-devc/battle_for_azeroth/misson_l/testrecuitment
** 
** Made by MISSON-SUDRE Lucas
** Login   <misson_l@etna-alternance.net>
** 
** Started on  Fri Oct  7 11:55:33 2016 MISSON-SUDRE Lucas
** Last update Sat Oct  8 11:45:49 2016 MISSON-SUDRE Lucas
*/

void		my_putstr(char *c);
int		recr_cmp(char *str);
char		*readline();
int		wait_for_enter();
void		fakeclear();
int		my_strcmp(char *s1, char *s2);
void		my_putchar(char c);
int		intro();
int		recruitment();
int		intro_cmp(char *str);
int		name_char_intro(int ac, char *av[]);
char		*my_strcpy(char *dest, char *src);
int		my_strlen(char *str);
void		my_put_nbr(int n);
void		fail_recruit();
int		txt_firstrecruitment();
int		txt_intro();
int		txt_nextrecruitment();
int		txt_leave();
int		txt_recruit_attempt();
int		txt_introintro();
