/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <marvin@42lausanne.ch>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:09:43 by ski               #+#    #+#             */
/*   Updated: 2021/10/28 10:10:45 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libft_test.h"
# include "sk_lib.h"

/* ************************************************************************** */
enum e_test
{
	etest,
	e_isalpha,	e_isdigit,	e_isalnum,	e_isascii,	e_isprint,	e_strlen,
	e_memset,	e_bzero,	e_memcpy,	e_memmove,	e_strlcpy,	e_strlcat,

	e_toupper,	e_tolower,	e_strchr,	e_strrchr,	e_strncmp,	e_memchr,
	e_memcmp,	e_strnstr,	e_atoi, 

	e_calloc, 	e_strdup,
	/* ----------------------------------------*/
	e_substr, 	e_strjoin,	e_strtrim, 	e_split, 	e_itoa, 	e_strmapi
};

/* ************************************************************************** */
int	main(void)
{
	enum e_test the_test;

	the_test = e_strmapi;

	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n");

	switch(the_test)
	{
		case etest: test_test(); break;
		case e_isalpha: if(testft_isalpha()) printf("testft_isalpha \n"); 	break;
		case e_isdigit: if(testft_isdigit()) printf("testft_isdigit \n");	break;
		case e_isalnum: if(testft_isalnum()) printf("testft_isalnum \n");	break;
		case e_isascii: if(testft_isascii()) printf("testft_isascii \n");	break;	
		case e_isprint: if(testft_isprint()) printf("testft_isprint \n");	break;
		case e_strlen: if(testft_strlen()) printf("testft_strlen \n");		break;
		case e_memset: 	testft_memset(); 	break;
		case e_bzero: 	testft_bzero(); 	break;
		case e_memcpy: 	testft_memcpy(); 	break;
		case e_memmove:	testft_memmove(); 	break;
		case e_strlcpy:	testft_strlcpy(); 	break;
		case e_strlcat:	testft_strlcat();	break;

		case e_toupper:	testft_toupper(); 	break;
		case e_tolower:	testft_tolower(); 	break;
		case e_strchr:	testft_strchr(); 	break;
		case e_strrchr:	testft_strrchr(); 	break;
		case e_strncmp:	testft_strncmp(); 	break;
		case e_memchr: break;
		case e_memcmp: testft_memcmp();		break;
		case e_strnstr: testft_strnstr();	break;
		case e_atoi:	testft_atoi();		break;

		case e_calloc:	testft_calloc();	break;
		case e_strdup:	break;
		/* ----------------------------------------*/
		case e_substr:	testft_substr();	break;
		case e_strjoin:	testft_strjoin();	break;
		case e_strtrim:	testft_strtrim();	break;
		case e_split:	testft_split();	break;
		case e_itoa:	testft_itoa();	break;
		case e_strmapi:	testft_strmapi();	break;
				
		/* ----------------------------------------*/
		default: break;
	}

	return (0);	
}
/* ************************************************************************** */

