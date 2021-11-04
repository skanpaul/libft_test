#include "../libft/libft.h"
#include "libft_test.h"

#include <ctype.h>

/* ************************************************************************** */

int testft_isprint(void)
{
	int i;

	i = 0;
	while (i <= 300)
	{
		printf("ft_isprint | i:|%d|char:|%c|, result: |%d vs %d| :official \n", i, i, 
				ft_isprint(i), isprint(i));
		i++;

		if(ft_isprint(i) != isprint(i))
		{
			printf("\n - - !!! ERROR ERROR ERROR ERROR !!! - -\n\n");
			return (1);
		}
	}

	return (0);
}
