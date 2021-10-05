NAME		= push_swap
NAME_bonus	= checker

SRC			= push_swap.c \
			ft_atoi.c ft_putstr_fd.c ft_putnbr.c ft_isdigit.c \
			ft_catching_errors.c prev_sort.c ft_list_moves.c ft_overflow.c \
			push.c swap.c rotate.c reverse_rotate.c \
			ft_count_listsize.c print_list.c remove_last_elem.c utils.c \
			ft_sorting_3.c ft_sorting_4_5.c ft_sorting_100.c ft_sorting_500.c 
SRC_bonus	= bonus/checker.c \
			bonus/ft_atoi.c bonus/ft_putstr_fd.c bonus/ft_putnbr.c bonus/ft_isdigit.c \
			bonus/ft_catching_errors.c bonus/ft_list_moves.c bonus/ft_overflow.c \
			bonus/push.c bonus/swap.c bonus/rotate.c bonus/reverse_rotate.c \
			bonus/ft_count_listsize.c bonus/remove_last_elem.c \
			bonus/gnl_utils.c bonus/get_next_line.c \
			bonus/ft_strncmp.c bonus/utils.c bonus/ft_is_stack_sorted.c

OBJ			=	${SRC:.c=.o}
OBJ_bonus	=	${SRC_bonus:.c=.o}

FLAGS		=	-Wall -Werror -Wextra

HEADER		=	push_swap.h
HDR_bonus	=	checker.h


all:		$(NAME)

$(NAME):	$(OBJ) $(HEADER)
			gcc $(FLAGS) $(OBJ) -o $(NAME)

clean:
			rm -rf ${OBJ} ${OBJ_bonus} 

fclean: 	clean
			rm -rf ${NAME} ${NAME_bonus}

re: 		fclean all

bonus:		$(OBJ_bonus) $(HDR_bonus)
			gcc $(FLAGS) $(OBJ_bonus) -o $(NAME_bonus)
			

.PHONY: 	all clean fclean re