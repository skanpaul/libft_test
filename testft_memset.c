#include "libft.h"
#include "libft_test.h"
#include <string.h>
#include <stdio.h>

void testft_memset(void)
{
	int length;
	int c;	
	char text[20];
	void *ptr;

	ptr = NULL;
	
	c = 64;
	length = 0;
	strcpy(text, "le soleil");
	printf("   given: byte %o | len: %d | pointer: %p | text: %s\n", c, length, ptr, text);
	ptr = memset(text, c, length);
	printf("official: byte %o | len: %d | pointer: %p | text: %s\n", c, length, ptr, text);
	ptr = ft_memset(text, c, length);
	printf("  result: byte %o | len: %d | pointer: %p | text: %s\n\n", c, length, ptr, text);

	c = 64;
	length = 5;
	strcpy(text, "le soleil");
	printf("   given: byte %o | len: %d | pointer: %p | text: %s\n", c, length, ptr, text);
	ptr = memset(text, c, length);
	printf("official: byte %o | len: %d | pointer: %p | text: %s\n", c, length, ptr, text);
	ptr = ft_memset(text, c, length);
	printf("  result: byte %o | len: %d | pointer: %p | text: %s\n\n", c, length, ptr, text);

	c = 64;
	length = 20;
	strcpy(text, "le soleil");
	printf("   given: byte %o | len: %d | pointer: %p | text: %s\n", c, length, ptr, text);
	ptr = memset(text, c, length);
	printf("official: byte %o | len: %d | pointer: %p | text: %s\n", c, length, ptr, text);
	ptr = ft_memset(text, c, length);
	printf("  result: byte %o | len: %d | pointer: %p | text: %s\n\n", c, length, ptr, text);

	c = 64;
	length = 20;
	strcpy(text, "le soleil");
	printf("   given: byte %o | len: %d | pointer: %p | text: %s\n", c, length, ptr, text);
	ptr = memset(text, c, length);
	printf("official: byte %o | len: %d | pointer: %p | text: %s\n", c, length, ptr, text);
	ptr = ft_memset(text, c, length);
	printf("  result: byte %o | len: %d | pointer: %p | text: %s\n\n", c, length, ptr, text);

}
