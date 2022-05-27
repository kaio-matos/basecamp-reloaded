CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = ft_display_file
SRCS = main.c
OBJS = ${SRCS:.c=.o}
RM = rm -f

all: ${NAME}

${NAME}: ${OBJS}
	gcc -o ${NAME} ${OBJS}

%.o : %.c
	${CC} ${CFLAGS} -c $< -I ./includes

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all
