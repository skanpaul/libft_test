#include "libft.h"
#include "libft_test.h"

/* ************************************************************************** */
static void sk_free_stringarray(char **strarray);

/* ************************************************************************** */
void testft_split(void)
{
	char **str_array;
	char delimiter;
	// char *s = "   le matin il fait beau   ";
	char *s = "tripouille";

	delimiter = 0;
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

	// tab = ft_split("tripouille", 0);
	// 7 check(!strcmp(tab[0], "tripouille"));
	// 8  check(tab[1] == NULL);

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
