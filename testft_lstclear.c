#include "libft.h"
#include "libft_test.h"

/* ************************************************************************** */
void	testft_lstclear(void)
{
	t_list	a;
	t_list	b;
	t_list	c;
	char	*str_a = "le matin,";
	char	*str_b = "il fait,";
	char	*str_c = " beau";
	a.content = str_a;
	a.next = &b;	
	b.content = str_b;
	b.next = &c;
	c.content = str_c;
	c.next = NULL;





	
}