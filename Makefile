CC 		=	cc

CFLAGS	=	-Wall -Werror -Wextra

RM 		=	rm -rf

NAME	=	push_swap

SRCS	=	./array.c\
				./atoll.c\
				./call.c\
				./error.c\
				./input.c\
				./percentile.c\
				./push_max.c\
				./push_swap.c\
				./push.c\
				./rotate.c\
				./rrotate.c\
				./sort3.c\
				./sort5.c\
				./stack.c\
				./swap.c\

OBJS 	=	${SRCS:.c=.o}

.c.o:
		${CC} ${CFLAGS} -c $< -o $(<:.c=.o)

${NAME}:	$(OBJS)
				$(CC) $(FLAGS) $(OBJS) -o $(NAME) -L

all:		${NAME}

clean:		
				${RM} $(OBJS)

fclean:		clean
				${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean c.o re