#include "push_swap.h"

void	ft_assign_order(t_elem **head, int *arr)
{
	t_elem	*tmp_head;
	int		i;
	int		size;

	i = 0;
	size = ft_count_listsize(*head);
	tmp_head = *head;
	while (tmp_head)
	{
		i = 0;
		while (i < size)
		{
			if (tmp_head->value == arr[i])
			{
				tmp_head->order = i;
				break ;
			}
			i++;
		}
		tmp_head = tmp_head->next;
	}
}

int	ft_max(t_elem **head, int *arr)
{
	t_elem	*tmp_head;
	int		i;
	int		max;

	i = 0;
	tmp_head = *head;
	max = INT_MIN;
	ft_assign_order(head, arr);
	i = 0;
	while (i < ft_count_listsize(*head))
	{
		if (tmp_head->order > max)
			max = tmp_head->order;
		tmp_head = tmp_head->next;
		i++;
	}
	return (max);
}
