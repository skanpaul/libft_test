#include "libft_test.h"
#include "libft_test.h"
#include <string.h>

void testft_strrchr(void)
{
	int c;
	char s[] = "tripouille";
	char s2[] = "ltripouiel";

	c = 't';

	c = 'l';

	c = 'l';

	c = 'z';

	c = 0;

	c = 't' + 256:












}


	char s[] = "tripouille";
	char s2[] = "ltripouiel";
	/* 1  ft_strrchr(s, 't') 		== s		 		*/
	/* 2  ft_strrchr(s, 'l') 		== s + 8			*/
	/* 3  ft_strrchr(s2, 'l') 		== s2 + 9			*/
	/* 4  ft_strrchr(s, 'z') 		== NULL				*/
	/* 5  ft_strrchr(s, 0) 			== s + strlen(s)	*/
	/* 6  ft_strrchr(s, 't' + 256) 	== s				*/