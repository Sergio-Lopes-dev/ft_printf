SRC		= ft_printf.c ft_printf_utils1.c ft_printf_utils2.c

OBJ		= ${SRC:.c=.o}

FLAG	= -Wall -Wextra -Werror -c
CC		= cc
AR		= ar rc
O		= -o
RM		= rm -f

NAME	= libftprintf.a

all:		$(NAME)

.c.o:		${SRC}
			${CC} ${FLAG} $< ${O} ${<:.c=.o}

$(NAME):	${OBJ}
			${AR} $(NAME) ${OBJ}

clean:
			${RM} ${OBJ}

fclean:		clean
			${RM} $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
