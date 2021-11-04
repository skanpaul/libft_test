#include "libft.h"
#include "libft_test.h"

#include <ctype.h>
/* ************************************************************************** */

int testft_isascii(void)
{
	int i;

	i = 0;
	while (i <= 255)
	{
		printf("ft_isascii | i:|%d|char:|%c|, result: |%d vs %d| :official \n", i, i, 
				ft_isascii(i), isascii(i));
		i++;

		if(ft_isascii(i) != isascii(i))
		{
			printf("\n - - !!! ERROR ERROR ERROR ERROR !!! - -\n\n");
			return (1);
		}
	}

	return (0);
}
