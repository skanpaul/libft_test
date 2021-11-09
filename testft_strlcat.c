#include "libft.h"
#include "libft_test.h"

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* ************************************************************************** */
static void skan_error (char *dst, const char *src, size_t dstsize);
/* ************************************************************************** */

void testft_strlcat(void)
{
	size_t	dstsize;	
	char	src[20];
	char	dst[20];
	
	strcpy(dst, "roi"); strcpy(src, " juliette"); dstsize = 0; skan_error(dst, src, dstsize);
	strcpy(dst, "roi"); strcpy(src, " juliette"); dstsize = 1; skan_error(dst, src, dstsize);
	strcpy(dst, "roi"); strcpy(src, " juliette"); dstsize = 2; skan_error(dst, src, dstsize);
	strcpy(dst, "roi"); strcpy(src, " juliette"); dstsize = 3; skan_error(dst, src, dstsize);
	strcpy(dst, "roi"); strcpy(src, " juliette"); dstsize = 4; skan_error(dst, src, dstsize);
	strcpy(dst, "roi"); strcpy(src, " juliette"); dstsize = 5; skan_error(dst, src, dstsize);
	strcpy(dst, "roi"); strcpy(src, " juliette"); dstsize = 6; skan_error(dst, src, dstsize);
	strcpy(dst, "roi"); strcpy(src, " juliette"); dstsize = 7; skan_error(dst, src, dstsize);
	strcpy(dst, "roi"); strcpy(src, " juliette"); dstsize = 8; skan_error(dst, src, dstsize);
	strcpy(dst, "roi"); strcpy(src, " juliette"); dstsize = 9; skan_error(dst, src, dstsize);
	strcpy(dst, "roi"); strcpy(src, " juliette"); dstsize = 10; skan_error(dst, src, dstsize);
	strcpy(dst, "roi"); strcpy(src, " juliette"); dstsize = 11; skan_error(dst, src, dstsize);
	strcpy(dst, "roi"); strcpy(src, " juliette"); dstsize = 12; skan_error(dst, src, dstsize);


}

/* ************************************************************************** */
static void skan_error (char *dst, const char *src, size_t dstsize)
{
	char	dest_o[20]; 
	char	dest_p[20]; 

	strcpy(dest_o, dst);
	strcpy(dest_p, dst);

	printf("OFFICIAL | dest_o(AVANT): [%s]\n", dest_o);
	printf("         | dest_o(APRES): [%s] | source: [%s] | dstsize: %zu | retour_o: %zu\n", dest_o, src, dstsize, strlcat(dest_o, src, dstsize));

	printf("PERSO    | dest_p(AVANT): [%s]\n", dest_p);
	printf("         | dest_p(APRES): [%s] | source: [%s] | dstsize: %zu | retour_p: %zu\n\n", dest_p, src, dstsize, ft_strlcat(dest_p, src, dstsize));
	
	/* CHECK CHECK CHECK ******************************************************** */
	strcpy(dest_o, dst);
	strcpy(dest_p, dst);	
	if (strlcat(dest_o, src, dstsize) != ft_strlcat(dest_p, src, dstsize))
	{
		printf("------------ !!! !!! RETURN VALUE NOT THE SAME !!! !!! ------------\n\n");
		exit(1);
	}
	/* CHECK CHECK CHECK ******************************************************** */
	if (strcmp(dest_o, dest_p) != 0 ) 
	{
		printf("------------ !!! !!! STRING NOT THE SAME !!! !!! ------------\n\n");
		exit(1);
	}

	/* ************************************************************************** */
}
	
	
	
	/* char dest[30]; memset(dest, 0, 30); */
	/* char * src = (char *)"AAAAAAAAA"; */	
	
	/* dest[0] = 'B'; */
	/* 1  ft_strlcat(dest, src, 0) 	== strlen(src) 		&& !strcmp(dest, "B"))			*/
	
	/* dest[0] = 'B'; */
	/* 2  ft_strlcat(dest, src, 1) 	== 10 				&& !strcmp(dest, "B"))				*/
	
	/* memset(dest, 'B', 4); */
	/* 3  ft_strlcat(dest, src, 3) 	== 3 + strlen(src) 	&& !strcmp(dest, "BBBB"))		*/
	/* 4  ft_strlcat(dest, src, 6) 	== 13 				&& !strcmp(dest, "BBBBA"))		*/
	
	/* memset(dest, 'C', 5); */
	/* 5  ft_strlcat(dest, src, -1) == 14 				&& !strcmp(dest, "CCCCCAAAAAAAAA"))*/
	
	/* memset(dest, 'C', 15); */
	/* 6  ft_strlcat(dest, src, 17) == 24 				&& !strcmp(dest, "CCCCCCCCCCCCCCCA"))*/
	
	/* memset(dest, 0, 30); */
	/* 7  ft_strlcat(dest, src, 1) == strlen(src) 		&& !strcmp(dest, ""))*/
	
	/* memset(dest, 0, 30); memset(dest, '1', 10); */
	/* 8  ft_strlcat(dest, src, 5) == strlen(src) + 5 	&& !strcmp(dest, "1111111111"))		*/
	
	/* memset(dest, 0, 30); memset(dest, '1', 10); */
	/* 9  ft_strlcat(dest, src, 5) == strlen(src) + 5 	&& !strcmp(dest, "1111111111"))		*/
	
	/* memset(dest, 0, 30); memset(dest, '1', 10); */
	/* 10  ft_strlcat(dest, "", 15) == 10 				&& !strcmp(dest, "1111111111"))		*/
	
	/* memset(dest, 0, 30); */
	/* 11  ft_strlcat(dest, "", 42) == 0 				&& !strcmp(dest, ""))				*/
	
	/* memset(dest, 0, 30); */
	/* 12  ft_strlcat(dest, "", 0) == 0 				&& !strcmp(dest, ""))				*/
	
	/* memset(dest, 0, 30); */
	/* 13  ft_strlcat(dest, "123", 1) == 3 				&& !strcmp(dest, ""))				*/
	
	/* memset(dest, 0, 30); */
	/* 14  ft_strlcat(dest, "123", 2) == 3 				&& !strcmp(dest, "1"))				*/
	
	/* memset(dest, 0, 30); */
	/* 15  ft_strlcat(dest, "123", 3) == 3 				&& !strcmp(dest, "12"))				*/
	
	/* memset(dest, 0, 30); */
	/* 16  ft_strlcat(dest, "123", 4) == 3 				&& !strcmp(dest, "123"))			*/
	
	/* memset(dest, 0, 30); */
	/* 17  ft_strlcat(dest, "123", 0) == 3 				&& !strcmp(dest, ""))				*/