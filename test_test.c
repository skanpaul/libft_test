#include "libft.h"
#include "libft_test.h"
#include <stdio.h>
/* ************************************************************************** */
void test_test(void)
{
	printf("\u222F    \n");
	printf("    \n", 0x222F);
	printf("\uFB49    \n");

}

/* void test_test(void)
{
		char c;
		unsigned uc;

		printf("\nCHAR ==> UNSIGNED CHAR\n\n");

		c = 0;
		uc = (unsigned char) c;
		printf("c: (%#010x) %d (%c) | uc: (%#010x) %d (%c) \n", c, c, c, uc, uc, uc);

		c = 65;
		uc = (unsigned char) c;
		printf("c: (%#010x) %d (%c) | uc: (%#010x) %d (%c) \n", c, c, c, uc, uc, uc);

		c = 97;
		uc = (unsigned char) c;
		printf("c: (%#010x) %d (%c) | uc: (%#010x) %d (%c) \n", c, c, c, uc, uc, uc);

		c = 127;
		uc = (unsigned char) c;
		printf("c: (%#010x) %d (%c) | uc: (%#010x) %d (%c) \n", c, c, c, uc, uc, uc);

		c = -128;
		uc = (unsigned char) c;
		printf("c: (%#010x) %d (%c) | uc: (%#010x) %d (%c) \n", c, c, c, uc, uc, uc);

		c = -1;
		uc = (unsigned char) c;
		printf("c: (%#010x) %d (%c) | uc: (%#010x) %d (%c) \n", c, c, c, uc, uc, uc); */

/* ************************************************************************** */
/* 		printf("\nUNSIGNED CHAR ==> CHAR\n\n");
		
		uc = 0;
		c = (char)uc;
		printf("uc: (%#010x) %d (%c) | c: (%#010x) %d (%c)\n", uc, uc, uc, c, c, c);

		uc = 65;
		c = (char)uc;
		printf("uc: (%#010x) %d (%c) | c: (%#010x) %d (%c)\n", uc, uc, uc, c, c, c);

		uc = 97;
		c = (char)uc;
		printf("uc: (%#010x) %d (%c) | c: (%#010x) %d (%c)\n", uc, uc, uc, c, c, c);

		uc = 127;
		c = (char)uc;
		printf("uc: (%#010x) %d (%c) | c: (%#010x) %d (%c)\n", uc, uc, uc, c, c, c);

		uc = 128;
		c = (char)uc;
		printf("uc: (%#010x) %d (%c) | c: (%#010x) %d (%c)\n", uc, uc, uc, c, c, c);

		uc = 255;
		c = (char)uc;
		printf("uc: (%#010x) %d (%c) | c: (%#010x) %d (%c)\n", uc, uc, uc, c, c, c); 

}*/
