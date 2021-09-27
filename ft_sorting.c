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
			break ;
		tmp_head = tmp_head->next;
		i++;
	}
	return (i);
}

static void	ft_move_baby(t_elem **datum_a, t_elem **datum_b, int argc, int *arr)
{
	int	max;
	int i;
	int	size;
	int	arguments;

	size = ft_count_listsize(*datum_b);
	while (*datum_b)
	{
		arguments = size / 2;
		max = ft_max(datum_b, arr);
		i = ft_search_elemsplace(datum_b, max);
		if ((*datum_b)->order == max)
		{
			pa(datum_a, datum_b);
			size--;
		}
		else if(i <= arguments && (*datum_b)->order != max)
			rb(datum_b);
		else if (i > arguments && (*datum_b)->order != max)
			rrb(datum_b);
	}
}

void	ft_sorting(t_elem **datum_a, t_elem **datum_b, int *arr, int argc)
{
	t_elem	*tmp_head;
	int		i;
	int		size;


	i = 0;
	size = ft_count_listsize(*datum_a);
	ft_assign_order(datum_a, arr); // ПРИСВ-ЕМ КАЖ-МУ ЭЛ-ТУ СТЕКА ИНДЕКС исп-я отсорт-ый массив
	while(*datum_a) //i < size
	{
		if((*datum_a)->order <= i && i > 1)
		{
			pb(datum_a, datum_b);
			rb(datum_b);
			i++;
		}
		else if ((*datum_a)->order <= (i + 30)) //15
		{
			pb(datum_a, datum_b);
			i++;
		}
		else if((*datum_a)->order >= i)
			ra(datum_a);
	}
	ft_move_baby(datum_a, datum_b, argc, arr);
	/* ------------ */
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
}