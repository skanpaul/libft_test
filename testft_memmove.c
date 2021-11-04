#include "../libft/libft.h"
#include "libft_test.h"

#include <string.h>
/* ************************************************************************** */

void testft_memmove(void)
{
	char s[] = {65, 66, 67, 68, 69, 0, 45};
	char s0[] = { 0,  0,  0,  0,  0,  0, 0};

	ft_memmove(s0, s, 7);
	ft_bzero(s0, 7);
	memmove(s0, s, 7);
}

/*
char s[] = {65, 66, 67, 68, 69, 0, 45};
char s0[] = { 0,  0,  0,  0,  0,  0, 0};
char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
char sResult[] = {67, 68, 67, 68, 69, 0, 45};
char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

check(ft_memmove(s0, s, 7) == s0 && !memcmp(s, s0, 7)); showLeaks(); //Post 0
check(ft_memmove(s, s + 2, 0) && !memcmp(s, sCpy, 7)); showLeaks(); //0 move
check(ft_memmove(s, s + 2, 2) == s && !memcmp(s, sResult, 7)); showLeaks(); //forward
check(ft_memmove(sResult + 1, sResult, 2) == sResult + 1 && !memcmp(sResult, sResult2, 7)); showLeaks(); //reverse
*/