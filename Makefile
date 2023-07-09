NAME = push_swap

CC = cc

W = -Wall -Werror -Wextra

LIB = libft/libft.a

# FLAG = -fsanitize=address

SRCS = srcs/main.c srcs/check/check.c srcs/instructions/push_to.c srcs/instructions/reverse_rotate.c \
srcs/instructions/rotate.c srcs/instructions/swap.c srcs/sort/ft_sort.c

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
