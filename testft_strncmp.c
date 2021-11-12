#include "libft.h"
#include "libft_test.h"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/* ************************************************************************** */
static void skan_check(char *text1, char *text2, size_t n);

/* ************************************************************************** */
void	testft_strncmp(void)
{
	char text1[20];
	char text2[20];
	size_t n;

// /* 4 */ check(ft_strncmp("1234", "1235", -1) < 0); showLeaks();
printf("****************************************************\n");
	strcpy (text1, "1234");
	strcpy (text2, "1235");

	printf("sizeof of size_t %zu\n", sizeof(size_t));
	printf("sizeof of int %zu\n", sizeof(int));
	printf("sizeof of long %zu\n", sizeof(long));

	n = -1; 	skan_check(text1, text2, n);	


	printf("****************************************************\n");
	strcpy (text1, "bonjour");
	strcpy (text2, "Xonjour");

	n = -1; 	skan_check(text1, text2, n);	
	n = 0; 		skan_check(text1, text2, n);	
	n = 1; 		skan_check(text1, text2, n);
	n = 2; 		skan_check(text1, text2, n);
	n = 6; 		skan_check(text1, text2, n);
	n = 7; 		skan_check(text1, text2, n);
	n = 8; 		skan_check(text1, text2, n);
	n = 15; 	skan_check(text1, text2, n);

	printf("\n****************************************************\n");
	strcpy (text1, "bonjour");
	strcpy (text2, "bXnjour");
	n = 0; skan_check(text1, text2, n);
	n = 1; skan_check(text1, text2, n);
	n = 2; skan_check(text1, text2, n);
	n = 6; skan_check(text1, text2, n);
	n = 7; skan_check(text1, text2, n);
	n = 8; skan_check(text1, text2, n);
	n = 15; skan_check(text1, text2, n);

	printf("\n****************************************************\n");
	strcpy (text1, "bonjour");
	strcpy (text2, "bonjouX");
	n = 0; skan_check(text1, text2, n);
	n = 1; skan_check(text1, text2, n);
	n = 2; skan_check(text1, text2, n);
	n = 6; skan_check(text1, text2, n);
	n = 7; skan_check(text1, text2, n);
	n = 8; skan_check(text1, text2, n);
	n = 15; skan_check(text1, text2, n);

	printf("\n****************************************************\n");
	strcpy (text1, "bonjour");
	strcpy (text2, "bonjour");
	n = 0; skan_check(text1, text2, n);
	n = 1; skan_check(text1, text2, n);
	n = 2; skan_check(text1, text2, n);
	n = 6; skan_check(text1, text2, n);
	n = 7; skan_check(text1, text2, n);
	n = 8; skan_check(text1, text2, n);
	n = 15; skan_check(text1, text2, n);

	printf("\n****************************************************\n");
	strcpy (text1, "bonjourAAA");
	strcpy (text2, "bonjour");
	n = 0; skan_check(text1, text2, n);
	n = 1; skan_check(text1, text2, n);
	n = 2; skan_check(text1, text2, n);
	n = 6; skan_check(text1, text2, n);
	n = 7; skan_check(text1, text2, n);
	n = 8; skan_check(text1, text2, n);
	n = 15; skan_check(text1, text2, n);

	printf("\n****************************************************\n");
	strcpy (text1, "bonjour");
	strcpy (text2, "bonjourBBB");
	n = 0; skan_check(text1, text2, n);
	n = 1; skan_check(text1, text2, n);
	n = 2; skan_check(text1, text2, n);
	n = 6; skan_check(text1, text2, n);
	n = 7; skan_check(text1, text2, n);
	n = 8; skan_check(text1, text2, n);
	n = 15; skan_check(text1, text2, n);

	printf("\n****************************************************\n");
	strcpy (text1, "bonjour");
	strcpy (text2, "");
	n = 0; skan_check(text1, text2, n);
	n = 1; skan_check(text1, text2, n);
	n = 2; skan_check(text1, text2, n);
	n = 6; skan_check(text1, text2, n);
	n = 7; skan_check(text1, text2, n);
	n = 8; skan_check(text1, text2, n);
	n = 15; skan_check(text1, text2, n);

}

/* ************************************************************************** */
static void skan_check(char *text1, char *text2, size_t n)
{
	printf("OFFICIAL: text1: %s | text2: %s | n: %zu | return: %d\n", text1, text2, n, strncmp(text1, text2, n));
	printf("PERSO   : text1: %s | text2: %s | n: %zu | return: %d\n", text1, text2, n, ft_strncmp(text1, text2, n));

	if (strncmp(text1, text2, n) != ft_strncmp(text1, text2, n))
	{
		printf("------------ !!! !!! ERROR ERROR ERROR ERROR !!! !!! ------------");
		exit(1);
	}

}
/* ************************************************************************** */