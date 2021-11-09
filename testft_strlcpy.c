#include "libft.h"
#include "libft_test.h"

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* ************************************************************************** */
static void skan_error (char *dest_o, char *dest_p, const char *src, size_t dstsize);
/* ************************************************************************** */

void testft_strlcpy(void)
{
	size_t	dstsize;	
	char	src[20];
	char	dest_o[20]; 
	char	dest_p[20]; 
	
	strcpy(src, "coucou"); 		dstsize = 0; 		skan_error(dest_o, dest_p, src, dstsize);
	strcpy(src, "coucou"); 		dstsize = 1; 		skan_error(dest_o, dest_p, src, dstsize);

	/* 3  ft_strlcpy(dest, src, 2) 	== strlen(src) 	&& dest[0] == 'c' 			&& dest[1] == 0  						&& dest[2] == 'A' */
	strcpy(src, "coucou"); 		dstsize = 2; 		skan_error(dest_o, dest_p, src, dstsize);

	/* 4  ft_strlcpy(dest, src, -1) == strlen(src) 	&& !strcmp(src, dest) 		&& 	dest[strlen(src) + 1] == 'A' */
	strcpy(src, "coucou"); 		dstsize = -1; 		skan_error(dest_o, dest_p, src, dstsize);


	strcpy(src, "coucou"); 		dstsize = 6; 		skan_error(dest_o, dest_p, src, dstsize);
	strcpy(src, "coucou"); 		dstsize = 7; 		skan_error(dest_o, dest_p, src, dstsize);
	strcpy(src, "coucou"); 		dstsize = 8; 		skan_error(dest_o, dest_p, src, dstsize);
	strcpy(src, ""); 			dstsize = 42; 		skan_error(dest_o, dest_p, src, dstsize);
	strcpy(src, "1"); 			dstsize = 0; 		skan_error(dest_o, dest_p, src, dstsize);

}

/* ************************************************************************** */
static void skan_error (char *dest_o, char *dest_p, const char *src, size_t dstsize)
{
	memset(dest_o, 'A', 10);
	memset(dest_p, 'A', 10);
	printf("OFFICIAL | dstsize: %zu | source: %s | dest_o: %s | retour_o: %zu\n", dstsize, src, dest_o, strlcpy(dest_o, src, dstsize));
	printf("PERSO    | dstsize: %zu | source: %s | dest_p: %s | retour_p: %zu\n\n", dstsize, src, dest_p, ft_strlcpy(dest_p, src, dstsize));

	if (	(strlcpy(dest_o, src, dstsize) != ft_strlcpy(dest_p, src, dstsize))
			| (strcmp(dest_o, dest_p) != 0 )    )
	{
		printf("------------ !!! !!! ERROR ERROR ERROR ERROR !!! !!! ------------\n");
		exit(1);
	}

}

/* ************************************************************************** */


	/* 1  ft_strlcpy(dest, src, 0) 	== strlen(src) 	&& dest[0] == 'A' */
	/* 2  ft_strlcpy(dest, src, 1) 	== strlen(src) 	&& dest[0] == 0 			&& dest[1] == 'A' */
	/* 3  ft_strlcpy(dest, src, 2) 	== strlen(src) 	&& dest[0] == 'c' 			&& dest[1] == 0  						&& dest[2] == 'A' */
	/* 4  ft_strlcpy(dest, src, -1) == strlen(src) 	&& !strcmp(src, dest) 		&& 	dest[strlen(src) + 1] == 'A' */
	/* 5  ft_strlcpy(dest, src, 6) 	== strlen(src) 	&& !memcmp(src, dest, 5) 	&& dest[5] == 0 */
	/* 6  ft_strlcpy(dest, src, 7) 	== strlen(src) 	&& !memcmp(src, dest, 7) */
	/* 7  ft_strlcpy(dest, src, 8) 	== strlen(src) 	&& !memcmp(src, dest, 7) */
	/* 8  ft_strlcpy(dest, "", 42) 	== 0 			&& !memcmp("", dest, 1) */
	/* 9  ft_strlcpy(dest, "1", 0) 	== 1 			&& dest[0] == 0 */
