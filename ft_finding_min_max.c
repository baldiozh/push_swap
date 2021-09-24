#include "push_swap.h"

int	ft_finding_min_max(int *arr, int mode)
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
