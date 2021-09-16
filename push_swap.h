#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <fcntl.h>
# include <limits.h>
# include <stdlib.h>

# include <stdio.h>  /////

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
void	ft_putnbr(int n);

int		ft_catching_errors(int argc, char **argv);
int		ft_checking_if_doubles(char **argv);
int		ft_checking_if_digits(char **argv);
int		ft_checking_if_sorted(char **argv);

int		ft_count_listsize(t_elem *head);
void	remove_last_elem(t_elem **head);


t_elem	*create(int value);
t_elem	*add_elem_start(int value, t_elem *head);
void	add_elem_end(int value, t_elem *head);

void	swap(t_elem **head);
void	sa(t_elem **datum_a);
void	sb(t_elem **datum_b);
void	ss(t_elem **datum_a, t_elem **datum_b);

void	push(t_elem **src, t_elem **dest);
void	pa(t_elem **datum_a, t_elem **datum_b);
void	pb(t_elem **datum_a, t_elem **datum_b);

void	rotate(t_elem **head);
void	ra(t_elem **datum_a);
void	rb(t_elem **datum_b);
void	rr(t_elem **datum_a, t_elem **datum_b);

void	reverse_rotate(t_elem **head);
void	rra(t_elem **datum_a);
void	rrb(t_elem **datum_b);
void	rrr(t_elem **datum_a, t_elem **datum_b);

#endif