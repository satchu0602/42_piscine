NAME 	=libft.a
CC 		= gcc
SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
INCS	= includes
CFLAGS	= -Wall -Wextra -Werror
OBJS 	=${SRCS:.c=.o}
LIBC 	=ar rc
LIBR	= ranlib
RM		= rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME}:${OBJS}
		${LIBC} ${NAME} ${OBJS}
		${LIBR} ${NAME}

all:${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:fclean all
