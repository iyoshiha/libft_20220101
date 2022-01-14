#include "libft.h"

void bi_ring_lstiter(t_bi_list *lst, void (*f)(void *))
{
	if (f || lst)
	{
		lst = lst->next;
		while (lst->is_nil != IS_NIL)
		{
			f(lst);
			lst = lst->next;
		}
	}
}
