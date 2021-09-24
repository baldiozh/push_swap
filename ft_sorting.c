#include "push_swap.h"

static int	ft_search_elemsplace(t_elem **head, int max)
{
	t_elem	*tmp_head;
	int		i;

	i = 0;
	tmp_head = *head;
	while(tmp_head->next)
	{
		if (tmp_head->order == max)
		{
			break ;
		}
		tmp_head = tmp_head->next;
		i++;
	}
	return (i);
}

static void	ft_move_baby(t_elem **datum_a, t_elem **datum_b)
{
	int	max;
	int i;

	while (*datum_b != NULL)
	{
		max = ft_finding_max(datum_b);
		i = ft_search_elemsplace(datum_b, max);
		if(i <= 50 && (*datum_b)->order != max)
			rb(datum_b);
		else if (i > 50 && (*datum_b)->order != max)
			rrb(datum_b);
		else if ((*datum_b)->order == max)
			pa(datum_a, datum_b);
	}
}

void	ft_sorting(t_elem **datum_a, t_elem **datum_b, int *arr)
{
	t_elem	*tmp_head;
	int		i;

	i = 0;
	tmp_head = *datum_a;
	while (tmp_head)
	{
		i = 0;
		while(arr[i])
		{
			if(tmp_head->value == arr[i])
			{
				tmp_head->order = i;
				break;
			}
			i++;
		}
		tmp_head = tmp_head->next;
	}
	i = 0;
	while((*datum_a))
	{
		if((*datum_a)->order <= (i + 15))
		{
			pb(datum_a, datum_b);
			i++;
		}
		else if ((*datum_a)->order <= i && i > 1)
		{
			pb(datum_a, datum_b);
			rb(datum_b);
			i++;
		}
		else if((*datum_a)->order >= i)
			ra(datum_a);
	}
	ft_move_baby(datum_a, datum_b);
	// write(1, "\n", 1);
	// ft_putstr_fd("A ", 1);
	// while((*datum_a)->next)
	// {
	// 	ft_putnbr((*datum_a)->order);
	// 	write(1, "-", 1);
	// 	(*datum_a) = (*datum_a)->next;
	// }
	// ft_putnbr((*datum_a)->order);
	// write(1, "\n", 1);
}