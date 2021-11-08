#include "libft.h"
#include "libft_test.h"
#include <ctype.h>


void testft_tolower(void)
{
	char c;
	unsigned char uc;
	int i;

	c = 'A' - 1;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", c, c, c, ft_tolower(c), tolower(c));
	c = 'A';
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", c, c, c, ft_tolower(c), tolower(c));
	c = 'Z' + 1;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", c, c, c, ft_tolower(c), tolower(c));
	c = 'Z';
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", c, c, c, ft_tolower(c), tolower(c));
	c = 127;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", c, c, c, ft_tolower(c), tolower(c));
	c = 0;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", c, c, c, ft_tolower(c), tolower(c));
	c = -1;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", c, c, c, ft_tolower(c), tolower(c));
	c = -128;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", c, c, c, ft_tolower(c), tolower(c));
	
	printf("********************************************\n");

	uc = 'A' - 1;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", uc, uc, uc, ft_tolower(uc), tolower(uc));
	uc = 'A';
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", uc, uc, uc, ft_tolower(uc), tolower(uc));
	uc = 'Z' + 1;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", uc, uc, uc, ft_tolower(uc), tolower(uc));
	uc = 'Z';
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", uc, uc, uc, ft_tolower(uc), tolower(uc));
	uc = 0;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", uc, uc, uc, ft_tolower(uc), tolower(uc));
	uc = 127;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", uc, uc, uc, ft_tolower(uc), tolower(uc));
	uc = 128;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", uc, uc, uc, ft_tolower(uc), tolower(uc));
	uc = 255;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", uc, uc, uc, ft_tolower(uc), tolower(uc));
	
	printf("********************************************\n");
	
	i = 0;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", i, i, i, ft_tolower(i), tolower(i));
	i = 97;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", i, i, i, ft_tolower(i), tolower(i));
	i = 127;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", i, i, i, ft_tolower(i), tolower(i));
	i = 128;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", i, i, i, ft_tolower(i), tolower(i));
	i = 255;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", i, i, i, ft_tolower(i), tolower(i));
	i = 256;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", i, i, i, ft_tolower(i), tolower(i));
	i = 0x141;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", i, i, i, ft_tolower(i), tolower(i));


}

	/* 1  ft_tolower('A' - 1) 	== 'A' - 1) 	*/
	/* 2  ft_tolower('A') 		== 'a') 		*/
	/* 3  ft_tolower('Z' + 1) 	== 'Z' + 1) 	*/
	/* 4  ft_tolower('Z') 		== 'z') 		*/