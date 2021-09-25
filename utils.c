#include "push_swap.h"

void	ft_assign_order(t_elem **head, int *arr)
{
	t_elem	*tmp_head;
	int		i;
	int		size;

	i = 0;
	size = ft_count_listsize(*head);
	tmp_head = *head;
	while (tmp_head) // ПРИСВАИВАЕМ КАЖДОМУ ЭЛЕМЕНТУ СТЕКА СВОЙ ИНДЕКС исп-я отсорт-ый массив
	{
		i = 0;
		while(i < size)
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
}