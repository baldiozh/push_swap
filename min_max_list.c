#include "push_swap.h"

int	ft_finding_min(t_elem **head)
{
	t_elem	*tmp_head;
	int		arr[500];
	int		i;
	int		min;

	i = 0;
	tmp_head = *head;
	min = INT_MAX;
	while (tmp_head->next)
	{
		arr[i] = tmp_head->value;
		tmp_head = tmp_head->next;
		i++;
	}
	arr[i] = tmp_head->value;
	i = 0;
	while(i < ft_count_listsize(*head))
	{
		if(arr[i] < min)
			min = arr[i];
		i++;
	}
	return (min);
}

int	ft_max(t_elem **head, int *arr) //order
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
	// printf("max = %d\n", max);
	return (max);
}