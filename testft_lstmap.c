#include "libft.h"
#include "libft_test.h"

/* ************************************************************************** */
void	freeList(t_list *head)
{
	if (head)
		freeList(head->next); 
	free(head);
}

/* ************************************************************************** */
void	*addOne(void * p)
{
	void *r = malloc(sizeof(int)); 
	*(int*)r = *(int*)p + 1; 
	return (r);
}


/* ************************************************************************** */
void	testft_lstmap(void)
{
	// t_list	a;
	// t_list	b;
	// t_list	c;
	// char	*str_a = "le matin,";
	// char	*str_b = "il fait,";
	// char	*str_c = " beau";
	// a.content = str_a;
	// a.next = &b;	
	// b.content = str_b;
	// b.next = &c;
	// c.content = str_c;
	// c.next = NULL;

	int tab[] = {0, 1, 2, 3};

	t_list * l =  ft_lstnew(tab);

	for (int i = 1; i < 4; ++i)
		ft_lstadd_back(&l, ft_lstnew(tab + i));

	t_list * m = ft_lstmap(l, addOne, free);
	t_list * tmp = l;
	
	// 1 2 3 4 
	
	for (int i = 0; i < 4; ++i)
	{
		check(*(int*)tmp->content == i);
		tmp = tmp->next;
	}
	tmp = m;
}

	// int tab[] = {0, 1, 2, 3};
	// t_list * l =  ft_lstnew(tab);
	// for (int i = 1; i < 4; ++i)
	// 	ft_lstadd_back(&l, ft_lstnew(tab + i));
	// t_list * m = ft_lstmap(l, addOne, free);
	// t_list * tmp = l;
	// 1 2 3 4 for (int i = 0; i < 4; ++i)
	// {
	// 	check(*(int*)tmp->content == i);
	// 	tmp = tmp->next;
	// }
	// tmp = m;