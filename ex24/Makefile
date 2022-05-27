CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJS = ${SRCS:.c=.o}
RM = rm -f

all: ${NAME}

${NAME}: ${OBJS}
	ar -rcs $@ ${OBJS} 

%.o : srcs/%.c
	${CC} ${CFLAGS} -c $< -I ./includes

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all
