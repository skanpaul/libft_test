#include "libft.h"
#include "libft_test.h"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/* ************************************************************************** */
void	testft_substr(void)
{
	char *new;

	new = ft_substr("tripouille", 0, 42000);
	// /* 1 */ check(!strcmp(s, "tripouille"));
	// /* 2 */ mcheck(s, strlen("tripouille") + 1); free(s); showLeaks();
	

	free(new);

}
