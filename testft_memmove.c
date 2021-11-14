#include "libft.h"
#include "libft_test.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
/* ************************************************************************** */

void testft_memmove(void)
{
	char *src;
	char dst[50];
	size_t len;

	// ft_memmove("", "" - 1, 0); -------------------------------
	strcpy(dst, "");
	src = dst - 1;
	len = 0;
	memcpy(dst, src, len);
	sk_printmem(dst, 30);
	strcpy(dst, "");
	src = dst - 1;
	ft_memcpy(dst, src, len);
	sk_printmem(dst, 30);
	
	printf("\n");

}

/* ************************************************************************** */

/* --------------------------------------------------------------------- */
// // char chain1[50];
// // char chain2[50];
// char sResult[] = {64, 65, 66, 67, 68, 0, 45};
// char sResult2[] = {48, 49, 50, 51, 52, 0, 45};
// printf("sizeof sResult : %lu\n", sizeof(sResult));
// printf("sizeof sResult2: %lu\n", sizeof(sResult2));
// printf("\n");
// /* -------------------------------------------------- */
// printf("pointer sResult   : %p\n", sResult);
// printf("pointer sResult +1: %p\n", sResult + 1);
// // memmove(sResult + 1, sResult, 2) ;
// ft_memmove(sResult + 1, sResult, 2) ;

/*
char s[] = {65, 66, 67, 68, 69, 0, 45};
char s0[] = { 0,  0,  0,  0,  0,  0, 0};
char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
char sResult[] = {67, 68, 67, 68, 69, 0, 45};
char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

check(ft_memmove(s0, s, 7) == s0 && !memcmp(s, s0, 7)); showLeaks(); //Post 0
check(ft_memmove(s, s + 2, 0) && !memcmp(s, sCpy, 7)); showLeaks(); //0 move
check(ft_memmove(s, s + 2, 2) == s && !memcmp(s, sResult, 7)); showLeaks(); //forward
check(ft_memmove(sResult + 1, sResult, 2) == sResult + 1 && !memcmp(sResult, sResult2, 7)); showLeaks(); //reverse
*/

/* --------------------------------------------------------------------- */
// size_t len;
// char	src_o[] = "lorem ipsum dolor sit amet";	// 27 elements
// char	src_p[] = "lorem ipsum dolor sit amet";	// 27 elements
// char	text[20] = "con\0sec\0\0te\0tur";			// 16 elements
// char	*ctrl;
// char	*dst_o;
// char	*dst_p;
// printf("sizeof(src_o): %zu | address: %p\n\n", sizeof(src_o), src_o);
// printf("sizeof(src_p): %zu | address: %p\n\n", sizeof(src_p), src_p);
// len = 10;
// dst_o = src_o + 1;
// // write(1, src_o, 28);
// // write(1, "\n", 1);
// ctrl = memmove(dst_o, text, len);
// if (ctrl == NULL) write(1, "dest's adress was not returned\n", 31);
// write(1, dst_o, 27);
// write(1, "\n\n", 2);
// len = 10;
// dst_p = src_p + 1;
// // write(1, src_p, 28);
// // write(1, "\n", 1);
// ctrl = ft_memmove(dst_p, text, len);
// if (ctrl == NULL) write(1, "dest's adress was not returned\n", 31);
// write(1, dst_p, 27);
// write(1, "\n\n", 2);
// write(1, "\n", 1);