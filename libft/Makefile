SRCS =  ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isprint.c ft_itoa.c \
 ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstlast.c ft_lstnew.c ft_lstsize.c \
 ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_panic.c ft_putchar_fd.c ft_putendl_fd.c \
 ft_putnbr_fd.c ft_putstr_fd.c ft_putstr.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
 ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
 ft_substr.c ft_tolower.c ft_toupper.c is_digit.c is_sign.c is_space.c 

CC = cc

FLAGS = -Wall -Wextra -Werror -c

OBJS = ${SRCS:.c=.o}

NAME = libft.a

RM = rm -f

%.o : %.c libft.h
	${CC} ${FLAGS} $< -o $@

${NAME} : ${OBJS}
	ar -rc $@ ${OBJS}

all : ${NAME}
	@echo "\033[1;32mlibft.a created\033[0m"
clean :
	${RM} ${OBJS}
	@echo "\033[1;32mlibft objects deleted\033[0m"
fclean : clean
	${RM} ${NAME}
	@echo "\033[1;32mlibft.a deleted\033[0m"
re : fclean all
	@echo "\033[1;32mlibft.a re-created\033[0m"
.SILENT: all clean fclean ${OBJS} ${NAME}