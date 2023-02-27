NAME =libft.a
CC = cc
SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
INCS	= includes/ft.h
CFLAG = -Wall -Wextra -Werror
OBJS =${SRCS:.c=.o}
LIB =ar rc
RM		= rm -f

all:${NAME}

${NAME}:${OBJS}
		${LIB} ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:fclean all