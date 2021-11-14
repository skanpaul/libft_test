#include "libft.h"
#include "libft_test.h"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/* ************************************************************************** */
void	testft_substr(void)
{
	// char	str[] = "lorem ipsum dolor sit amet";
	char	str[] = "abcdefghijklmnopqrstuvwxya";
	char	*new;


// strsub = ft_substr(str, 7, 10)

	new = ft_substr(str, 0, 10);
	if (new == 0)
		return ;

	sk_printmem(new, 20);

	free(new);




}
