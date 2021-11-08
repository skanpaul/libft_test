#include "libft.h"
#include "libft_test.h"
#include <string.h>
#include <stdio.h>

void testft_strrchr(void)
{
	int c;
	char s[] = "tripouille";
	char s2[] = "ltripouiel";

	printf("texte: %s\n\n", s);
	c = 't';
	printf("c: (%#010x) %c (%d) | ft: %p vs %p :official\n", c, c, c, ft_strrchr(s, c), strrchr(s, c));

	printf("texte: %s\n\n", s);
	c = 'l';
	printf("c: (%#010x) %c (%d) | ft: %p vs %p :official\n", c, c, c, ft_strrchr(s, c), strrchr(s, c));
	
	printf("texte: %s\n\n", s2);
	c = 'l';
	printf("c: (%#010x) %c (%d) | ft: %p vs %p :official\n", c, c, c, ft_strrchr(s2, c), strrchr(s2, c));
	
	printf("texte: %s\n\n", s);
	c = 'z';
	printf("c: (%#010x) %c (%d) | ft: %p vs %p :official\n", c, c, c, ft_strrchr(s, c), strrchr(s, c));

	printf("texte: %s\n\n", s);
	c = 0;
	printf("c: (%#010x) %c (%d) | ft: %p vs %p :official\n", c, c, c, ft_strrchr(s, c), strrchr(s, c));

	printf("texte: %s\n\n", s);
	c = 't' + 256;
	printf("c: (%#010x) %c (%d) | ft: %p vs %p :official\n", c, c, c, ft_strrchr(s, c), strrchr(s, c));












}


	char s[] = "tripouille";
	char s2[] = "ltripouiel";
	/* 1  ft_strrchr(s, 't') 		== s		 		*/
	/* 2  ft_strrchr(s, 'l') 		== s + 8			*/
	/* 3  ft_strrchr(s2, 'l') 		== s2 + 9			*/
	/* 4  ft_strrchr(s, 'z') 		== NULL				*/
	/* 5  ft_strrchr(s, 0) 			== s + strlen(s)	*/
	/* 6  ft_strrchr(s, 't' + 256) 	== s				*/