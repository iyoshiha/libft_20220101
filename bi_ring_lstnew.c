#include "libft.h"

t_bi_list	*bi_ring_lst_init_nil(unsigned int val)
{
	t_bi_list *nil;

	nil = malloc(sizeof(t_bi_list));
	if (!nil)
		return (NULL);
	nil->next = nil;
	nil->prev = nil;
	nil->value = val;
	nil->is_nil = 1;
	return (nil);
}

t_bi_list	*bi_ring_lstnew(unsigned int value)
{
	t_bi_list *new_element;

	new_element = malloc(sizeof(t_bi_list));
	if (!new_element)
		return (NULL);
	new_element->value = value;
	new_element->next = NULL;
	new_element->prev = NULL;
	new_element->is_nil = 0;
	return (new_element);
}
