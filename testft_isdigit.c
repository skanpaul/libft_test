#include "../libft/libft.h"
#include "libft_test.h"

#include <ctype.h>
/* ************************************************************************** */

int testft_isdigit(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		printf("ft_isdigit | number: |%c|, result: |%d vs %d| :official \n", c, 
				ft_isdigit(c), isdigit(c));
		c++;

		if(ft_isdigit(c) != isdigit(c))
		{
			printf("\n - - !!! ERROR ERROR ERROR ERROR !!! - -\n\n");
			return (1);
		}
	}

	return (0);
}