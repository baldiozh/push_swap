#include "push_swap.h"

void	ft_sorting_three_elems(t_elem **head)
{
	int	top;
	int	mid;
	int	bot;

	top = (*head)->value;
	mid = (*head)->next->value;
	bot = (*head)->next->next->value;
	/* case 2-1-3 */
	if(top > mid && bot > mid && bot > top)
		sa(head);
	/* case 3-2-1 */
	else if(top > mid && top > bot && mid > bot)
	{
		sa(head);
		rra(head);
	}
	/* case 3-1-2 */
	else if(top > mid && bot > mid && top > bot)
		ra(head);
	/* case 1-3-2 */
	else if(top < mid && top < bot && mid > bot)
	{
		sa(head);
		ra(head);
	}
	/* case 2-3-1 */
	else if(top < mid && top > bot && mid > bot)
		rra(head);
}

void	ft_sorting_five_elems(t_elem **datum_a, t_elem **datum_b)
{
	// int		max;
	int		min;
	t_elem	*tmp_head;
	int		i;

	min = ft_finding_min(datum_a);
	// max = ft_finding_max(datum_a);
	tmp_head = *datum_a;
	while(tmp_head->next)
	{
		if (tmp_head->value == min)
		{
			break ;
		}
		tmp_head = tmp_head->next;
		i++;
	}
	if(i < 3)
	{
		while (i > 0)
		{
			ra(datum_a);
			i--;
		}
		pb(datum_a, datum_b);
	}
	else
	{
		while (i > 3)
		{
			rra(datum_a);
			i--;
		}
	}
	min = ft_finding_min(datum_a);
	free(tmp_head);
	tmp_head = *datum_a;


	// if ((*datum_a)->value == min)
	// 	pb(datum_a, datum_b);
	// else if ((*datum_a)->value == max)
	// 	ra(datum_a);
	// pb(datum_a, datum_b);
	// ft_sorting_three_elems(datum_a);
	// pa(datum_a, datum_b);
	// pa(datum_a, datum_b);
}