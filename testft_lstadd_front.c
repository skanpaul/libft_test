#include "libft.h"
#include "libft_test.h"

/* ************************************************************************** */
void	ft_print_result(t_list *elem);
t_list	*ft_lstnewone(void *content);

/* ************************************************************************** */
void	testft_lstadd_front(void)
{
	t_list		*begin;
	t_list		*elem1;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	char		*str1;
	char		*str2;
	char		*str3;
	char		*str4;
	
	str1 = ft_strdup("lorem");
	str2 = ft_strdup("ipsum");
	str3 = ft_strdup("dolor");
	str4 = ft_strdup("sit");

	elem1 = ft_lstnewone(str1);
	elem2 = ft_lstnewone(str2);
	elem3 = ft_lstnewone(str3);
	elem4 = ft_lstnewone(str4);

	begin = NULL;
	ft_lstadd_front(&begin, elem4);
	ft_lstadd_front(&begin, elem3);
	ft_lstadd_front(&begin, elem2);
	ft_lstadd_front(&begin, elem1);
	while (begin)
	{
		ft_print_result(begin);
		begin = begin->next;
	}

	free(str1);
	free(str2);
	free(str3);
	free(str4);

	free(elem1);
	free(elem2);
	free(elem3);
	free(elem4);
	
}
/* ************************************************************************** */
void	ft_print_result(t_list *elem)
{
	int		len;

	len = 0;
	while (((char *)elem->content)[len])
		len++;
	write(1, elem->content, len);
	write(1, "\n", 1);
}
/* ************************************************************************** */
t_list	*ft_lstnewone(void *content)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	if (!content)
		elem->content = NULL;
	else
		elem->content = content;
	elem->next = NULL;
	return (elem);
}
