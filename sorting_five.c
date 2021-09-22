#include "push_swap.h"

int	ft_search_place(t_elem **head, int min)
{
	t_elem	*tmp_head;
	int		i;

	i = 0;
	tmp_head = *head;
	while(tmp_head->next)
	{
		if (tmp_head->value == min)
		{
			break ;
		}
		tmp_head = tmp_head->next;
		i++;
	}
	return (i);
}

static void	ft_move_baby(t_elem **head, int i)
{
	if(i <= 3)
	{
		while (i > 0)
		{
			ra(head);
			i--;
		}
	}
	else
	{
		while ((5 - i) > 0)
		{
			rra(head);
			i++;
		}
	}
}

void	ft_sorting_five_elems(t_elem **datum_a, t_elem **datum_b)
{
	int		i;
	int		min;
	
	min = ft_finding_min(datum_a);
	i = search_place(datum_a, min);
	ft_move_baby(datum_a, i);
	pb(datum_a, datum_b);
	min = ft_finding_min(datum_a);
	i = search_place(datum_a, min);
	ft_move_baby(datum_a, i);
	pb(datum_a, datum_b);
	ft_sorting_three_elems(datum_a);
	pa(datum_a, datum_b);
	pa(datum_a, datum_b);
}