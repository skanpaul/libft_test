
#include "../libft/libft.h"
#include "libtestft.h"

#include <ctype.h>
/* ************************************************************************** */

int testft_isalpha(void)
{
	int i;

	i = 0;
	while (i <= 255)
	{
		printf("ft_isalpha | char: |%c|, result: |%d vs %d| :official \n", i, 
				ft_isalpha(i), isalpha(i));
		i++;

		if(ft_isalpha(i) != isalpha(i))
		{
			printf("!!! ERROR ERROR ERROR ERROER !!!\n");
			return (1);
		}
	}
	return (0);
}