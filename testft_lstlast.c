#include "libft.h"
#include "libft_test.h"

/* ************************************************************************** */
void	testft_lstlast(void)
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

	t_list *result;

	t_list *l = NULL;
	
	
	result = ft_lstlast(l);						// 1 check(ft_lstlast(l) == 0);

	ft_lstadd_back(&l, ft_lstnew((void*)1));	// 2 check(ft_lstlast(l)->content == (void*)1);


}


	// t_list * l =  NULL;
	// 1 check(ft_lstlast(l) == 0);
	// ft_lstadd_back(&l, ft_lstnew((void*)1));
	// 2 check(ft_lstlast(l)->content == (void*)1);
	// ft_lstadd_back(&l, ft_lstnew((void*)2));
	// 3 check(ft_lstlast(l)->content == (void*)2);
	// 4 check(ft_lstlast(l)->next == 0);