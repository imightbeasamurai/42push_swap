NAME = push_swap

CC = cc

W = -Wall -Werror -Wextra

LIB = libft/libft.a

# FLAG = -fsanitize=address

SRCS = srcs/main.c srcs/check.c srcs/push_to.c srcs/reverse_rotate.c srcs/rotate.c srcs/swap.c

OBJS = $(SRCS:.c=.o)

HEADER = -I includes/

all	: $(NAME)

$(NAME): $(OBJS)
	@make -C libft
	@${CC} ${W} ${FLAG} ${OBJS} ${LIB} -o ${NAME}

%.o : %.c ${HEADER}
	@${CC} ${W} -c $< -o $@

clean : 
	@make clean -C libft
	@${RM} ${OBJS}

fclean : clean
	@make fclean -C libft
	@${RM} ${NAME}

re : fclean all

.SILENT: all clean fclean ${OBJS} ${NAME}
