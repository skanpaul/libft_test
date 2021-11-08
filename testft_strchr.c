#include "libft.h"
#include "libft_test.h"

#include <string.h>
#include <stdio.h>

void testft_strchr(void)
{
	char s[] = "tripouille";
	int c;


	printf("texte: %s\n\n", s);

	c = 't';
	printf("c: (%#010x) %c (%d) | ft: %p vs %p :official\n", c, c, c, ft_strchr(s, c), strchr(s, c));
	
	c = 'l';
	printf("c: (%#010x) %c (%d) | ft: %p vs %p :official\n", c, c, c, ft_strchr(s, c), strchr(s, c));
	
	c = 'z';
	printf("c: (%#010x) %c (%d) | ft: %p vs %p :official\n", c, c, c, ft_strchr(s, c), strchr(s, c));
	
	c = 0;
	printf("c: (%#010x) %c (%d) | ft: %p vs %p :official\n", c, c, c, ft_strchr(s, c), strchr(s, c));
	
	c = 't' + 256;
	printf("c: (%#010x) %c (%d) | ft: %p vs %p :official\n", c, c, c, ft_strchr(s, c), strchr(s, c));

}

	/* 1  ft_strchr(s, 't') 		== s);  			*/
	/* 2  ft_strchr(s, 'l') 		== s + 7); 			*/
	/* 3  ft_strchr(s, 'z') 		== 0); 				*/
	/* 4  ft_strchr(s, 0) 			== s + strlen(s)); 	*/
	/* 5  ft_strchr(s, 't' + 256) 	== s); 				*/