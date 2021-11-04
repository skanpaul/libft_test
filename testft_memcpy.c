#include "libft.h"
#include "libft_test.h"

#include <string.h>

/* ************************************************************************** */
void testft_memcpy(void)
{
	size_t n;
	char source[15];
	char destination[15];	

	strcpy(source, "il fait beau");
	// -------------------------------------
	n = 0;
	ft_memcpy(destination, source, n);
	memcpy(destination, source, n);
	// -------------------------------------
	n = 5;
	ft_memcpy(destination, source, n);
	memcpy(destination, source, n);
	// -------------------------------------
	n = 14;
	ft_memcpy(destination, source, n);
	memcpy(destination, source, n);
	// -------------------------------------
	n = 15;
	ft_memcpy(destination, source, n);
	memcpy(destination, source, n);
	// -------------------------------------
	n = 16;
	ft_memcpy(destination, source, n);
	memcpy(destination, source, n);
}
