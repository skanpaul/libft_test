#include "libft_test.h"
#include <string.h>
#include <stdio.h>

void testft_memset(void)
{
	int length = 5;
	int c = 64;

	void *ptr;

	char text[20] = "le soleil";
	printf("pointer: %p | text: %s\n\n", text, text);

	ptr = memset(text, c, length);

	printf("pointer: %p | text: %s\n\n", ptr, text);

	
}