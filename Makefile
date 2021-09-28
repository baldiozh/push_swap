NAME	= push_swap.a
SRC		= push_swap.c \
		ft_atoi.c ft_putstr_fd.c ft_putnbr.c ft_isdigit.c \
		ft_catching_errors.c prev_sort.c ft_list_moves.c \
		push.c swap.c rotate.c reverse_rotate.c \
		ft_count_listsize.c print_list.c \
		ft_sorting_3.c ft_sorting_4_5.c ft_sorting_100.c ft_sorting_500.c \
		free_list.c
OBJ		=	${SRC:.c=.o}
FLAGS	=	-Wall -Werror -Wextra 
HEADER	=	push_swap.h

all:		$(NAME)

$(NAME):	$(OBJ) $(HEADER)
			gcc $(FLAGS) $(OBJ) -o $(NAME);
clean:
			rm -rf ${OBJ}

fclean: 	clean
			rm -rf ${NAME} 

re: 		fclean all

.PHONY: 	all clean fclean re