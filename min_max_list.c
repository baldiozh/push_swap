#include "push_swap.h"

int	ft_max(t_elem **head, int *arr) /* order */
{
	t_elem	*tmp_head;
	int		i;
	int		max;

	i = 0;
	tmp_head = *head;
	max = INT_MIN;
	ft_assign_order(head, arr);
	i = 0;
	while(i < ft_count_listsize(*head))
	{
		if(tmp_head->order > max)
			max = tmp_head->order;
		tmp_head = tmp_head->next;
		i++;
	}
	return (max);
}
