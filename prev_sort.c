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

static void	ft_swap(int	a, int b)
{
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}

void	ft_prev_sort(int argc, char **argv)
{
	int		i;
	int		arr[500];
	int		j;
	int		tmp;
	// int		min;
	// int		max;

	i = 0;
	j = 1;
	while(j < argc)
	{
		arr[i] = ft_atoi(argv[j]);
		i++;
		j++;
	}
	printf("i = %d\n", i);
	arr[++i] = '\0';
	printf("i = %d\n", i);
	// printf("%d\n", ft_atoi(argv[++j]));
	// min = ft_find_min_max(arr, -1);
	// max = ft_find_min_max(arr, 1);
	i--;
	printf("i = %d\n", i);
	while(i > 0)
	{
		if (arr[i] < arr[i - 1])
		{
			tmp = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = tmp;
		}
		i--;
	}
	i = 0;
	while(arr[i])
	{
		printf("%d\n", arr[i]);
		i++;
	}

}