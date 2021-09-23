#include "push_swap.h"

static int	ft_find_min_max(int *arr, int mode)
{
	int	i;
	int	res;

	i = 0;
	if(mode == -1)
	{
		res = INT_MAX;
		while(arr[i])
		{
			if (res > arr[i])
				res = arr[i];
			i++;
		}
		return (res);
	}
	if(mode == 1)
	{
		res = INT_MAX;
		while (arr[i])
		{
			if(res < arr[i])
				res = arr[i];
			i++;
		}
		return (res);
	}
	return (0);
}

static void	ft_swap(int	a, int b)
{
	int *tmp;

	tmp = a;
	a = b;
	b = tmp;
	free(tmp);
}

void	ft_prev_sort(int argc, char **argv)
{
	int		i;
	int		*arr;
	int		min;
	int		max;

	i = 0;
	while(i < argc)
	{
		arr[i] = argv[1 + i];
		i++;
	}
	arr[i] = '\0';
	min = ft_find_min_max(arr, -1);
	max = ft_find_min_max(arr, 1);
	i = 0;
	while(i < argc)
	{
		if (arr[i] > min)

	}


	
}