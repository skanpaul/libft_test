
#include "../libft/libft.h"
#include "libft_test.h"

#include <ctype.h>
/* ************************************************************************** */



int testft_isalnum(void)
{
	int i;

	i = 0;
	while (i <= 255)
	{
		printf("ft_isalnum | char: |%c|, result: |%d vs %d| :official \n", i, 
				ft_isalnum(i), isalnum(i));
		i++;

		if(ft_isalnum(i) != isalnum(i))
		{
			printf("!!! ERROR ERROR ERROR ERROER !!!\n");
			return (1);
		}
	}
	return (0);
}
