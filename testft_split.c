#include "libft.h"
#include "libft_test.h"

/* ************************************************************************** */
static void sk_free_stringarray(char **strarray);

/* ************************************************************************** */
void testft_split(void)
{
	char **str_array;
	char delimiter;
	char *s = "   le matin il fait beau   ";

	delimiter = ' ';
	str_array = NULL;

	str_array = ft_split(s, delimiter);

	if (!str_array)
	{
		printf("!!! AUCUN TABLEAU DE STRING EN RETOUR !!!\n");
		return ;
	}

	printf("\n");
	sk_free_stringarray(str_array);
}

/* ************************************************************************** */
static void sk_free_stringarray(char **strarray)
{
	size_t i;

	i = 0;
	while (strarray[i] != NULL)
	{
		free(strarray[i]);
		i++;
	}
}
