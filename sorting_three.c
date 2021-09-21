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