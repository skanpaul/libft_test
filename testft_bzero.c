#include "libft.h"
#include "libft_test.h"

#include <strings.h>

/* ************************************************************************** */

void testft_bzero(void)
{
	size_t n;
	char data_1[10];
	char data_2[10];
	
    // TEST 01: -----------------------------------
	strcpy(data_1, "abcdefghi");
	strcpy(data_2, "abcdefghi");
	n = 1;
	ft_bzero(data_1, n);
	bzero(data_2, n);

	// TEST 02: -----------------------------------
	strcpy(data_1, "abcdefghi");
	strcpy(data_2, "abcdefghi");
	n = 1;
	ft_bzero(data_1, n);
	bzero(data_2, n);

	// TEST 03: -----------------------------------
	strcpy(data_1, "abcdefghi");
	strcpy(data_2, "abcdefghi");
	n = 9;
	ft_bzero(data_1, n);
	bzero(data_2, n);

	// TEST 04: -----------------------------------
	strcpy(data_1, "abcdefghi");
	strcpy(data_2, "abcdefghi");
	n = 10;
	ft_bzero(data_1, n);
	bzero(data_2, n);

	// TEST 05: -----------------------------------
	strcpy(data_1, "abcdefghi");
	strcpy(data_2, "abcdefghi");
	n = 11;
	ft_bzero(data_1, n);
	bzero(data_2, n);
}
