#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <fcntl.h>
# include <limits.h>
# include <stdlib.h>

# include <stdio.h>  //////////

typedef struct s_elem
{
	int	value;
	int	order;
	struct s_elem *next;
}	t_elem;

/* libft */
char	**ft_split(char const *s, char c);
void	ft_putstr_fd(char *s, int fd);
int		ft_atoi(const char *str);
int		ft_isalpha(int ch);
int		ft_isdigit(int ch);
void	ft_putnbr(int n);
size_t	ft_strlen(const char *str);		//--------------------- !!!

/* errors */
int		ft_catching_errors(int argc, char **argv);
int		ft_checking_if_doubles(char **argv);
int		ft_checking_if_digits(char **argv);
int		ft_checking_if_sorted(char **argv);

/* initializations */
t_elem	*create(int value);
t_elem	*add_elem_start(int value, t_elem *head);
void	add_elem_end(int value, t_elem *head);

/* swap */
void	swap(t_elem **head);
void	sa(t_elem **datum_a);
void	sb(t_elem **datum_b);
void	ss(t_elem **datum_a, t_elem **datum_b);

/* push */
void	push(t_elem **src, t_elem **dest);
void	pa(t_elem **datum_a, t_elem **datum_b);
void	pb(t_elem **datum_a, t_elem **datum_b);

/* rotate */
void	rotate(t_elem **head);
void	ra(t_elem **datum_a);
void	rb(t_elem **datum_b);
void	rr(t_elem **datum_a, t_elem **datum_b);

/* reverse rotate */
void	reverse_rotate(t_elem **head);
void	rra(t_elem **datum_a);
void	rrb(t_elem **datum_b);
void	rrr(t_elem **datum_a, t_elem **datum_b);

/* --------------------- */

/* list utils */
void	remove_last_elem(t_elem **head);
int		ft_count_listsize(t_elem *head);

int		ft_finding_min(t_elem **head);
int		ft_finding_max(t_elem **head);
int		ft_search_elems_place(t_elem **head, int min);

/* sorting */
void	*ft_prev_sort(int argc, char **argv);

void	ft_sorting(t_elem **datum_a, t_elem **datum_b, int *arr);

void	ft_sorting_three_elems(t_elem **head);
void	ft_sorting_five_elems(t_elem **datum_a, t_elem **datum_b);
void	ft_sorting_hundred(t_elem **datum_a, t_elem **datum_b);

int	ft_finding_min_max(int *arr, int mode); /////

#endif