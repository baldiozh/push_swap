#include "push_swap.h"

void	sorting_three_elems(t_elem **head)
{
	t_elem	*top;
	t_elem	*mid;
	t_elem	*bot;

	top = (*head);
	mid = (*head)->next;
	bot = (*head)->next->next;
	/* case 2-1-3 */
	if(top->value > mid->value && bot->value > mid->value && bot->value > top->value)
		sa(head);
	/* case 3-2-1 */
	if(top->value > mid->value && top->value > bot->value && mid->value > bot->value)
	{
		sa(head);
		rra(head);
	}
	/* case 3-1-2 */
	if(top->value > mid->value && bot->value > mid->value && top->value > bot->value)
		ra(head);
	/* case 1-3-2 */
	if(top->value < mid->value && top->value < bot->value && mid->value > bot->value)
	{
		sa(head);
		ra(head);
	}
	/* case 2-3-1 */
	if(top->value < mid->value && top->value > bot->value && mid->value > bot->value)
		rra(head);
}