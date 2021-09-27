NAME	= push_swap.a
SRC		= push_swap.c ft_atoi.c ft_isalpha.c ft_putstr_fd.c
OBJ		= ${SRC:.c=.o}
FLAGS	= -Wall -Werror -Wextra
HEADER	= push_swap.h

.c.o:
		gcc $(FLAGS) -I $(HEADER) -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): ${OBJ} ${HEADER}
		ar rc ${NAME} ${OBJ}
		ranlib ${NAME}

clean:
		rm -rf ${OBJ}

fclean: clean
		rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re
