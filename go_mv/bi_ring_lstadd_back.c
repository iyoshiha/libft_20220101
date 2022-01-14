#include "libft.h"

void bi_ring_lstadd_back(t_bi_list *nil, t_bi_list *new)
{
	t_bi_list	*btm;

	btm = nil->prev;
	new->next = nil;
	new->next->prev = new;
	new->prev = btm;
	btm->next = new;
}
