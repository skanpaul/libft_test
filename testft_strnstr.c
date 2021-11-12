#include "libft.h"
#include "libft_test.h"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/* ************************************************************************** */
void skan_check(const char *haystack, const char *needle, size_t len);

/* ************************************************************************** */
void	testft_strnstr(void)
{
	char haystack[30];
	char needle[30];
	size_t len;

	strcpy(haystack, "Le bouillon est froid"); strcpy(needle, "boui"); len = 20; 
	skan_check(haystack,needle,len);

}
/* ************************************************************************** */

void skan_check(const char *haystack, const char *needle, size_t len)
{
	printf("haystack: %s | needle: %s | len: %zu \n", haystack, needle, len);
	printf("*haystack: %p \n", haystack);
	printf("*needle: %p \n", needle);
	printf("retour: %p \n\n", ft_strnstr(haystack, needle, len));

}

