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
	// strcpy(str, "2147483647"); skan_error(str);
	// strcpy(str, "-2147483648"); skan_error(str);


	/* 3 ft_atoi((e + "--1").c_str()) == 0) */
	/* 4 ft_atoi((e + "++1").c_str()) == 0) */
	// strcpy(str, "--1"); skan_error(str);
	// strcpy(str, "++1"); skan_error(str);


	// char n[40] = "99999999999999999999999999";  
	// atoi: |-1|
    //  ft_atoi: |-469762049|
	strcpy(str, "9223372036854775806"); skan_error(str);
	strcpy(str, "9223372036854775807"); skan_error(str);
	strcpy(str, "9223372036854775808"); skan_error(str);
	strcpy(str, "9223372036854775809"); skan_error(str);
	strcpy(str, "9223372036854775810"); skan_error(str);
	strcpy(str, "9223372036854775811"); skan_error(str);
	// sk_printmem("99999999999999999999999999", 30);
	// strcpy(str, "99999999999999999999999999"); skan_error(str);

	// char n[40] = "-99999999999999999999999999";
	//         atoi: |0|
	//      ft_atoi: |469762049|
	// strcpy(str, "-99999999999999999999999999"); skan_error(str);

}

/* ************************************************************************** */
static void skan_error (const char *str)
{
	
	int value_o;
	int value_p;

	value_o = atoi(str);
	// sk_printmem(&value_o, 24);
	printf("OFFICIAL  | str: %s | value_o: %d\n\n", str, value_o);

	value_p = ft_atoi(str);
	// sk_printmem(&value_p, 24);
	printf("PERSONNAL | str: %s | value_p: %d\n\n", str, value_p);

	// if (value_o != value_p)
	// {
	// 	printf("------------ !!! !!! ERROR ERROR ERROR ERROR !!! !!! ------------\n\n");
	// 	exit(1);
	// }

}