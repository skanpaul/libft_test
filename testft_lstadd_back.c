#include "libft.h"
#include "libft_test.h"

/* ************************************************************************** */
void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *ptr;

	ptr = *alst;
	
	
	if ((!alst) || (!new))
		return ;

	if (ptr == NULL)
		ptr = new;

	while ((ptr->next) != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	// new->next = NULL;	
}

/* ************************************************************************** */
void	testft_lstadd_back(void)
{
	t_list	*l1; 
	t_list	*l2; 
	t_list	*new;

	l1 =  NULL;
	l2 =  NULL;
	// ft_lstadd_back(&l, ft_lstnew((void*)1));
	new = ft_lstnew((void*)1);	
	ft_lstadd_back(&l1, new);
	// 1 check(l->content == (void*)1);
	// 2 check(l->next == 0);

	// ft_lstadd_back(&l, ft_lstnew((void*)2));
	new = ft_lstnew((void*)2);	
	ft_lstadd_back(&l1, new);
	// 3 check(l->content == (void*)1);
	// 4 check(l->next->content == (void*)2);
	// 5 check(l->next->next == 0);

	// ft_lstadd_back(&l2, ft_lstnew((void*)3));
	new = ft_lstnew((void*)3);	
	ft_lstadd_back(&l2, new);
	// ft_lstadd_back(&l2, ft_lstnew((void*)4));
	new = ft_lstnew((void*)4); 	
	ft_lstadd_back(&l2, new);	
	// ft_lstadd_back(&l, l2);
	ft_lstadd_back(&l1, l2);

	// 6 check(l->content == (void*)1);
	// 7 check(l->next->content == (void*)2);


}

/* ************************************************************************** */

	// t_list * l =  NULL; 
	// t_list * l2 =  NULL; 
	// ft_lstadd_back(&l, ft_lstnew((void*)1));
	// 1 check(l->content == (void*)1);
	// 2 check(l->next == 0);

	// ft_lstadd_back(&l, ft_lstnew((void*)2));
	// 3 check(l->content == (void*)1);
	// 4 check(l->next->content == (void*)2);
	// 5 check(l->next->next == 0);

	// ft_lstadd_back(&l2, ft_lstnew((void*)3));
	// ft_lstadd_back(&l2, ft_lstnew((void*)4));
	// ft_lstadd_back(&l, l2);
	// 6 check(l->content == (void*)1);
	// 7 check(l->next->content == (void*)2);
	// 8 check(l->next->next->content == (void*)3);
	// 9 check(l->next->next->next->content == (void*)4);
	// 10 check(l->next->next->next->next == 0);
	// freeList(l); showLeaks();
