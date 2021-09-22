#include "push_swap.h"

static void	ft_move_baby(t_elem **head, int i)
{
	if(i <= 50)
	{
		while (i > 0)
		{
			ra(head);
			i--;
		}
	}
	else
	{
		printf("else i = %d\n", i);
		while (i < 100)
		{
			rra(head);
			i++;
		}
	}
}

void	ft_sorting_hundred(t_elem **datum_a, t_elem **datum_b)
{
	int	i;
	int	j;
	int	min;

	j = 0;
	while(j < 5)
	{
		min = ft_finding_min(datum_a);
		printf("min = %d\n", min);
		i = ft_search_elems_place(datum_a, min);
		printf("i = %d\n", i);
		ft_move_baby(datum_a, i);
		pb(datum_a, datum_b);
		j++;
	}
	

	
}