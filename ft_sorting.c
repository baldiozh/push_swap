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

static void	ft_move_baby(t_elem **datum_a, t_elem **datum_b, int argc)
{
	int	max;
	int i;
	int	size;

	size = ft_count_listsize(*datum_b);
	int	args = (argc - 1)/2;
	// printf("args = %d\n", args);
	while (size > 0)
	{
		max = ft_finding_max(datum_b);
		i = ft_search_elemsplace(datum_b, max);
		if(i <= 10 && (*datum_b)->order != max)
			rb(datum_b);
		else if (i > 10 && (*datum_b)->order != max)
			rrb(datum_b);
		else if ((*datum_b)->order == max)
		{
			pa(datum_a, datum_b);
			size--;
		}
	}
}

void	ft_sorting(t_elem **datum_a, t_elem **datum_b, int *arr, int argc)
{
	t_elem	*tmp_head;
	int		i;
	int		size;


	i = 0;
	size = ft_count_listsize(*datum_a);
	printf("size = %d\n", size);
	tmp_head = *datum_a;
	ft_assign_order(datum_a, arr); // ПРИСВАИВАЕМ КАЖ-МУ ЭЛ-ТУ СТЕКА ИНДЕКС исп-я отсорт-ый массив
	i = 0;
	while(i < size)
	{
		if((*datum_a)->order <= i && i > 1)
		{
			pb(datum_a, datum_b);
			rb(datum_b);
			i++;
		}
		else if ((*datum_a)->order <= (i + 15))
		{
			pb(datum_a, datum_b);
			i++;
		}
		else if((*datum_a)->order >= i)
			ra(datum_a);
	}
	ft_move_baby(datum_a, datum_b, argc);

	tmp_head = *datum_a;
	while(tmp_head->next) // ПРОВЕРКА НА ОТСОРТИРОВАННОСТЬ
	{
		if (tmp_head->value > tmp_head->next->value)
		{
			ft_putstr_fd("NOT SORTED\n", 1);
			break ;
		}
		tmp_head = tmp_head->next;
	}
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