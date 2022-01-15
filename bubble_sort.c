#include "libft.h"

swap_num	bubble_sort(int *num, int n)
{
	t_sort_index	sort_i;

	sort_i.flag = 1;
	sort_i.k = 0;
	sort_i.num_swaped = 0;
	while (sort_i.flag)
	{
		sort_i.i = n - 1;
		sort_i.j = sort_i.i - 1;
		sort_i.flag = 0;
		while (sort_i.k <= sort_i.j)
		{
			if (num[sort_i.j] > num[sort_i.i])
			{
				num[sort_i.j] = num[sort_i.j] ^ num[sort_i.i];
				num[sort_i.i] = num[sort_i.j] ^ num[sort_i.i];
				num[sort_i.j] = num[sort_i.j] ^ num[sort_i.i];
				sort_i.num_swaped++;
				sort_i.flag = 1;
			}
			sort_i.i--;
			sort_i.j--;
		}
		sort_i.k++;
	}
	return (sort_i.num_swaped++);
}
