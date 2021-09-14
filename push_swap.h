#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <fcntl.h>
# include <limits.h>
# include <stdlib.h>

# include <stdio.h>  ///// //// /// 

typedef struct s_elem
{
	int	value;
	struct s_elem *next;
}	t_elem;

char	**ft_split(char const *s, char c);
void	ft_putstr_fd(char *s, int fd);
int		ft_atoi(const char *str);
int		ft_isalpha(int ch);
int		ft_isdigit(int ch);

int		ft_catching_errors(int argc, char **argv);
int		ft_checking_if_doubles(char **argv);
int		ft_checking_if_digits(char **argv);
int		ft_checking_if_sorted(char **argv);

t_elem	*create(int value);
void	add_elem_start(int value, t_elem *head);
void	add_elem_end(int value, t_elem *head);

void	swap(t_elem **head);


#endif