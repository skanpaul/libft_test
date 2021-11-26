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


	t_list *l = lstnew(strdup(" 1 2 3 "));

	t_list *ret;

	l->next = lstnew(strdup("ss"));

	l->next->next = lstnew(strdup("-_-"));
	
	ret = ft_lstmap(l, lstmap_f, ((void *)0));




}

//	[crash]: your lstmap does not work with basic input
//	Test code:
// 
// 	t_list *l = lstnew(strdup(" 1 2 3 "));
// 	t_list *ret;
// 	l->next = lstnew(strdup("ss"));
// 	l->next->next = lstnew(strdup("-_-"));
// 	ret = ft_lstmap(l, lstmap_f, ((void *)0));
// 
// 	if 	(		
//			!strcmp(ret->content, "OK !") 
//		&& 	!strcmp(ret->next->content, "OK !") 
//		&& 	!strcmp(ret->next->next->content, "OK !") 
//		&& 	!strcmp(l->content, " 1 2 3 ") 
//		&& 	!strcmp(l->next->content, "ss") 
//		&& 	!strcmp(l->next->next->content, "-_-")
//		)
// 		exit(TEST_SUCCESS);
// 	exit(TEST_FAILED);