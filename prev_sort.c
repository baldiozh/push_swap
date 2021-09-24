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
	else
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

static void	ft_swap(int	*a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_prev_sort(int argc, char **argv)
{
	int		i;
	int		*arr;
	int		j;
	int		tmp;

	i = 0;
	j = 1;
	arr = malloc(sizeof(int) * (argc - 1));
	while(j < argc)
	{
		arr[i] = ft_atoi(argv[j]);
		i++;
		j++;
	}
	i = 0;
	while(i != argc - 1)
	{
		j = 0;
		while (j != argc - 2)
		{
			if (arr[j] > arr[j + 1])
				ft_swap(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
	i = 0;
	while (i != argc - 1)
		printf("%d ", arr[i++]);
	printf("\n");
}