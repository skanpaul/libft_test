#include "libft.h"
#include "libft_test.h"

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/* ************************************************************************** */
// static void skan_error (char *dst, const char *src, size_t dstsize);
/* ************************************************************************** */
void	testft_memcmp(void)
{
	int retour_o;
	int retour_p;
	size_t n;
		
	char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};

// 		t_memcmp(s, sCpy, 4) 	> 	0		------------------------------------------------
	
	printf("\nTEST 1\n");
	n = 4;
	retour_o = memcmp(s, sCpy, n);
	printf("OFFICIAL | s1[]: %s | s2[]: %s | n: %zu | retour_o: %d \n", s, sCpy, n, retour_o);
	retour_p = ft_memcmp(s, sCpy, n);
	printf("PERONAL  | s1[]: %s | s2[]: %s | n: %zu | retour_o: %d \n", s, sCpy, n, retour_p);

// 		ft_memcmp(s, s2, 0) 	> 	0		------------------------------------------------
	
	printf("\nTEST 2\n");
	n = 0;
	retour_o = memcmp(s, sCpy, n);
	printf("OFFICIAL | s1[]: %s | s2[]: %s | n: %zu | retour_o: %d \n", s, s2, n, retour_o);
	retour_p = ft_memcmp(s, sCpy, n);
	printf("PERONAL  | s1[]: %s | s2[]: %s | n: %zu | retour_o: %d \n", s, s2, n, retour_p);

// 		ft_memcmp(s, s2, 1) 	> 	0		------------------------------------------------
	
	printf("\nTEST 3\n");
	n = 1;
	retour_o = memcmp(s, s2, n);
	printf("OFFICIAL | s1[]: %s | s2[]: %s | n: %zu | retour_o: %d \n", s, s2, n, retour_o);
	retour_p = ft_memcmp(s, s2, n);
	printf("PERONAL  | s1[]: %s | s2[]: %s | n: %zu | retour_o: %d \n", s, s2, n, retour_p);

// 		ft_memcmp(s2, s, 1) 	< 	0		------------------------------------------------
	
	printf("\nTEST 4\n");
	n = 1;
	retour_o = memcmp(s2, s, n);
	printf("OFFICIAL | s1[]: %s | s2[]: %s | n: %zu | retour_o: %d \n", s2, s, n, retour_o);
	retour_p = ft_memcmp(s2, s, n);
	printf("PERONAL  | s1[]: %s | s2[]: %s | n: %zu | retour_o: %d \n", s2, s, n, retour_p);

// 		ft_memcmp(s2, s3, 4) 	!= 	0		------------------------------------------------

	printf("\nTEST 5\n");
	n = 4;
	retour_o = memcmp(s2, s3, n);
	printf("OFFICIAL | s1[]: %s | s2[]: %s | n: %zu | retour_o: %d \n", s2, s3, n, retour_o);
	retour_p = ft_memcmp(s2, s3, n);
	printf("PERONAL  | s1[]: %s | s2[]: %s | n: %zu | retour_o: %d \n", s2, s3, n, retour_p);




}

	// char s[] = {-128, 0, 127, 0};
	// char sCpy[] = {-128, 0, 127, 0};
	// char s2[] = {0, 0, 127, 0};
	// char s3[] = {0, 0, 42, 0};

	// /* 1 */ check(!ft_memcmp(s, sCpy, 4)); showLeaks();
	// /* 2 */ check(!ft_memcmp(s, s2, 0)); showLeaks();
	// /* 3 */ check(ft_memcmp(s, s2, 1) > 0); showLeaks();
	// /* 4 */ check(ft_memcmp(s2, s, 1) < 0); showLeaks();
	// /* 5 */ check(ft_memcmp(s2, s3, 4) != 0); showLeaks();