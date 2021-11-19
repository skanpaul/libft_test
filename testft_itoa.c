/* ************************************************************************** */
#include "libft.h"
#include "libft_test.h"
/* ************************************************************************** */

void	testft_itoa(void)
{
	char *resultat;
	int value;

	value = 8341;

	resultat = ft_itoa(value);
	if (!resultat)
		return ;
	printf("Le string en retour est: %s", resultat);
	free (resultat);
}