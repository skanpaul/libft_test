#include "libft_test.h"
#include "libft.h"
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>
/* ************************************************************************** */

void testft_toupper(void)
{
	char c;
	unsigned char uc;

	int i;

	c = 'a' - 1;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", c, c, c, ft_toupper(c), toupper(c));
	c = 'a';
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", c, c, c, ft_toupper(c), toupper(c));
	c = 'z' + 1;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", c, c, c, ft_toupper(c), toupper(c));
	c = 'z';
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", c, c, c, ft_toupper(c), toupper(c));
	c = 127;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", c, c, c, ft_toupper(c), toupper(c));
	c = 0;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", c, c, c, ft_toupper(c), toupper(c));
	c = -1;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", c, c, c, ft_toupper(c), toupper(c));
	c = -128;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", c, c, c, ft_toupper(c), toupper(c));
	
	printf("********************************************\n");

	uc = 'a' - 1;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", uc, uc, uc, ft_toupper(uc), toupper(uc));
	uc = 'a';
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", uc, uc, uc, ft_toupper(uc), toupper(uc));
	uc = 'z' + 1;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", uc, uc, uc, ft_toupper(uc), toupper(uc));
	uc = 'z';
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", uc, uc, uc, ft_toupper(uc), toupper(uc));
	uc = 0;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", uc, uc, uc, ft_toupper(uc), toupper(uc));
	uc = 127;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", uc, uc, uc, ft_toupper(uc), toupper(uc));
	uc = 128;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", uc, uc, uc, ft_toupper(uc), toupper(uc));
	uc = 255;
	printf("input: (%#010X) %c (%d) | ft: %c vs %c : official\n", uc, uc, uc, ft_toupper(uc), toupper(uc));
	
	printf("********************************************\n");
	
	i = 0;
	printf("input: %c (%d) | ft: %c vs %c : official\n", i, i, ft_toupper(i), toupper(i));
	i = 97;
	printf("input: %c (%d) | ft: %c vs %c : official\n", i, i, ft_toupper(i), toupper(i));
	i = 127;
	printf("input: %c (%d) | ft: %c vs %c : official\n", i, i, ft_toupper(i), toupper(i));
	i = 128;
	printf("input: %c (%d) | ft: %c vs %c : official\n", i, i, ft_toupper(i), toupper(i));
	i = 255;
	printf("input: %c (%d) | ft: %c vs %c : official\n", i, i, ft_toupper(i), toupper(i));
	i = 256;
	printf("input: %c (%d) | ft: %c vs %c : official\n", i, i, ft_toupper(i), toupper(i));
	i = 0x161;
	printf("input: %c (%d) | ft: %c vs %c : official\n", i, i, ft_toupper(i), toupper(i));
	
	
	// input: %c | ft_toupper('a' - 1);
	// input: %c | ft_toupper('a');
	// input: %c | ft_toupper('z' + 1);
	// input: %c | ft_toupper('z');


}

	/* 1  check(input: %c | ft_toupper('a' - 1) 	== 'a' - 1); 	showLeaks(); */
	/* 2  check(input: %c | ft_toupper('a') 		== 'A'); 		showLeaks(); */
	/* 3  check(input: %c | ft_toupper('z' + 1) 	== 'z' + 1); 	showLeaks(); */
	/* 4  check(input: %c | ft_toupper('z') 		== 'Z'); 		showLeaks(); */