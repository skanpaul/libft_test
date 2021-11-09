#include "libft.h"
#include "libft_test.h"

#include <stdio.h>
#include <string.h>
/* ************************************************************************** */

void testft_memmove(void)
{
	
	// char chain1[50];
	// char chain2[50];
	
	char sResult[] = {64, 65, 66, 67, 68, 0, 45};
	char sResult2[] = {48, 49, 50, 51, 52, 0, 45};	

	printf("sizeof sResult : %lu\n", sizeof(sResult));
	printf("sizeof sResult2: %lu\n", sizeof(sResult2));
	printf("\n");
	/* -------------------------------------------------- */
	printf("pointer sResult   : %p\n", sResult);
	printf("pointer sResult +1: %p\n", sResult + 1);

	
	
	// memmove(sResult + 1, sResult, 2) ;
	ft_memmove(sResult + 1, sResult, 2) ;


}
/* ************************************************************************** */
// char	src[] = "lorem ipsum dolor sit amet";
// char	*dest;

// else if (arg == 2)
// {
// 	if (dest != ft_memmove(dest, "con\0sec\0\0te\0tur", 10))
// 		write(1, "dest's adress was not returned\n", 31);
// 	write(1, dest, 22);
// }
/* ************************************************************************** */
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
