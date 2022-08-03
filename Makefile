CC 		=	cc

CFLAGS	=	-Wall -Werror -Wextra

RM 		=	rm -rf

NAME	=	push_swap

INC		=	push_swap.h

SRCS	=	./array.c\
				./call.c\
				./error.c\
				./input.c\
				./is_sorted.c\
				./libft_utils.c\
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
				$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all:		${NAME}

clean:		
				${RM} $(OBJS)

fclean:		clean
				${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean c.o re