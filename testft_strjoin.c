#include "libft.h"
#include "libft_test.h"

void testft_strjoin(void)
{

	char *new;

	new = ft_strjoin("tripouille", "42");
	if (new == 0)
		return ;
	free(new);

}

	// char * s = ft_strjoin("tripouille", "42");
	// 1 check(!strcmp(s, "tripouille42"));

	// 2 mcheck(s, strlen("tripouille") + strlen("42") + 1); free(s); showLeaks();

	// s = ft_strjoin("", "42");
	// 3 check(!strcmp(s, "42"));

	// 4 mcheck(s, strlen("") + strlen("42") + 1); free(s); showLeaks();

	// s = ft_strjoin("42", "");
	// 5 check(!strcmp(s, "42"));

	// 6 mcheck(s, strlen("42") + strlen("") + 1); free(s); showLeaks();

	// s = ft_strjoin("", "");
	// 7 check(!strcmp(s, ""));

	// 8 mcheck(s, strlen("") + strlen("") + 1); free(s); showLeaks();