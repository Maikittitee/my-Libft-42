#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *curr;

	while (lst)
	{
		curr = lst->next;
		f(lst);
		lst = curr;
	}
}

/*
int	main()
{
	t_list *a,*b,*c;
	t_list *t;

	a->content = "a";
	b->content = "b";
	c->content = "c";

	a->next = b;
	b->next = c;
	c->next = NULL;

	while (a)
	{
		t = a->next;
		printf("%s\n",(char *)a->content);
		a = t;
	}
}
*/
