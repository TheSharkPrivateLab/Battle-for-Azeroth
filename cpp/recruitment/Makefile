NAME	=	sulfuras

SRC	=	libmy.a			\
		main.c			\
		proto.h			\
		strutures.h		\
		intro.c			\
		recruitment.c		\
		name_char_intro.c	\
		fakeclear.c		\
		wait_for_enter.c	\
		readline.c		\
		recruit.c		\
		get_soldat.c		\
		fail_recruit.c		\
		display_soldat.c	\
		txt_firstrecruitment.c	\
		txt_nextrecruitment.c	\
		txt_recruit_attempt.c	\
		txt_introintro.c

CC	=	gcc

FLAGS	=	-Wall -Wextra -Werror

RE	=	rm -rf

OBJ     =       $(SRC:.c=.o)

$(NAME)	:	$(OBJ)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

ALL	:	$(NAME)

clean   :
		$(RM) $(OBJ)

fclean  :       clean
		$(RM) $(NAME)

re      :       fclean all

.PHONY  :       fclean all re
