#include "libft.h"
#include "libft_test.h"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* ************************************************************************** */
static void skan_error (const char *str);

/* ************************************************************************** */

void	testft_atoi(void)
{
	char str[30];

	// strcpy(str, "123"); skan_error(str);
	// strcpy(str, "x23"); skan_error(str);
	// strcpy(str, "1x3"); skan_error(str);
	// strcpy(str, "12x"); skan_error(str);

	// strcpy(str, "+123"); skan_error(str);
	// strcpy(str, "-123"); skan_error(str);

	// strcpy(str, "++123"); skan_error(str);
	// strcpy(str, "+-123"); skan_error(str);
	// strcpy(str, "-+123"); skan_error(str);
	// strcpy(str, "--123"); skan_error(str);

	//  “\t”   “\n”    “\v”    “\f”    “\r”   “ ”
	// strcpy(str, " 123"); skan_error(str);
	// strcpy(str, "\t123"); skan_error(str);
	// strcpy(str, "\n123"); skan_error(str);
	// strcpy(str, "\v123"); skan_error(str);
	// strcpy(str, "\f123"); skan_error(str);
	// strcpy(str, "\r123"); skan_error(str);
	// strcpy(str, " \t\n\v\f\r123"); skan_error(str);

	// 2147483647, -2147483648
	strcpy(str, "2147483647"); skan_error(str);
	strcpy(str, "-2147483648"); skan_error(str);


	/* 3 ft_atoi((e + "--1").c_str()) == 0) */
	/* 4 ft_atoi((e + "++1").c_str()) == 0) */
	strcpy(str, "--1"); skan_error(str);
	strcpy(str, "++1"); skan_error(str);

	

}

/* ************************************************************************** */
static void skan_error (const char *str)
{
	printf("OFFICIAL  | str: %s | value_o: %d\n\n", str, atoi(str));
	printf("PERSONNAL | str: %s | value_p: %d\n\n", str, ft_atoi(str));

	if (atoi(str) != ft_atoi(str))
	{
		printf("------------ !!! !!! ERROR ERROR ERROR ERROR !!! !!! ------------\n\n");
		exit(1);
	}

}